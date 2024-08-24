#ifndef HEADER_SCALAPACKE_PBLAS_H
#define HEADER_SCALAPACKE_PBLAS_H

/* Header by scalapack_files_create.create_cpblas
 * Generated: 2024-08-24 10:55:55.088993
 * Version scalapack_files_create.create_cpblas: https://github.com/pierre-24/scalapack-c-headers/tree/ae44a12a
 * Version scalapack: https://github.com/Reference-ScaLAPACK/scalapack/tree/0128dc24
 */

#include "pblas.h"

/* Declarations
 */
void SCALAPACKE_pcagemv(const F_CHAR_T TRANS, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pdagemv(const F_CHAR_T TRANS, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_psagemv(const F_CHAR_T TRANS, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pzagemv(const F_CHAR_T TRANS, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pcahemv(const F_CHAR_T UPLO, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pzahemv(const F_CHAR_T UPLO, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pcamax(const Int N, float* AMAX, Int* INDX, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pdamax(const Int N, double* AMAX, Int* INDX, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_psamax(const Int N, float* AMAX, Int* INDX, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pzamax(const Int N, double* AMAX, Int* INDX, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pdasum(const Int N, double* ASUM, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_psasum(const Int N, float* ASUM, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pdasymv(const F_CHAR_T UPLO, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_psasymv(const F_CHAR_T UPLO, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pcatrmv(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pdatrmv(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_psatrmv(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pzatrmv(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pcaxpy(const Int N, const float* ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pdaxpy(const Int N, const double ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_psaxpy(const Int N, const float ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pzaxpy(const Int N, const double* ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pscasum(const Int N, float* ASUM, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pscnrm2(const Int N, float* NORM2, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pccopy(const Int N, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pdcopy(const Int N, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_picopy(const Int N, const Int* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, Int* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pscopy(const Int N, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pzcopy(const Int N, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pddot(const Int N, double* DOT, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_psdot(const Int N, float* DOT, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pcdotc(const Int N, float* DOT, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pzdotc(const Int N, double* DOT, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pcdotu(const Int N, float* DOT, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pzdotu(const Int N, double* DOT, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pzdscal(const Int N, const double ALPHA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pcgeadd(const F_CHAR_T TRANS, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pdgeadd(const F_CHAR_T TRANS, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_psgeadd(const F_CHAR_T TRANS, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pzgeadd(const F_CHAR_T TRANS, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pcgemm(const F_CHAR_T TRANSA, const F_CHAR_T TRANSB, const Int M, const Int N, const Int K, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pdgemm(const F_CHAR_T TRANSA, const F_CHAR_T TRANSB, const Int M, const Int N, const Int K, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_psgemm(const F_CHAR_T TRANSA, const F_CHAR_T TRANSB, const Int M, const Int N, const Int K, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pzgemm(const F_CHAR_T TRANSA, const F_CHAR_T TRANSB, const Int M, const Int N, const Int K, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pcgemv(const F_CHAR_T TRANS, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pdgemv(const F_CHAR_T TRANS, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_psgemv(const F_CHAR_T TRANS, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pzgemv(const F_CHAR_T TRANS, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pdger(const Int M, const Int N, const double ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, double* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_psger(const Int M, const Int N, const float ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, float* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pcgerc(const Int M, const Int N, const float* ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, float* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pzgerc(const Int M, const Int N, const double* ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, double* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pcgeru(const Int M, const Int N, const float* ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, float* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pzgeru(const Int M, const Int N, const double* ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, double* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pchemm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pzhemm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pchemv(const F_CHAR_T UPLO, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pzhemv(const F_CHAR_T UPLO, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pcher2(const F_CHAR_T UPLO, const Int N, const float* ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, float* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pzher2(const F_CHAR_T UPLO, const Int N, const double* ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, double* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pcher2k(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int N, const Int K, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pzher2k(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int N, const Int K, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pcher(const F_CHAR_T UPLO, const Int N, const float ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pzher(const F_CHAR_T UPLO, const Int N, const double ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pcherk(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int N, const Int K, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pzherk(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int N, const Int K, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pdnrm2(const Int N, double* NORM2, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_psnrm2(const Int N, float* NORM2, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pcscal(const Int N, const float* ALPHA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pdscal(const Int N, const double ALPHA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_psscal(const Int N, const float ALPHA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pzscal(const Int N, const double* ALPHA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pcsscal(const Int N, const float ALPHA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pcswap(const Int N, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pdswap(const Int N, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_psswap(const Int N, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pzswap(const Int N, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pcsymm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pdsymm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pssymm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pzsymm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pdsymv(const F_CHAR_T UPLO, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pssymv(const F_CHAR_T UPLO, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY);
void SCALAPACKE_pdsyr2(const F_CHAR_T UPLO, const Int N, const double ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, double* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pssyr2(const F_CHAR_T UPLO, const Int N, const float ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, float* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pcsyr2k(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int N, const Int K, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pdsyr2k(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int N, const Int K, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pssyr2k(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int N, const Int K, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pzsyr2k(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int N, const Int K, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pdsyr(const F_CHAR_T UPLO, const Int N, const double ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pssyr(const F_CHAR_T UPLO, const Int N, const float ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* A, const Int IA, const Int JA, const Int* DESCA);
void SCALAPACKE_pcsyrk(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int N, const Int K, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pdsyrk(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int N, const Int K, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pssyrk(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int N, const Int K, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pzsyrk(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int N, const Int K, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pctradd(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pdtradd(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pstradd(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pztradd(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pdtran(const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pstran(const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pctranc(const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pztranc(const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pctranu(const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pztranu(const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC);
void SCALAPACKE_pctrmm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB);
void SCALAPACKE_pdtrmm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB);
void SCALAPACKE_pstrmm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB);
void SCALAPACKE_pztrmm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB);
void SCALAPACKE_pctrmv(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pdtrmv(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pstrmv(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pztrmv(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pctrsm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB);
void SCALAPACKE_pdtrsm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB);
void SCALAPACKE_pstrsm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB);
void SCALAPACKE_pztrsm(const F_CHAR_T SIDE, const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB);
void SCALAPACKE_pctrsv(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pdtrsv(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pstrsv(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pztrsv(const F_CHAR_T UPLO, const F_CHAR_T TRANS, const F_CHAR_T DIAG, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pdzasum(const Int N, double* ASUM, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
void SCALAPACKE_pdznrm2(const Int N, double* NORM2, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX);
#endif // HEADER_SCALAPACKE_BLACS_H