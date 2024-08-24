#ifndef HEADER_PBLAS_H
#define HEADER_PBLAS_H

/* Header by scalapack_files_create.create_cpblas
 * Generated: 2024-08-23 22:12:17.846995
 * Version scalapack_files_create.create_cpblas: https://github.com/pierre-24/scalapack-c-headers/tree/cbcccac4
 * Version scalapack: https://github.com/Reference-ScaLAPACK/scalapack/tree/0128dc24
 */

/* Macros defined in reference scalapack.
 * See https://github.com/Reference-ScaLAPACK/scalapack/blob/master/PBLAS/SRC/pblas.h
 */
#ifndef Int
#define Int int
#endif // Int

#ifndef F_CHAR_T
#define F_CHAR_T char*
#endif // F_CHAR_T


/* Declarations
 */
extern void pcagemv_(const F_CHAR_T TRANS, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* BETA, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pdagemv_(const F_CHAR_T TRANS, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* BETA, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void psagemv_(const F_CHAR_T TRANS, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* BETA, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pzagemv_(const F_CHAR_T TRANS, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* BETA, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pcahemv_(const F_CHAR_T UPLO, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* BETA, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pzahemv_(const F_CHAR_T UPLO, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* BETA, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pcamax_(const Int* N, float* AMAX, Int* INDX, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pdamax_(const Int* N, double* AMAX, Int* INDX, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void psamax_(const Int* N, float* AMAX, Int* INDX, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pzamax_(const Int* N, double* AMAX, Int* INDX, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pdasum_(const Int* N, double* ASUM, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void psasum_(const Int* N, float* ASUM, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pdasymv_(const F_CHAR_T UPLO, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* BETA, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void psasymv_(const F_CHAR_T UPLO, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* BETA, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pcatrmv_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* BETA, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pdatrmv_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* BETA, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void psatrmv_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* BETA, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pzatrmv_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* BETA, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pcaxpy_(const Int* N, const float* ALPHA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pdaxpy_(const Int* N, const double* ALPHA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void psaxpy_(const Int* N, const float* ALPHA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pzaxpy_(const Int* N, const double* ALPHA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pscasum_(const Int* N, float* ASUM, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pscnrm2_(const Int* N, float* NORM2, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pccopy_(const Int* N, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pdcopy_(const Int* N, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void picopy_(const Int* N, const Int* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, Int* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pscopy_(const Int* N, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pzcopy_(const Int* N, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pddot_(const Int* N, double* DOT, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void psdot_(const Int* N, float* DOT, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pcdotc_(const Int* N, float* DOT, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pzdotc_(const Int* N, double* DOT, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pcdotu_(const Int* N, float* DOT, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pzdotu_(const Int* N, double* DOT, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pzdscal_(const Int* N, const double* ALPHA, double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pcgeadd_(const F_CHAR_T TRANS, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pdgeadd_(const F_CHAR_T TRANS, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void psgeadd_(const F_CHAR_T TRANS, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pzgeadd_(const F_CHAR_T TRANS, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pcgemm_(const F_CHAR_T TRANSA, const F_CHAR_T TRANSB, const Int* M, const Int* N, const Int* K, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* B, const Int* IB, const Int* JB, const Int* DESCB, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pdgemm_(const F_CHAR_T TRANSA, const F_CHAR_T TRANSB, const Int* M, const Int* N, const Int* K, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* B, const Int* IB, const Int* JB, const Int* DESCB, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void psgemm_(const F_CHAR_T TRANSA, const F_CHAR_T TRANSB, const Int* M, const Int* N, const Int* K, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* B, const Int* IB, const Int* JB, const Int* DESCB, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pzgemm_(const F_CHAR_T TRANSA, const F_CHAR_T TRANSB, const Int* M, const Int* N, const Int* K, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* B, const Int* IB, const Int* JB, const Int* DESCB, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pcgemv_(const F_CHAR_T TRANS, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* BETA, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pdgemv_(const F_CHAR_T TRANS, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* BETA, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void psgemv_(const F_CHAR_T TRANS, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* BETA, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pzgemv_(const F_CHAR_T TRANS, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* BETA, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pdger_(const Int* M, const Int* N, const double* ALPHA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY, double* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void psger_(const Int* M, const Int* N, const float* ALPHA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY, float* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pcgerc_(const Int* M, const Int* N, const float* ALPHA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY, float* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pzgerc_(const Int* M, const Int* N, const double* ALPHA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY, double* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pcgeru_(const Int* M, const Int* N, const float* ALPHA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY, float* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pzgeru_(const Int* M, const Int* N, const double* ALPHA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY, double* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pchemm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* B, const Int* IB, const Int* JB, const Int* DESCB, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pzhemm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* B, const Int* IB, const Int* JB, const Int* DESCB, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pchemv_(const F_CHAR_T UPLO, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* BETA, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pzhemv_(const F_CHAR_T UPLO, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* BETA, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pcher2_(const F_CHAR_T UPLO, const Int* N, const float* ALPHA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY, float* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pzher2_(const F_CHAR_T UPLO, const Int* N, const double* ALPHA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY, double* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pcher2k_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* N, const Int* K, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* B, const Int* IB, const Int* JB, const Int* DESCB, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pzher2k_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* N, const Int* K, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* B, const Int* IB, const Int* JB, const Int* DESCB, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pcher_(const F_CHAR_T UPLO, const Int* N, const float* ALPHA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, float* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pzher_(const F_CHAR_T UPLO, const Int* N, const double* ALPHA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, double* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pcherk_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* N, const Int* K, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pzherk_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* N, const Int* K, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pdnrm2_(const Int* N, double* NORM2, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void psnrm2_(const Int* N, float* NORM2, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pcscal_(const Int* N, const float* ALPHA, float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pdscal_(const Int* N, const double* ALPHA, double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void psscal_(const Int* N, const float* ALPHA, float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pzscal_(const Int* N, const double* ALPHA, double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pcsscal_(const Int* N, const float* ALPHA, float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pcswap_(const Int* N, float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pdswap_(const Int* N, double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void psswap_(const Int* N, float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pzswap_(const Int* N, double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pcsymm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* B, const Int* IB, const Int* JB, const Int* DESCB, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pdsymm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* B, const Int* IB, const Int* JB, const Int* DESCB, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pssymm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* B, const Int* IB, const Int* JB, const Int* DESCB, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pzsymm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* B, const Int* IB, const Int* JB, const Int* DESCB, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pdsymv_(const F_CHAR_T UPLO, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* BETA, double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pssymv_(const F_CHAR_T UPLO, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* BETA, float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY);
extern void pdsyr2_(const F_CHAR_T UPLO, const Int* N, const double* ALPHA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const double* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY, double* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pssyr2_(const F_CHAR_T UPLO, const Int* N, const float* ALPHA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, const float* Y, const Int* IY, const Int* JY, const Int* DESCY, const Int* INCY, float* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pcsyr2k_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* N, const Int* K, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* B, const Int* IB, const Int* JB, const Int* DESCB, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pdsyr2k_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* N, const Int* K, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* B, const Int* IB, const Int* JB, const Int* DESCB, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pssyr2k_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* N, const Int* K, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* B, const Int* IB, const Int* JB, const Int* DESCB, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pzsyr2k_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* N, const Int* K, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* B, const Int* IB, const Int* JB, const Int* DESCB, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pdsyr_(const F_CHAR_T UPLO, const Int* N, const double* ALPHA, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, double* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pssyr_(const F_CHAR_T UPLO, const Int* N, const float* ALPHA, const float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX, float* A, const Int* IA, const Int* JA, const Int* DESCA);
extern void pcsyrk_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* N, const Int* K, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pdsyrk_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* N, const Int* K, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pssyrk_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* N, const Int* K, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pzsyrk_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* N, const Int* K, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pctradd_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pdtradd_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pstradd_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pztradd_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pdtran_(const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pstran_(const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pctranc_(const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pztranc_(const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pctranu_(const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, const float* BETA, float* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pztranu_(const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, const double* BETA, double* C, const Int* IC, const Int* JC, const Int* DESCC);
extern void pctrmm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, float* B, const Int* IB, const Int* JB, const Int* DESCB);
extern void pdtrmm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, double* B, const Int* IB, const Int* JB, const Int* DESCB);
extern void pstrmm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, float* B, const Int* IB, const Int* JB, const Int* DESCB);
extern void pztrmm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, double* B, const Int* IB, const Int* JB, const Int* DESCB);
extern void pctrmv_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* N, const float* A, const Int* IA, const Int* JA, const Int* DESCA, float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pdtrmv_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* N, const double* A, const Int* IA, const Int* JA, const Int* DESCA, double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pstrmv_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* N, const float* A, const Int* IA, const Int* JA, const Int* DESCA, float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pztrmv_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* N, const double* A, const Int* IA, const Int* JA, const Int* DESCA, double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pctrsm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, float* B, const Int* IB, const Int* JB, const Int* DESCB);
extern void pdtrsm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, double* B, const Int* IB, const Int* JB, const Int* DESCB);
extern void pstrsm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* M, const Int* N, const float* ALPHA, const float* A, const Int* IA, const Int* JA, const Int* DESCA, float* B, const Int* IB, const Int* JB, const Int* DESCB);
extern void pztrsm_(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* M, const Int* N, const double* ALPHA, const double* A, const Int* IA, const Int* JA, const Int* DESCA, double* B, const Int* IB, const Int* JB, const Int* DESCB);
extern void pctrsv_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* N, const float* A, const Int* IA, const Int* JA, const Int* DESCA, float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pdtrsv_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* N, const double* A, const Int* IA, const Int* JA, const Int* DESCA, double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pstrsv_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* N, const float* A, const Int* IA, const Int* JA, const Int* DESCA, float* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pztrsv_(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int* N, const double* A, const Int* IA, const Int* JA, const Int* DESCA, double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pdzasum_(const Int* N, double* ASUM, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);
extern void pdznrm2_(const Int* N, double* NORM2, const double* X, const Int* IX, const Int* JX, const Int* DESCX, const Int* INCX);

#endif // HEADER_PBLAS_H