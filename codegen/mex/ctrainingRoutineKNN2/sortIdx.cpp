/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortIdx.cpp
 *
 * Code generation for function 'sortIdx'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "sortIdx.h"
#include "eml_int_forloop_overflow_check.h"
#include "ctrainingRoutineKNN2_data.h"

/* Variable Definitions */
static emlrtRSInfo rd_emlrtRSI = { 499,/* lineNo */
  "merge_block",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 507,/* lineNo */
  "merge_block",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 514,/* lineNo */
  "merge_block",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 561,/* lineNo */
  "merge",                             /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 530,/* lineNo */
  "merge",                             /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

/* Function Declarations */
static void merge(const emlrtStack *sp, int32_T idx[250], real_T x[250], int32_T
                  offset, int32_T np, int32_T nq, int32_T iwork[250], real_T
                  xwork[250]);

/* Function Definitions */
static void merge(const emlrtStack *sp, int32_T idx[250], real_T x[250], int32_T
                  offset, int32_T np, int32_T nq, int32_T iwork[250], real_T
                  xwork[250])
{
  int32_T n_tmp;
  int32_T iout;
  int32_T p;
  int32_T i38;
  int32_T q;
  int32_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    n_tmp = np + nq;
    st.site = &wd_emlrtRSI;
    if ((1 <= n_tmp) && (n_tmp > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (iout = 0; iout < n_tmp; iout++) {
      i38 = offset + iout;
      iwork[iout] = idx[i38];
      xwork[iout] = x[i38];
    }

    p = 0;
    q = np;
    iout = offset - 1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork[p] <= xwork[q]) {
        idx[iout] = iwork[p];
        x[iout] = xwork[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx[iout] = iwork[q];
        x[iout] = xwork[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &vd_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &r_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }

          for (iout = p + 1; iout <= np; iout++) {
            i38 = q + iout;
            idx[i38] = iwork[iout - 1];
            x[i38] = xwork[iout - 1];
          }

          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

void merge_block(const emlrtStack *sp, int32_T idx[250], real_T x[250], int32_T
                 n, int32_T iwork[250], real_T xwork[250])
{
  int32_T nPairs;
  int32_T bLen;
  int32_T tailOffset;
  int32_T nTail;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  nPairs = n >> 2;
  bLen = 4;
  while (nPairs > 1) {
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &rd_emlrtRSI;
        merge(&st, idx, x, tailOffset, bLen, nTail - bLen, iwork, xwork);
      }
    }

    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &td_emlrtRSI;
      merge(&st, idx, x, nTail * tailOffset, bLen, bLen, iwork, xwork);
    }

    bLen = tailOffset;
  }

  if (n > bLen) {
    st.site = &ud_emlrtRSI;
    merge(&st, idx, x, 0, bLen, n - bLen, iwork, xwork);
  }
}

/* End of code generation (sortIdx.cpp) */
