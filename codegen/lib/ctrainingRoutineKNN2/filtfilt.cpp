/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * filtfilt.cpp
 *
 * Code generation for function 'filtfilt'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "filtfilt.h"
#include "ctrainingRoutineKNN2_emxutil.h"
#include "filter.h"
#include "bsxfun.h"
#include "fillIn.h"
#include "introsort.h"
#include "solve_from_lu.h"
#include "makeCXSparseMatrix.h"
#include "solve_from_qr.h"

/* Type Definitions */
#include "cs.h"

/* Function Declarations */
static void b_getCoeffsAndInitialConditions(double b1_data[], int b1_size[1],
  double a1_data[], int a1_size[1], double zi_data[], int zi_size[1], double *L);
static int div_s32(int numerator, int denominator);
static int div_s32_floor(int numerator, int denominator);
static void getCoeffsAndInitialConditions(double b1_data[], int b1_size[1],
  double a1_data[], int a1_size[1], double zi_data[], int zi_size[1], double *L);

/* Function Definitions */
static void b_getCoeffsAndInitialConditions(double b1_data[], int b1_size[1],
  double a1_data[], int a1_size[1], double zi_data[], int zi_size[1], double *L)
{
  double vals[7];
  double outBuff[3];
  coder_internal_sparse y;
  int cptr;
  int sortedIndices[7];
  cell_wrap_6 this_tunableEnvironment[2];
  static const signed char a[7] = { 1, 1, 1, 2, 3, 2, 3 };

  static const signed char b[7] = { 1, 2, 3, 2, 3, 1, 2 };

  signed char cidxInt[7];
  signed char ridxInt[7];
  cs_di* cxA;
  cs_dis * S;
  cs_din * N;
  double tol;
  *L = 1.0;
  b1_size[0] = 4;
  a1_size[0] = 4;
  b1_data[0] = 0.950971887923409;
  a1_data[0] = 1.0;
  b1_data[1] = -2.85291566377023;
  a1_data[1] = -2.89947959461186;
  b1_data[2] = 2.85291566377023;
  a1_data[2] = 2.803947977383;
  b1_data[3] = -0.950971887923409;
  a1_data[3] = -0.904347531392409;
  vals[0] = -1.8994795946118601;
  vals[1] = 2.803947977383;
  vals[3] = 1.0;
  vals[5] = -1.0;
  vals[2] = -0.904347531392409;
  vals[4] = 1.0;
  vals[6] = -1.0;
  outBuff[0] = -0.095592079686789067;
  outBuff[1] = 0.18643996207929447;
  outBuff[2] = -0.090962808656295469;
  c_emxInitStruct_coder_internal_(&y);
  for (cptr = 0; cptr < 7; cptr++) {
    sortedIndices[cptr] = cptr + 1;
    this_tunableEnvironment[0].f1[cptr] = a[cptr];
    this_tunableEnvironment[1].f1[cptr] = b[cptr];
  }

  b_introsort(sortedIndices, this_tunableEnvironment);
  for (cptr = 0; cptr < 7; cptr++) {
    cidxInt[cptr] = a[sortedIndices[cptr] - 1];
    ridxInt[cptr] = b[sortedIndices[cptr] - 1];
  }

  cptr = y.d->size[0];
  y.d->size[0] = 7;
  emxEnsureCapacity_real_T(y.d, cptr);
  for (cptr = 0; cptr < 7; cptr++) {
    y.d->data[cptr] = 0.0;
  }

  cptr = y.colidx->size[0];
  y.colidx->size[0] = 4;
  emxEnsureCapacity_int32_T(y.colidx, cptr);
  y.colidx->data[0] = 1;
  cptr = y.rowidx->size[0];
  y.rowidx->size[0] = 7;
  emxEnsureCapacity_int32_T(y.rowidx, cptr);
  for (cptr = 0; cptr < 7; cptr++) {
    y.rowidx->data[cptr] = 0;
  }

  cptr = 0;
  while ((cptr + 1 <= 7) && (cidxInt[cptr] == 1)) {
    y.rowidx->data[cptr] = ridxInt[cptr];
    cptr++;
  }

  y.colidx->data[1] = cptr + 1;
  while ((cptr + 1 <= 7) && (cidxInt[cptr] == 2)) {
    y.rowidx->data[cptr] = ridxInt[cptr];
    cptr++;
  }

  y.colidx->data[2] = cptr + 1;
  while ((cptr + 1 <= 7) && (cidxInt[cptr] == 3)) {
    y.rowidx->data[cptr] = ridxInt[cptr];
    cptr++;
  }

  y.colidx->data[3] = cptr + 1;
  for (cptr = 0; cptr < 7; cptr++) {
    y.d->data[cptr] = vals[sortedIndices[cptr] - 1];
  }

  sparse_fillIn(&y);
  cxA = makeCXSparseMatrix(y.colidx->data[y.colidx->size[0] - 1] - 1, 3, 3,
    &y.colidx->data[0], &y.rowidx->data[0], &y.d->data[0]);
  S = cs_di_sqr(2, cxA, 0);
  N = cs_di_lu(cxA, S, 1);
  cs_di_spfree(cxA);
  if (N == NULL) {
    cs_di_sfree(S);
    cs_di_nfree(N);
    cxA = makeCXSparseMatrix(y.colidx->data[y.colidx->size[0] - 1] - 1, 3, 3,
      &y.colidx->data[0], &y.rowidx->data[0], &y.d->data[0]);
    S = cs_di_sqr(2, cxA, 1);
    N = cs_di_qr(cxA, S);
    cs_di_spfree(cxA);
    qr_rank_di(N, &tol);
    solve_from_qr_di(N, S, (double *)&outBuff[0], 3, 3);
    cs_di_sfree(S);
    cs_di_nfree(N);
  } else {
    solve_from_lu_di(N, S, (double *)&outBuff[0], 3);
    cs_di_sfree(S);
    cs_di_nfree(N);
  }

  c_emxFreeStruct_coder_internal_(&y);
  zi_size[0] = 3;
  zi_data[0] = outBuff[0];
  zi_data[1] = outBuff[1];
  zi_data[2] = outBuff[2];
}

static int div_s32(int numerator, int denominator)
{
  int quotient;
  unsigned int b_numerator;
  unsigned int b_denominator;
  unsigned int tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }
  } else {
    if (numerator < 0) {
      b_numerator = ~static_cast<unsigned int>(numerator) + 1U;
    } else {
      b_numerator = static_cast<unsigned int>(numerator);
    }

    if (denominator < 0) {
      b_denominator = ~static_cast<unsigned int>(denominator) + 1U;
    } else {
      b_denominator = static_cast<unsigned int>(denominator);
    }

    tempAbsQuotient = b_numerator / b_denominator;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -static_cast<int>(tempAbsQuotient);
    } else {
      quotient = static_cast<int>(tempAbsQuotient);
    }
  }

  return quotient;
}

static int div_s32_floor(int numerator, int denominator)
{
  int quotient;
  unsigned int absNumerator;
  unsigned int absDenominator;
  boolean_T quotientNeedsNegation;
  unsigned int tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }
  } else {
    if (numerator < 0) {
      absNumerator = ~static_cast<unsigned int>(numerator) + 1U;
    } else {
      absNumerator = static_cast<unsigned int>(numerator);
    }

    if (denominator < 0) {
      absDenominator = ~static_cast<unsigned int>(denominator) + 1U;
    } else {
      absDenominator = static_cast<unsigned int>(denominator);
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }

      quotient = -static_cast<int>(tempAbsQuotient);
    } else {
      quotient = static_cast<int>(tempAbsQuotient);
    }
  }

  return quotient;
}

static void getCoeffsAndInitialConditions(double b1_data[], int b1_size[1],
  double a1_data[], int a1_size[1], double zi_data[], int zi_size[1], double *L)
{
  int cptr;
  double vals[16];
  static const double b[7] = { 0.777246521400202, -0.295149620198606,
    2.36909935327861, -0.591875563889248, 2.36909935327861, -0.295149620198606,
    0.777246521400202 };

  static const double a[7] = { 1.0, -0.348004594825511, 2.53911455972459,
    -0.585595129484226, 2.14946749012577, -0.248575079976725, 0.604109699507276
  };

  coder_internal_sparse y;
  double outBuff[6];
  int sortedIndices[16];
  cell_wrap_5 this_tunableEnvironment[2];
  static const signed char b_a[16] = { 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 2, 3, 4,
    5, 6 };

  static const signed char b_b[16] = { 1, 2, 3, 4, 5, 6, 2, 3, 4, 5, 6, 1, 2, 3,
    4, 5 };

  signed char cidxInt[16];
  signed char ridxInt[16];
  int c;
  cs_di* cxA;
  cs_dis * S;
  cs_din * N;
  double tol;
  *L = 1.0;
  b1_size[0] = 7;
  a1_size[0] = 7;
  for (cptr = 0; cptr < 7; cptr++) {
    b1_data[cptr] = b[cptr];
    a1_data[cptr] = a[cptr];
  }

  vals[0] = 1.0 + a1_data[1];
  for (cptr = 0; cptr < 5; cptr++) {
    vals[cptr + 1] = a1_data[2 + cptr];
    vals[cptr + 6] = 1.0;
    vals[cptr + 11] = -1.0;
  }

  for (cptr = 0; cptr < 6; cptr++) {
    outBuff[cptr] = b1_data[1 + cptr] - b1_data[0] * a1_data[1 + cptr];
  }

  c_emxInitStruct_coder_internal_(&y);
  for (cptr = 0; cptr < 16; cptr++) {
    sortedIndices[cptr] = cptr + 1;
    this_tunableEnvironment[0].f1[cptr] = b_a[cptr];
    this_tunableEnvironment[1].f1[cptr] = b_b[cptr];
  }

  introsort(sortedIndices, this_tunableEnvironment);
  for (cptr = 0; cptr < 16; cptr++) {
    cidxInt[cptr] = b_a[sortedIndices[cptr] - 1];
    ridxInt[cptr] = b_b[sortedIndices[cptr] - 1];
  }

  cptr = y.d->size[0];
  y.d->size[0] = 16;
  emxEnsureCapacity_real_T(y.d, cptr);
  for (cptr = 0; cptr < 16; cptr++) {
    y.d->data[cptr] = 0.0;
  }

  cptr = y.colidx->size[0];
  y.colidx->size[0] = 7;
  emxEnsureCapacity_int32_T(y.colidx, cptr);
  y.colidx->data[0] = 1;
  cptr = y.rowidx->size[0];
  y.rowidx->size[0] = 16;
  emxEnsureCapacity_int32_T(y.rowidx, cptr);
  for (cptr = 0; cptr < 16; cptr++) {
    y.rowidx->data[cptr] = 0;
  }

  cptr = 0;
  for (c = 0; c < 6; c++) {
    while ((cptr + 1 <= 16) && (cidxInt[cptr] == 1 + c)) {
      y.rowidx->data[cptr] = ridxInt[cptr];
      cptr++;
    }

    y.colidx->data[1 + c] = cptr + 1;
  }

  for (cptr = 0; cptr < 16; cptr++) {
    y.d->data[cptr] = vals[sortedIndices[cptr] - 1];
  }

  sparse_fillIn(&y);
  cxA = makeCXSparseMatrix(y.colidx->data[y.colidx->size[0] - 1] - 1, 6, 6,
    &y.colidx->data[0], &y.rowidx->data[0], &y.d->data[0]);
  S = cs_di_sqr(2, cxA, 0);
  N = cs_di_lu(cxA, S, 1);
  cs_di_spfree(cxA);
  if (N == NULL) {
    cs_di_sfree(S);
    cs_di_nfree(N);
    cxA = makeCXSparseMatrix(y.colidx->data[y.colidx->size[0] - 1] - 1, 6, 6,
      &y.colidx->data[0], &y.rowidx->data[0], &y.d->data[0]);
    S = cs_di_sqr(2, cxA, 1);
    N = cs_di_qr(cxA, S);
    cs_di_spfree(cxA);
    qr_rank_di(N, &tol);
    solve_from_qr_di(N, S, (double *)&outBuff[0], 6, 6);
    cs_di_sfree(S);
    cs_di_nfree(N);
  } else {
    solve_from_lu_di(N, S, (double *)&outBuff[0], 6);
    cs_di_sfree(S);
    cs_di_nfree(N);
  }

  c_emxFreeStruct_coder_internal_(&y);
  zi_size[0] = 6;
  for (cptr = 0; cptr < 6; cptr++) {
    zi_data[cptr] = outBuff[cptr];
  }
}

void b_efiltfilt(const emxArray_real_T *x, emxArray_real_T *y)
{
  boolean_T p;
  emxArray_real_T *xCol;
  int i14;
  int loop_ub;
  int sz_idx_1;
  double b2_data[4];
  int b2_size[1];
  double a2_data[4];
  int a2_size[1];
  double zi_data[3];
  int zi_size[1];
  double L;
  int i15;
  unsigned int sz_idx_0;
  emxArray_real_T *yc5;
  unsigned int b_sz_idx_1;
  emxArray_real_T *ytemp;
  double d2;
  int b_sz_idx_0;
  double b_b2_data[4];
  double xt[9];
  double b_a2_data[4];
  emxArray_real_T *b_xt;
  emxArray_real_T *yc3;
  emxArray_real_T *zo;
  double b_zi_data[3];
  emxArray_real_T *yc2;
  emxArray_real_T *b_zo;
  emxArray_real_T *r3;
  double unusedU0[9];
  double zo_data[3];
  emxArray_real_T *zi;
  double b_zo_data[6];
  double c_b2_data[7];
  double c_a2_data[7];
  int i16;
  double b_yc3[9];
  p = (x->size[0] == 1);
  emxInit_real_T(&xCol, 2);
  if (p) {
    i14 = xCol->size[0] * xCol->size[1];
    xCol->size[0] = x->size[1];
    xCol->size[1] = x->size[0];
    emxEnsureCapacity_real_T(xCol, i14);
    loop_ub = x->size[0];
    for (i14 = 0; i14 < loop_ub; i14++) {
      sz_idx_1 = x->size[1];
      for (i15 = 0; i15 < sz_idx_1; i15++) {
        xCol->data[i15 + xCol->size[0] * i14] = x->data[i14 + x->size[0] * i15];
      }
    }
  } else {
    i14 = xCol->size[0] * xCol->size[1];
    xCol->size[0] = x->size[0];
    xCol->size[1] = x->size[1];
    emxEnsureCapacity_real_T(xCol, i14);
    loop_ub = x->size[0] * x->size[1];
    for (i14 = 0; i14 < loop_ub; i14++) {
      xCol->data[i14] = x->data[i14];
    }
  }

  b_getCoeffsAndInitialConditions(b2_data, b2_size, a2_data, a2_size, zi_data,
    zi_size, &L);
  if (xCol->size[1] == 1) {
    emxInit_real_T(&yc5, 1);
    emxInit_real_T(&ytemp, 1);
    if (xCol->size[0] < 10000) {
      L = 2.0 * xCol->data[0];
      d2 = 2.0 * xCol->data[xCol->size[0] - 1];
      b_sz_idx_0 = xCol->size[0] - 2;
      loop_ub = xCol->size[0];
      i14 = ytemp->size[0];
      ytemp->size[0] = loop_ub + 18;
      emxEnsureCapacity_real_T(ytemp, i14);
      for (i14 = 0; i14 < 9; i14++) {
        ytemp->data[i14] = L - xCol->data[9 - i14];
      }

      for (i14 = 0; i14 < loop_ub; i14++) {
        ytemp->data[i14 + 9] = xCol->data[i14];
      }

      for (i14 = 0; i14 < 9; i14++) {
        ytemp->data[(i14 + loop_ub) + 9] = d2 - xCol->data[b_sz_idx_0 - i14];
      }

      loop_ub = ytemp->size[0] - 1;
      L = ytemp->data[0];
      i14 = yc5->size[0];
      yc5->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(yc5, i14);
      for (i14 = 0; i14 <= loop_ub; i14++) {
        yc5->data[i14] = ytemp->data[i14];
      }

      zi_size[0] = 3;
      b_zo_data[0] = zi_data[0] * L;
      b_zo_data[1] = zi_data[1] * L;
      b_zo_data[2] = zi_data[2] * L;
      b2_size[0] = 4;
      a2_size[0] = 4;
      c_b2_data[0] = b2_data[0];
      c_a2_data[0] = a2_data[0];
      c_b2_data[1] = b2_data[1];
      c_a2_data[1] = a2_data[1];
      c_b2_data[2] = b2_data[2];
      c_a2_data[2] = a2_data[2];
      c_b2_data[3] = b2_data[3];
      c_a2_data[3] = a2_data[3];
      filter(c_b2_data, b2_size, c_a2_data, a2_size, yc5, b_zo_data, zi_size,
             ytemp);
      if (1 > ytemp->size[0]) {
        i14 = 0;
        i15 = 1;
        b_sz_idx_0 = -1;
      } else {
        i14 = ytemp->size[0] - 1;
        i15 = -1;
        b_sz_idx_0 = 0;
      }

      i16 = yc5->size[0];
      loop_ub = div_s32_floor(b_sz_idx_0 - i14, i15);
      yc5->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(yc5, i16);
      for (b_sz_idx_0 = 0; b_sz_idx_0 <= loop_ub; b_sz_idx_0++) {
        yc5->data[b_sz_idx_0] = ytemp->data[i14 + i15 * b_sz_idx_0];
      }

      i14 = ytemp->size[0];
      ytemp->size[0] = yc5->size[0];
      emxEnsureCapacity_real_T(ytemp, i14);
      loop_ub = yc5->size[0];
      for (i14 = 0; i14 < loop_ub; i14++) {
        ytemp->data[i14] = yc5->data[i14];
      }

      loop_ub = ytemp->size[0] - 1;
      L = ytemp->data[0];
      i14 = yc5->size[0];
      yc5->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(yc5, i14);
      for (i14 = 0; i14 <= loop_ub; i14++) {
        yc5->data[i14] = ytemp->data[i14];
      }

      zi_size[0] = 3;
      b_zo_data[0] = zi_data[0] * L;
      b_zo_data[1] = zi_data[1] * L;
      b_zo_data[2] = zi_data[2] * L;
      b2_size[0] = 4;
      a2_size[0] = 4;
      c_b2_data[0] = b2_data[0];
      c_a2_data[0] = a2_data[0];
      c_b2_data[1] = b2_data[1];
      c_a2_data[1] = a2_data[1];
      c_b2_data[2] = b2_data[2];
      c_a2_data[2] = a2_data[2];
      c_b2_data[3] = b2_data[3];
      c_a2_data[3] = a2_data[3];
      filter(c_b2_data, b2_size, c_a2_data, a2_size, yc5, b_zo_data, zi_size,
             ytemp);
      if (10 > ytemp->size[0] - 9) {
        i14 = 0;
        i15 = 1;
        b_sz_idx_0 = -1;
      } else {
        i14 = ytemp->size[0] - 10;
        i15 = -1;
        b_sz_idx_0 = 9;
      }

      i16 = xCol->size[0] * xCol->size[1];
      loop_ub = div_s32_floor(b_sz_idx_0 - i14, i15) + 1;
      xCol->size[0] = loop_ub;
      xCol->size[1] = 1;
      emxEnsureCapacity_real_T(xCol, i16);
      for (b_sz_idx_0 = 0; b_sz_idx_0 < loop_ub; b_sz_idx_0++) {
        xCol->data[b_sz_idx_0] = ytemp->data[i14 + i15 * b_sz_idx_0];
      }
    } else {
      L = 2.0 * xCol->data[0];
      for (i14 = 0; i14 < 9; i14++) {
        xt[i14] = -xCol->data[9 - i14] + L;
      }

      b_b2_data[0] = b2_data[0];
      b_a2_data[0] = a2_data[0];
      b_b2_data[1] = b2_data[1];
      b_a2_data[1] = a2_data[1];
      b_b2_data[2] = b2_data[2];
      b_a2_data[2] = a2_data[2];
      b_b2_data[3] = b2_data[3];
      b_a2_data[3] = a2_data[3];
      b_zi_data[0] = zi_data[0] * xt[0];
      b_zi_data[1] = zi_data[1] * xt[0];
      b_zi_data[2] = zi_data[2] * xt[0];
      h_filter(b_b2_data, b_a2_data, xt, b_zi_data, unusedU0, zo_data, zi_size);
      loop_ub = xCol->size[0];
      i14 = yc5->size[0];
      yc5->size[0] = loop_ub;
      emxEnsureCapacity_real_T(yc5, i14);
      for (i14 = 0; i14 < loop_ub; i14++) {
        yc5->data[i14] = xCol->data[i14];
      }

      b2_size[0] = 4;
      a2_size[0] = 4;
      c_b2_data[0] = b2_data[0];
      c_a2_data[0] = a2_data[0];
      c_b2_data[1] = b2_data[1];
      c_a2_data[1] = a2_data[1];
      c_b2_data[2] = b2_data[2];
      c_a2_data[2] = a2_data[2];
      c_b2_data[3] = b2_data[3];
      c_a2_data[3] = a2_data[3];
      c_filter(c_b2_data, b2_size, c_a2_data, a2_size, yc5, zo_data, ytemp,
               b_zo_data, zi_size);
      b_sz_idx_0 = xCol->size[0] - 2;
      L = 2.0 * xCol->data[xCol->size[0] - 1];
      for (i14 = 0; i14 < 9; i14++) {
        xt[i14] = -xCol->data[b_sz_idx_0 - i14] + L;
      }

      b_b2_data[0] = b2_data[0];
      b_a2_data[0] = a2_data[0];
      b_b2_data[1] = b2_data[1];
      b_a2_data[1] = a2_data[1];
      b_b2_data[2] = b2_data[2];
      b_a2_data[2] = a2_data[2];
      b_b2_data[3] = b2_data[3];
      b_a2_data[3] = a2_data[3];
      i_filter(b_b2_data, b_a2_data, xt, b_zo_data, b_yc3);
      L = b_yc3[8];
      b_b2_data[0] = b2_data[0];
      b_a2_data[0] = a2_data[0];
      b_b2_data[1] = b2_data[1];
      b_a2_data[1] = a2_data[1];
      b_b2_data[2] = b2_data[2];
      b_a2_data[2] = a2_data[2];
      b_b2_data[3] = b2_data[3];
      b_a2_data[3] = a2_data[3];
      for (i14 = 0; i14 < 9; i14++) {
        xt[i14] = b_yc3[8 - i14];
      }

      memcpy(&b_yc3[0], &xt[0], 9U * sizeof(double));
      b_zi_data[0] = zi_data[0] * L;
      b_zi_data[1] = zi_data[1] * L;
      b_zi_data[2] = zi_data[2] * L;
      h_filter(b_b2_data, b_a2_data, b_yc3, b_zi_data, unusedU0, zo_data,
               zi_size);
      if (1 > ytemp->size[0]) {
        i14 = 0;
        i15 = 1;
        b_sz_idx_0 = -1;
      } else {
        i14 = ytemp->size[0] - 1;
        i15 = -1;
        b_sz_idx_0 = 0;
      }

      i16 = yc5->size[0];
      loop_ub = div_s32_floor(b_sz_idx_0 - i14, i15);
      yc5->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(yc5, i16);
      for (b_sz_idx_0 = 0; b_sz_idx_0 <= loop_ub; b_sz_idx_0++) {
        yc5->data[b_sz_idx_0] = ytemp->data[i14 + i15 * b_sz_idx_0];
      }

      i14 = ytemp->size[0];
      ytemp->size[0] = yc5->size[0];
      emxEnsureCapacity_real_T(ytemp, i14);
      loop_ub = yc5->size[0];
      for (i14 = 0; i14 < loop_ub; i14++) {
        ytemp->data[i14] = yc5->data[i14];
      }

      b2_size[0] = 4;
      a2_size[0] = 4;
      c_b2_data[0] = b2_data[0];
      c_a2_data[0] = a2_data[0];
      c_b2_data[1] = b2_data[1];
      c_a2_data[1] = a2_data[1];
      c_b2_data[2] = b2_data[2];
      c_a2_data[2] = a2_data[2];
      c_b2_data[3] = b2_data[3];
      c_a2_data[3] = a2_data[3];
      filter(c_b2_data, b2_size, c_a2_data, a2_size, ytemp, zo_data, zi_size,
             yc5);
      if (1 > yc5->size[0]) {
        i14 = 0;
        i15 = 1;
        b_sz_idx_0 = -1;
      } else {
        i14 = yc5->size[0] - 1;
        i15 = -1;
        b_sz_idx_0 = 0;
      }

      i16 = xCol->size[0] * xCol->size[1];
      loop_ub = div_s32_floor(b_sz_idx_0 - i14, i15) + 1;
      xCol->size[0] = loop_ub;
      xCol->size[1] = 1;
      emxEnsureCapacity_real_T(xCol, i16);
      for (b_sz_idx_0 = 0; b_sz_idx_0 < loop_ub; b_sz_idx_0++) {
        xCol->data[b_sz_idx_0] = yc5->data[i14 + i15 * b_sz_idx_0];
      }
    }

    emxFree_real_T(&ytemp);
    emxFree_real_T(&yc5);
  } else {
    sz_idx_0 = static_cast<unsigned int>(xCol->size[0]);
    b_sz_idx_1 = static_cast<unsigned int>(xCol->size[1]);
    if (static_cast<int>(sz_idx_0) > 0) {
      sz_idx_1 = div_s32(xCol->size[0] * xCol->size[1], (int)sz_idx_0);
    } else {
      sz_idx_1 = 0;
    }

    b_sz_idx_0 = static_cast<int>(sz_idx_0);
    i14 = xCol->size[0] * xCol->size[1];
    xCol->size[0] = static_cast<int>(sz_idx_0);
    xCol->size[1] = sz_idx_1;
    emxEnsureCapacity_real_T(xCol, i14);
    for (i14 = 0; i14 < sz_idx_1; i14++) {
      for (i15 = 0; i15 < b_sz_idx_0; i15++) {
        xCol->data[i15 + xCol->size[0] * i14] = xCol->data[i15 + b_sz_idx_0 *
          i14];
      }
    }

    emxInit_real_T(&b_xt, 2);
    emxInit_real_T(&yc3, 2);
    emxInit_real_T(&zo, 2);
    emxInit_real_T(&yc2, 2);
    emxInit_real_T(&b_zo, 2);
    emxInit_real_T(&r3, 2);
    emxInit_real_T(&zi, 2);
    loop_ub = xCol->size[1];
    i14 = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = loop_ub;
    emxEnsureCapacity_real_T(r3, i14);
    for (i14 = 0; i14 < loop_ub; i14++) {
      r3->data[i14] = 2.0 * xCol->data[xCol->size[0] * i14];
    }

    loop_ub = xCol->size[1];
    i14 = yc3->size[0] * yc3->size[1];
    yc3->size[0] = 9;
    yc3->size[1] = loop_ub;
    emxEnsureCapacity_real_T(yc3, i14);
    for (i14 = 0; i14 < loop_ub; i14++) {
      for (i15 = 0; i15 < 9; i15++) {
        yc3->data[i15 + 9 * i14] = xCol->data[(xCol->size[0] * i14 - i15) + 9];
      }
    }

    b_bsxfun(r3, yc3, b_xt);
    b_b2_data[0] = b2_data[0];
    b_a2_data[0] = a2_data[0];
    b_b2_data[1] = b2_data[1];
    b_a2_data[1] = a2_data[1];
    b_b2_data[2] = b2_data[2];
    b_a2_data[2] = a2_data[2];
    b_b2_data[3] = b2_data[3];
    b_a2_data[3] = a2_data[3];
    loop_ub = b_xt->size[1];
    i14 = zi->size[0] * zi->size[1];
    zi->size[0] = 3;
    zi->size[1] = loop_ub;
    emxEnsureCapacity_real_T(zi, i14);
    for (i14 = 0; i14 < 3; i14++) {
      for (i15 = 0; i15 < loop_ub; i15++) {
        L = zi_data[i14] * b_xt->data[9 * i15];
        zi->data[i14 + 3 * i15] = L;
      }
    }

    j_filter(b_b2_data, b_a2_data, b_xt, zi, yc3, zo);
    b2_size[0] = 4;
    a2_size[0] = 4;
    c_b2_data[0] = b2_data[0];
    c_a2_data[0] = a2_data[0];
    c_b2_data[1] = b2_data[1];
    c_a2_data[1] = a2_data[1];
    c_b2_data[2] = b2_data[2];
    c_a2_data[2] = a2_data[2];
    c_b2_data[3] = b2_data[3];
    c_a2_data[3] = a2_data[3];
    e_filter(c_b2_data, b2_size, c_a2_data, a2_size, xCol, zo, yc2, b_zo);
    b_sz_idx_0 = xCol->size[0] - 2;
    loop_ub = xCol->size[1];
    sz_idx_1 = xCol->size[0];
    i14 = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = loop_ub;
    emxEnsureCapacity_real_T(r3, i14);
    for (i14 = 0; i14 < loop_ub; i14++) {
      r3->data[i14] = 2.0 * xCol->data[(sz_idx_1 + xCol->size[0] * i14) - 1];
    }

    loop_ub = xCol->size[1];
    i14 = yc3->size[0] * yc3->size[1];
    yc3->size[0] = 9;
    yc3->size[1] = loop_ub;
    emxEnsureCapacity_real_T(yc3, i14);
    for (i14 = 0; i14 < loop_ub; i14++) {
      for (i15 = 0; i15 < 9; i15++) {
        yc3->data[i15 + 9 * i14] = xCol->data[(b_sz_idx_0 - i15) + xCol->size[0]
          * i14];
      }
    }

    b_bsxfun(r3, yc3, b_xt);
    b_b2_data[0] = b2_data[0];
    b_a2_data[0] = a2_data[0];
    b_b2_data[1] = b2_data[1];
    b_a2_data[1] = a2_data[1];
    b_b2_data[2] = b2_data[2];
    b_a2_data[2] = a2_data[2];
    b_b2_data[3] = b2_data[3];
    b_a2_data[3] = a2_data[3];
    k_filter(b_b2_data, b_a2_data, b_xt, b_zo, yc3);
    b_b2_data[0] = b2_data[0];
    b_a2_data[0] = a2_data[0];
    b_b2_data[1] = b2_data[1];
    b_a2_data[1] = a2_data[1];
    b_b2_data[2] = b2_data[2];
    b_a2_data[2] = a2_data[2];
    b_b2_data[3] = b2_data[3];
    b_a2_data[3] = a2_data[3];
    loop_ub = yc3->size[1];
    i14 = b_xt->size[0] * b_xt->size[1];
    b_xt->size[0] = 9;
    b_xt->size[1] = loop_ub;
    emxEnsureCapacity_real_T(b_xt, i14);
    for (i14 = 0; i14 < loop_ub; i14++) {
      for (i15 = 0; i15 < 9; i15++) {
        b_xt->data[i15 + 9 * i14] = yc3->data[(9 * i14 - i15) + 8];
      }
    }

    loop_ub = yc3->size[1];
    i14 = zi->size[0] * zi->size[1];
    zi->size[0] = 3;
    zi->size[1] = loop_ub;
    emxEnsureCapacity_real_T(zi, i14);
    for (i14 = 0; i14 < 3; i14++) {
      for (i15 = 0; i15 < loop_ub; i15++) {
        L = zi_data[i14] * yc3->data[8 + 9 * i15];
        zi->data[i14 + 3 * i15] = L;
      }
    }

    j_filter(b_b2_data, b_a2_data, b_xt, zi, yc3, zo);
    if (1 > yc2->size[0]) {
      i14 = 0;
      i15 = 1;
      b_sz_idx_0 = -1;
    } else {
      i14 = yc2->size[0] - 1;
      i15 = -1;
      b_sz_idx_0 = 0;
    }

    loop_ub = yc2->size[1] - 1;
    i16 = xCol->size[0] * xCol->size[1];
    sz_idx_1 = div_s32_floor(b_sz_idx_0 - i14, i15);
    xCol->size[0] = sz_idx_1 + 1;
    xCol->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(xCol, i16);
    for (b_sz_idx_0 = 0; b_sz_idx_0 <= loop_ub; b_sz_idx_0++) {
      for (i16 = 0; i16 <= sz_idx_1; i16++) {
        xCol->data[i16 + xCol->size[0] * b_sz_idx_0] = yc2->data[(i14 + i15 *
          i16) + yc2->size[0] * b_sz_idx_0];
      }
    }

    i14 = yc2->size[0] * yc2->size[1];
    yc2->size[0] = xCol->size[0];
    yc2->size[1] = xCol->size[1];
    emxEnsureCapacity_real_T(yc2, i14);
    loop_ub = xCol->size[1];
    for (i14 = 0; i14 < loop_ub; i14++) {
      sz_idx_1 = xCol->size[0];
      for (i15 = 0; i15 < sz_idx_1; i15++) {
        yc2->data[i15 + yc2->size[0] * i14] = xCol->data[i15 + xCol->size[0] *
          i14];
      }
    }

    b2_size[0] = 4;
    a2_size[0] = 4;
    c_b2_data[0] = b2_data[0];
    c_a2_data[0] = a2_data[0];
    c_b2_data[1] = b2_data[1];
    c_a2_data[1] = a2_data[1];
    c_b2_data[2] = b2_data[2];
    c_a2_data[2] = a2_data[2];
    c_b2_data[3] = b2_data[3];
    c_a2_data[3] = a2_data[3];
    g_filter(c_b2_data, b2_size, c_a2_data, a2_size, yc2, zo, xCol);
    if (1 > xCol->size[0]) {
      i14 = 0;
      i15 = 1;
      b_sz_idx_0 = -1;
    } else {
      i14 = xCol->size[0] - 1;
      i15 = -1;
      b_sz_idx_0 = 0;
    }

    loop_ub = xCol->size[1] - 1;
    i16 = yc2->size[0] * yc2->size[1];
    sz_idx_1 = div_s32_floor(b_sz_idx_0 - i14, i15);
    yc2->size[0] = sz_idx_1 + 1;
    yc2->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(yc2, i16);
    for (b_sz_idx_0 = 0; b_sz_idx_0 <= loop_ub; b_sz_idx_0++) {
      for (i16 = 0; i16 <= sz_idx_1; i16++) {
        yc2->data[i16 + yc2->size[0] * b_sz_idx_0] = xCol->data[(i14 + i15 * i16)
          + xCol->size[0] * b_sz_idx_0];
      }
    }

    i14 = xCol->size[0] * xCol->size[1];
    xCol->size[0] = yc2->size[0];
    xCol->size[1] = yc2->size[1];
    emxEnsureCapacity_real_T(xCol, i14);
    loop_ub = yc2->size[0] * yc2->size[1];
    for (i14 = 0; i14 < loop_ub; i14++) {
      xCol->data[i14] = yc2->data[i14];
    }

    emxFree_real_T(&zi);
    emxFree_real_T(&r3);
    emxFree_real_T(&b_zo);
    emxFree_real_T(&yc2);
    emxFree_real_T(&zo);
    emxFree_real_T(&yc3);
    emxFree_real_T(&b_xt);
    b_sz_idx_0 = static_cast<int>(sz_idx_0);
    sz_idx_1 = static_cast<int>(b_sz_idx_1);
    i14 = xCol->size[0] * xCol->size[1];
    xCol->size[0] = b_sz_idx_0;
    xCol->size[1] = sz_idx_1;
    emxEnsureCapacity_real_T(xCol, i14);
    for (i14 = 0; i14 < sz_idx_1; i14++) {
      for (i15 = 0; i15 < b_sz_idx_0; i15++) {
        xCol->data[i15 + xCol->size[0] * i14] = xCol->data[i15 + b_sz_idx_0 *
          i14];
      }
    }
  }

  p = (x->size[0] == 1);
  if (p) {
    i14 = y->size[0] * y->size[1];
    y->size[0] = xCol->size[1];
    y->size[1] = xCol->size[0];
    emxEnsureCapacity_real_T(y, i14);
    loop_ub = xCol->size[0];
    for (i14 = 0; i14 < loop_ub; i14++) {
      sz_idx_1 = xCol->size[1];
      for (i15 = 0; i15 < sz_idx_1; i15++) {
        y->data[i15 + y->size[0] * i14] = xCol->data[i14 + xCol->size[0] * i15];
      }
    }
  } else {
    i14 = y->size[0] * y->size[1];
    y->size[0] = xCol->size[0];
    y->size[1] = xCol->size[1];
    emxEnsureCapacity_real_T(y, i14);
    loop_ub = xCol->size[0] * xCol->size[1];
    for (i14 = 0; i14 < loop_ub; i14++) {
      y->data[i14] = xCol->data[i14];
    }
  }

  emxFree_real_T(&xCol);
}

void efiltfilt(const emxArray_real_T *x, emxArray_real_T *y)
{
  boolean_T p;
  emxArray_real_T *xCol;
  int i1;
  int loop_ub;
  double b2_data[7];
  int b2_size[1];
  double a2_data[7];
  int a2_size[1];
  double zi_data[6];
  int zi_size[1];
  double a1;
  emxArray_real_T *yCol;
  short sz_idx_0;
  emxArray_real_T *yc5;
  short sz_idx_1;
  emxArray_real_T *ytemp;
  int b_sz_idx_1;
  double d1;
  emxArray_real_T *b_yc5;
  emxArray_real_T *xt;
  emxArray_real_T *yc3;
  double b_xt[18];
  emxArray_real_T *zo;
  emxArray_real_T *b_zo;
  double b_b2_data[7];
  emxArray_real_T *r0;
  double b_a2_data[7];
  emxArray_real_T *zi;
  double b_zi_data[6];
  double unusedU0[18];
  double zo_data[6];
  emxArray_real_T *c_yc5;
  emxArray_real_T *b_xCol;
  double b_zo_data[6];
  double c_b2_data[7];
  double c_a2_data[7];
  int yc3_tmp;
  double b_yc3[18];
  int naxpy;
  int b_loop_ub;
  p = (x->size[0] == 1);
  emxInit_real_T(&xCol, 2);
  if (p) {
    i1 = xCol->size[0] * xCol->size[1];
    xCol->size[0] = 3;
    xCol->size[1] = x->size[0];
    emxEnsureCapacity_real_T(xCol, i1);
    loop_ub = x->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      xCol->data[xCol->size[0] * i1] = x->data[i1];
      xCol->data[1 + xCol->size[0] * i1] = x->data[i1 + x->size[0]];
      xCol->data[2 + xCol->size[0] * i1] = x->data[i1 + (x->size[0] << 1)];
    }
  } else {
    i1 = xCol->size[0] * xCol->size[1];
    xCol->size[0] = x->size[0];
    xCol->size[1] = 3;
    emxEnsureCapacity_real_T(xCol, i1);
    loop_ub = x->size[0] * x->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      xCol->data[i1] = x->data[i1];
    }
  }

  getCoeffsAndInitialConditions(b2_data, b2_size, a2_data, a2_size, zi_data,
    zi_size, &a1);
  emxInit_real_T(&yCol, 2);
  if (xCol->size[1] == 1) {
    emxInit_real_T(&yc5, 1);
    emxInit_real_T(&ytemp, 1);
    if (xCol->size[0] < 10000) {
      d1 = 2.0 * xCol->data[0];
      a1 = 2.0 * xCol->data[xCol->size[0] - 1];
      b_sz_idx_1 = xCol->size[0] - 2;
      loop_ub = xCol->size[0];
      i1 = ytemp->size[0];
      ytemp->size[0] = loop_ub + 36;
      emxEnsureCapacity_real_T(ytemp, i1);
      for (i1 = 0; i1 < 18; i1++) {
        ytemp->data[i1] = d1 - xCol->data[18 - i1];
      }

      for (i1 = 0; i1 < loop_ub; i1++) {
        ytemp->data[i1 + 18] = xCol->data[i1];
      }

      for (i1 = 0; i1 < 18; i1++) {
        ytemp->data[(i1 + loop_ub) + 18] = a1 - xCol->data[b_sz_idx_1 - i1];
      }

      loop_ub = ytemp->size[0] - 1;
      d1 = ytemp->data[0];
      for (i1 = 0; i1 < 7; i1++) {
        b_b2_data[i1] = b2_data[i1];
        b_a2_data[i1] = a2_data[i1];
      }

      i1 = yc5->size[0];
      yc5->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(yc5, i1);
      for (i1 = 0; i1 <= loop_ub; i1++) {
        yc5->data[i1] = ytemp->data[i1];
      }

      zi_size[0] = 6;
      for (i1 = 0; i1 < 6; i1++) {
        b_zo_data[i1] = zi_data[i1] * d1;
      }

      b2_size[0] = 7;
      a2_size[0] = 7;
      for (i1 = 0; i1 < 7; i1++) {
        c_b2_data[i1] = b_b2_data[i1];
        c_a2_data[i1] = b_a2_data[i1];
      }

      filter(c_b2_data, b2_size, c_a2_data, a2_size, yc5, b_zo_data, zi_size,
             ytemp);
      i1 = ytemp->size[0] - 1;
      yc3_tmp = yc5->size[0];
      loop_ub = div_s32_floor(-i1, -1);
      yc5->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(yc5, yc3_tmp);
      for (yc3_tmp = 0; yc3_tmp <= loop_ub; yc3_tmp++) {
        yc5->data[yc3_tmp] = ytemp->data[i1 - yc3_tmp];
      }

      i1 = ytemp->size[0];
      ytemp->size[0] = yc5->size[0];
      emxEnsureCapacity_real_T(ytemp, i1);
      loop_ub = yc5->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        ytemp->data[i1] = yc5->data[i1];
      }

      loop_ub = ytemp->size[0] - 1;
      d1 = ytemp->data[0];
      for (i1 = 0; i1 < 7; i1++) {
        b_b2_data[i1] = b2_data[i1];
        b_a2_data[i1] = a2_data[i1];
      }

      i1 = yc5->size[0];
      yc5->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(yc5, i1);
      for (i1 = 0; i1 <= loop_ub; i1++) {
        yc5->data[i1] = ytemp->data[i1];
      }

      zi_size[0] = 6;
      for (i1 = 0; i1 < 6; i1++) {
        b_zo_data[i1] = zi_data[i1] * d1;
      }

      b2_size[0] = 7;
      a2_size[0] = 7;
      for (i1 = 0; i1 < 7; i1++) {
        b2_data[i1] = b_b2_data[i1];
        a2_data[i1] = b_a2_data[i1];
      }

      filter(b2_data, b2_size, a2_data, a2_size, yc5, b_zo_data, zi_size, ytemp);
      if (19 > ytemp->size[0] - 18) {
        i1 = 0;
        yc3_tmp = 1;
        b_sz_idx_1 = -1;
      } else {
        i1 = ytemp->size[0] - 19;
        yc3_tmp = -1;
        b_sz_idx_1 = 18;
      }

      naxpy = xCol->size[0] * xCol->size[1];
      loop_ub = div_s32_floor(b_sz_idx_1 - i1, yc3_tmp) + 1;
      xCol->size[0] = loop_ub;
      xCol->size[1] = 1;
      emxEnsureCapacity_real_T(xCol, naxpy);
      for (b_sz_idx_1 = 0; b_sz_idx_1 < loop_ub; b_sz_idx_1++) {
        xCol->data[b_sz_idx_1] = ytemp->data[i1 + yc3_tmp * b_sz_idx_1];
      }

      i1 = yCol->size[0] * yCol->size[1];
      yCol->size[0] = xCol->size[0];
      yCol->size[1] = xCol->size[1];
      emxEnsureCapacity_real_T(yCol, i1);
      loop_ub = xCol->size[0] * xCol->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        yCol->data[i1] = xCol->data[i1];
      }
    } else {
      i1 = yCol->size[0] * yCol->size[1];
      yCol->size[0] = xCol->size[0];
      yCol->size[1] = xCol->size[1];
      emxEnsureCapacity_real_T(yCol, i1);
      loop_ub = xCol->size[0] * xCol->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        yCol->data[i1] = xCol->data[i1];
      }

      a1 = a2_data[0];
      d1 = 2.0 * yCol->data[0];
      for (i1 = 0; i1 < 18; i1++) {
        b_xt[i1] = -yCol->data[18 - i1] + d1;
      }

      for (i1 = 0; i1 < 7; i1++) {
        b_b2_data[i1] = b2_data[i1];
        b_a2_data[i1] = a2_data[i1];
      }

      for (i1 = 0; i1 < 6; i1++) {
        b_zi_data[i1] = zi_data[i1] * b_xt[0];
      }

      b_filter(b_b2_data, b_a2_data, b_xt, b_zi_data, unusedU0, zo_data, zi_size);
      for (i1 = 0; i1 < 7; i1++) {
        b_b2_data[i1] = b2_data[i1];
        b_a2_data[i1] = a2_data[i1];
      }

      loop_ub = yCol->size[0];
      i1 = yc5->size[0];
      yc5->size[0] = loop_ub;
      emxEnsureCapacity_real_T(yc5, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        yc5->data[i1] = yCol->data[i1];
      }

      b2_size[0] = 7;
      a2_size[0] = 7;
      for (i1 = 0; i1 < 7; i1++) {
        c_b2_data[i1] = b_b2_data[i1];
        c_a2_data[i1] = b_a2_data[i1];
      }

      c_filter(c_b2_data, b2_size, c_a2_data, a2_size, yc5, zo_data, ytemp,
               b_zo_data, zi_size);
      b_sz_idx_1 = yCol->size[0] - 2;
      d1 = 2.0 * yCol->data[yCol->size[0] - 1];
      for (i1 = 0; i1 < 18; i1++) {
        b_xt[i1] = -yCol->data[b_sz_idx_1 - i1] + d1;
      }

      for (i1 = 0; i1 < 7; i1++) {
        b_b2_data[i1] = b2_data[i1];
        b_a2_data[i1] = a2_data[i1];
      }

      if ((!(a2_data[0] == 0.0)) && (a2_data[0] != 1.0)) {
        for (b_sz_idx_1 = 0; b_sz_idx_1 < 7; b_sz_idx_1++) {
          b_b2_data[b_sz_idx_1] /= a1;
        }

        for (b_sz_idx_1 = 0; b_sz_idx_1 < 6; b_sz_idx_1++) {
          b_a2_data[b_sz_idx_1 + 1] /= a1;
        }

        b_a2_data[0] = 1.0;
      }

      for (b_sz_idx_1 = 0; b_sz_idx_1 < 6; b_sz_idx_1++) {
        b_yc3[b_sz_idx_1] = b_zo_data[b_sz_idx_1];
      }

      memset(&b_yc3[6], 0, 12U * sizeof(double));
      for (b_sz_idx_1 = 0; b_sz_idx_1 < 18; b_sz_idx_1++) {
        if (18 - b_sz_idx_1 < 7) {
          naxpy = 17 - b_sz_idx_1;
        } else {
          naxpy = 6;
        }

        for (b_loop_ub = 0; b_loop_ub <= naxpy; b_loop_ub++) {
          yc3_tmp = b_sz_idx_1 + b_loop_ub;
          b_yc3[yc3_tmp] += b_xt[b_sz_idx_1] * b_b2_data[b_loop_ub];
        }

        if (17 - b_sz_idx_1 < 6) {
          naxpy = 16 - b_sz_idx_1;
        } else {
          naxpy = 5;
        }

        a1 = -b_yc3[b_sz_idx_1];
        for (b_loop_ub = 0; b_loop_ub <= naxpy; b_loop_ub++) {
          yc3_tmp = (b_sz_idx_1 + b_loop_ub) + 1;
          b_yc3[yc3_tmp] += a1 * b_a2_data[1 + b_loop_ub];
        }
      }

      a1 = b_yc3[17];
      for (i1 = 0; i1 < 7; i1++) {
        b_b2_data[i1] = b2_data[i1];
        b_a2_data[i1] = a2_data[i1];
      }

      for (i1 = 0; i1 < 18; i1++) {
        b_xt[i1] = b_yc3[17 - i1];
      }

      memcpy(&b_yc3[0], &b_xt[0], 18U * sizeof(double));
      for (i1 = 0; i1 < 6; i1++) {
        b_zi_data[i1] = zi_data[i1] * a1;
      }

      b_filter(b_b2_data, b_a2_data, b_yc3, b_zi_data, unusedU0, zo_data,
               zi_size);
      if (1 > ytemp->size[0]) {
        i1 = 0;
        yc3_tmp = 1;
        b_sz_idx_1 = -1;
      } else {
        i1 = ytemp->size[0] - 1;
        yc3_tmp = -1;
        b_sz_idx_1 = 0;
      }

      for (naxpy = 0; naxpy < 7; naxpy++) {
        b_b2_data[naxpy] = b2_data[naxpy];
        b_a2_data[naxpy] = a2_data[naxpy];
      }

      naxpy = yc5->size[0];
      loop_ub = div_s32_floor(b_sz_idx_1 - i1, yc3_tmp);
      yc5->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(yc5, naxpy);
      for (b_sz_idx_1 = 0; b_sz_idx_1 <= loop_ub; b_sz_idx_1++) {
        yc5->data[b_sz_idx_1] = ytemp->data[i1 + yc3_tmp * b_sz_idx_1];
      }

      i1 = ytemp->size[0];
      ytemp->size[0] = yc5->size[0];
      emxEnsureCapacity_real_T(ytemp, i1);
      loop_ub = yc5->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        ytemp->data[i1] = yc5->data[i1];
      }

      b2_size[0] = 7;
      a2_size[0] = 7;
      for (i1 = 0; i1 < 7; i1++) {
        b2_data[i1] = b_b2_data[i1];
        a2_data[i1] = b_a2_data[i1];
      }

      filter(b2_data, b2_size, a2_data, a2_size, ytemp, zo_data, zi_size, yc5);
      if (1 > yc5->size[0]) {
        i1 = 0;
        yc3_tmp = 1;
        b_sz_idx_1 = -1;
      } else {
        i1 = yc5->size[0] - 1;
        yc3_tmp = -1;
        b_sz_idx_1 = 0;
      }

      naxpy = yCol->size[0] * yCol->size[1];
      loop_ub = div_s32_floor(b_sz_idx_1 - i1, yc3_tmp) + 1;
      yCol->size[0] = loop_ub;
      yCol->size[1] = 1;
      emxEnsureCapacity_real_T(yCol, naxpy);
      for (b_sz_idx_1 = 0; b_sz_idx_1 < loop_ub; b_sz_idx_1++) {
        yCol->data[b_sz_idx_1] = yc5->data[i1 + yc3_tmp * b_sz_idx_1];
      }
    }

    emxFree_real_T(&ytemp);
    emxFree_real_T(&yc5);
  } else {
    sz_idx_0 = static_cast<short>(xCol->size[0]);
    sz_idx_1 = static_cast<short>(xCol->size[1]);
    if (sz_idx_0 > 0) {
      b_sz_idx_1 = div_s32(xCol->size[0] * xCol->size[1], (int)sz_idx_0);
    } else {
      b_sz_idx_1 = 0;
    }

    emxInit_real_T(&b_yc5, 2);
    i1 = b_yc5->size[0] * b_yc5->size[1];
    b_yc5->size[0] = sz_idx_0;
    b_yc5->size[1] = b_sz_idx_1;
    emxEnsureCapacity_real_T(b_yc5, i1);
    loop_ub = sz_idx_0 * b_sz_idx_1;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_yc5->data[i1] = xCol->data[i1];
    }

    emxInit_real_T(&xt, 2);
    emxInit_real_T(&yc3, 2);
    emxInit_real_T(&zo, 2);
    emxInit_real_T(&b_zo, 2);
    emxInit_real_T(&r0, 2);
    emxInit_real_T(&zi, 2);
    emxInit_real_T(&c_yc5, 2);
    emxInit_real_T(&b_xCol, 2);
    loop_ub = b_yc5->size[1];
    i1 = r0->size[0] * r0->size[1];
    r0->size[0] = 1;
    r0->size[1] = loop_ub;
    emxEnsureCapacity_real_T(r0, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r0->data[i1] = 2.0 * b_yc5->data[b_yc5->size[0] * i1];
    }

    loop_ub = b_yc5->size[1];
    i1 = yc3->size[0] * yc3->size[1];
    yc3->size[0] = 18;
    yc3->size[1] = loop_ub;
    emxEnsureCapacity_real_T(yc3, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (yc3_tmp = 0; yc3_tmp < 18; yc3_tmp++) {
        yc3->data[yc3_tmp + 18 * i1] = b_yc5->data[(b_yc5->size[0] * i1 -
          yc3_tmp) + 18];
      }
    }

    bsxfun(r0, yc3, xt);
    for (i1 = 0; i1 < 7; i1++) {
      b_b2_data[i1] = b2_data[i1];
      b_a2_data[i1] = a2_data[i1];
    }

    loop_ub = xt->size[1];
    i1 = zi->size[0] * zi->size[1];
    zi->size[0] = 6;
    zi->size[1] = loop_ub;
    emxEnsureCapacity_real_T(zi, i1);
    for (i1 = 0; i1 < 6; i1++) {
      for (yc3_tmp = 0; yc3_tmp < loop_ub; yc3_tmp++) {
        d1 = zi_data[i1] * xt->data[18 * yc3_tmp];
        zi->data[i1 + 6 * yc3_tmp] = d1;
      }
    }

    d_filter(b_b2_data, b_a2_data, xt, zi, yc3, zo);
    b2_size[0] = 7;
    a2_size[0] = 7;
    for (i1 = 0; i1 < 7; i1++) {
      b_b2_data[i1] = b2_data[i1];
      b_a2_data[i1] = a2_data[i1];
    }

    e_filter(b_b2_data, b2_size, b_a2_data, a2_size, b_yc5, zo, xCol, b_zo);
    naxpy = b_yc5->size[0] - 2;
    loop_ub = b_yc5->size[1];
    b_sz_idx_1 = b_yc5->size[0];
    i1 = r0->size[0] * r0->size[1];
    r0->size[0] = 1;
    r0->size[1] = loop_ub;
    emxEnsureCapacity_real_T(r0, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r0->data[i1] = 2.0 * b_yc5->data[(b_sz_idx_1 + b_yc5->size[0] * i1) - 1];
    }

    loop_ub = b_yc5->size[1];
    i1 = yc3->size[0] * yc3->size[1];
    yc3->size[0] = 18;
    yc3->size[1] = loop_ub;
    emxEnsureCapacity_real_T(yc3, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (yc3_tmp = 0; yc3_tmp < 18; yc3_tmp++) {
        yc3->data[yc3_tmp + 18 * i1] = b_yc5->data[(naxpy - yc3_tmp) +
          b_yc5->size[0] * i1];
      }
    }

    bsxfun(r0, yc3, xt);
    for (i1 = 0; i1 < 7; i1++) {
      b_b2_data[i1] = b2_data[i1];
      b_a2_data[i1] = a2_data[i1];
    }

    f_filter(b_b2_data, b_a2_data, xt, b_zo, yc3);
    for (i1 = 0; i1 < 7; i1++) {
      b_b2_data[i1] = b2_data[i1];
      b_a2_data[i1] = a2_data[i1];
    }

    loop_ub = yc3->size[1];
    i1 = xt->size[0] * xt->size[1];
    xt->size[0] = 18;
    xt->size[1] = loop_ub;
    emxEnsureCapacity_real_T(xt, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (yc3_tmp = 0; yc3_tmp < 18; yc3_tmp++) {
        xt->data[yc3_tmp + 18 * i1] = yc3->data[(18 * i1 - yc3_tmp) + 17];
      }
    }

    loop_ub = yc3->size[1];
    i1 = zi->size[0] * zi->size[1];
    zi->size[0] = 6;
    zi->size[1] = loop_ub;
    emxEnsureCapacity_real_T(zi, i1);
    for (i1 = 0; i1 < 6; i1++) {
      for (yc3_tmp = 0; yc3_tmp < loop_ub; yc3_tmp++) {
        d1 = zi_data[i1] * yc3->data[17 + 18 * yc3_tmp];
        zi->data[i1 + 6 * yc3_tmp] = d1;
      }
    }

    d_filter(b_b2_data, b_a2_data, xt, zi, yc3, zo);
    if (1 > xCol->size[0]) {
      i1 = 0;
      yc3_tmp = 1;
      b_sz_idx_1 = -1;
    } else {
      i1 = xCol->size[0] - 1;
      yc3_tmp = -1;
      b_sz_idx_1 = 0;
    }

    for (naxpy = 0; naxpy < 7; naxpy++) {
      b_b2_data[naxpy] = b2_data[naxpy];
      b_a2_data[naxpy] = a2_data[naxpy];
    }

    loop_ub = xCol->size[1] - 1;
    naxpy = b_xCol->size[0] * b_xCol->size[1];
    b_loop_ub = div_s32_floor(b_sz_idx_1 - i1, yc3_tmp);
    b_xCol->size[0] = b_loop_ub + 1;
    b_xCol->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(b_xCol, naxpy);
    for (b_sz_idx_1 = 0; b_sz_idx_1 <= loop_ub; b_sz_idx_1++) {
      for (naxpy = 0; naxpy <= b_loop_ub; naxpy++) {
        b_xCol->data[naxpy + b_xCol->size[0] * b_sz_idx_1] = xCol->data[(i1 +
          yc3_tmp * naxpy) + xCol->size[0] * b_sz_idx_1];
      }
    }

    i1 = xCol->size[0] * xCol->size[1];
    xCol->size[0] = b_xCol->size[0];
    xCol->size[1] = b_xCol->size[1];
    emxEnsureCapacity_real_T(xCol, i1);
    loop_ub = b_xCol->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = b_xCol->size[0];
      for (yc3_tmp = 0; yc3_tmp < b_loop_ub; yc3_tmp++) {
        xCol->data[yc3_tmp + xCol->size[0] * i1] = b_xCol->data[yc3_tmp +
          b_xCol->size[0] * i1];
      }
    }

    b2_size[0] = 7;
    a2_size[0] = 7;
    for (i1 = 0; i1 < 7; i1++) {
      b2_data[i1] = b_b2_data[i1];
      a2_data[i1] = b_a2_data[i1];
    }

    g_filter(b2_data, b2_size, a2_data, a2_size, xCol, zo, b_xCol);
    i1 = b_yc5->size[0] * b_yc5->size[1];
    b_yc5->size[0] = b_xCol->size[0];
    b_yc5->size[1] = b_xCol->size[1];
    emxEnsureCapacity_real_T(b_yc5, i1);
    loop_ub = b_xCol->size[0] * b_xCol->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_yc5->data[i1] = b_xCol->data[i1];
    }

    if (1 > b_yc5->size[0]) {
      i1 = 0;
      yc3_tmp = 1;
      b_sz_idx_1 = -1;
    } else {
      i1 = b_yc5->size[0] - 1;
      yc3_tmp = -1;
      b_sz_idx_1 = 0;
    }

    loop_ub = b_yc5->size[1] - 1;
    naxpy = c_yc5->size[0] * c_yc5->size[1];
    b_loop_ub = div_s32_floor(b_sz_idx_1 - i1, yc3_tmp);
    c_yc5->size[0] = b_loop_ub + 1;
    c_yc5->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(c_yc5, naxpy);
    for (b_sz_idx_1 = 0; b_sz_idx_1 <= loop_ub; b_sz_idx_1++) {
      for (naxpy = 0; naxpy <= b_loop_ub; naxpy++) {
        c_yc5->data[naxpy + c_yc5->size[0] * b_sz_idx_1] = b_yc5->data[(i1 +
          yc3_tmp * naxpy) + b_yc5->size[0] * b_sz_idx_1];
      }
    }

    i1 = b_yc5->size[0] * b_yc5->size[1];
    b_yc5->size[0] = c_yc5->size[0];
    b_yc5->size[1] = c_yc5->size[1];
    emxEnsureCapacity_real_T(b_yc5, i1);
    loop_ub = c_yc5->size[0] * c_yc5->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_yc5->data[i1] = c_yc5->data[i1];
    }

    emxFree_real_T(&b_xCol);
    emxFree_real_T(&c_yc5);
    emxFree_real_T(&zi);
    emxFree_real_T(&r0);
    emxFree_real_T(&b_zo);
    emxFree_real_T(&zo);
    emxFree_real_T(&yc3);
    emxFree_real_T(&xt);
    i1 = yCol->size[0] * yCol->size[1];
    yCol->size[0] = sz_idx_0;
    yCol->size[1] = sz_idx_1;
    emxEnsureCapacity_real_T(yCol, i1);
    loop_ub = sz_idx_0 * sz_idx_1;
    for (i1 = 0; i1 < loop_ub; i1++) {
      yCol->data[i1] = b_yc5->data[i1];
    }

    emxFree_real_T(&b_yc5);
  }

  emxFree_real_T(&xCol);
  p = (x->size[0] == 1);
  if (p) {
    i1 = y->size[0] * y->size[1];
    y->size[0] = yCol->size[1];
    y->size[1] = yCol->size[0];
    emxEnsureCapacity_real_T(y, i1);
    loop_ub = yCol->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = yCol->size[1];
      for (yc3_tmp = 0; yc3_tmp < b_loop_ub; yc3_tmp++) {
        y->data[yc3_tmp + y->size[0] * i1] = yCol->data[i1 + yCol->size[0] *
          yc3_tmp];
      }
    }
  } else {
    i1 = y->size[0] * y->size[1];
    y->size[0] = yCol->size[0];
    y->size[1] = yCol->size[1];
    emxEnsureCapacity_real_T(y, i1);
    loop_ub = yCol->size[0] * yCol->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      y->data[i1] = yCol->data[i1];
    }
  }

  emxFree_real_T(&yCol);
}

/* End of code generation (filtfilt.cpp) */
