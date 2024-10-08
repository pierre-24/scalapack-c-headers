#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>

#include <blacs.h>
#include <pblas.h>
#include <scalapack.h>

lapack_int I_ZERO = 0, I_ONE = 1;
double D_ONE = 1.0, D_ZERO = 0.0, D_M_ONE = -1.f;

int main(int argc, char* argv[]) {
    lapack_int N = 128, blk_size = 16;
    lapack_int nprocs, ctx_sys, grid_M, grid_N, glob_i, glob_j;
    lapack_int  iam, loc_row, loc_col, loc_M, loc_N, loc_LD, info;
    lapack_int desc_A[9];
    double *loc_A, *loc_I, *loc_C; // loc_A, loc_I, and loc_C are NxN matrices

    // seed
    srand(time(NULL));

    // initialize BLACS & system context
    blacs_pinfo_(&iam, &nprocs);
    blacs_get_(&I_ZERO, &I_ZERO, &ctx_sys);

    // create a (grid_M x grid_N) grid
    grid_M = sqrt((double) nprocs);
    grid_N = nprocs / grid_M;
    blacs_gridinit_(&ctx_sys, "R", &grid_M, &grid_N);
    blacs_gridinfo_(&ctx_sys, &grid_M, &grid_N, &loc_row, &loc_col);

    if(loc_row >= 0 && loc_col >= 0) { // if I'm in grid
        loc_M = numroc_(&N, &blk_size, &loc_row, &I_ZERO, &grid_M);
        loc_N = numroc_(&N, &blk_size, &loc_col, &I_ZERO, &grid_N);

        loc_LD =  loc_M;
        loc_A = calloc(loc_M * loc_N, sizeof(double));
        loc_I = calloc(loc_M * loc_N, sizeof(double));
        loc_C = calloc(loc_M * loc_N, sizeof(double));

        // fill arrays locally
        for(lapack_int loc_j=1; loc_j <= loc_N; loc_j++) {
            glob_j = indxl2g_(&loc_j, &blk_size, &loc_col, &I_ZERO, &grid_N);
            for(lapack_int loc_i=1; loc_i <= loc_M; loc_i++) { // set loc_A[i,j]
                glob_i = indxl2g_(&loc_i, &blk_size, &loc_row, &I_ZERO, &grid_M);
                loc_A[(loc_j - 1) * loc_LD + (loc_i - 1)] = ((double) rand()) / INT_MAX;
                loc_I[(loc_j - 1) * loc_LD + (loc_i - 1)] = (glob_i == glob_j);
            }
        }

        // create descriptor for loc_A, I and loc_C
        descinit_(desc_A,
                  &N, &N, &blk_size, &blk_size,
                  &I_ZERO, &I_ZERO, &ctx_sys,
                  &loc_LD, &info);

        // compute loc_C = loc_A * loc_I
        pdgemm_("N", "N", &N, &N, &N,
                &D_ONE, loc_A, &I_ONE, &I_ONE, desc_A,
                loc_I, &I_ONE, &I_ONE, desc_A,
                &D_ZERO, loc_C, &I_ONE, &I_ONE, desc_A
        );

        // compute loc_A = loc_C * loc_I - loc_A
        pdgemm_("N", "N", &N, &N, &N,
                &D_ONE, loc_C, &I_ONE, &I_ONE, desc_A,
                loc_I, &I_ONE, &I_ONE, desc_A,
                &D_M_ONE, loc_A, &I_ONE, &I_ONE, desc_A
        );

        // fetch the maximum (i.e., the inf-norm)
        double* work = (double*) calloc(loc_LD, sizeof(double));
        double max = pdlange_("I", &N, &N, loc_A, &I_ONE, &I_ONE, desc_A, work);

        if(iam == 0)
            printf("%f\n", max);

        free(loc_A);
        free(loc_I);
        free(loc_C);
        free(work);
        blacs_gridexit_(&ctx_sys);
    }

    blacs_exit_(&I_ZERO);
    return EXIT_SUCCESS;
}
