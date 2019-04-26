/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort1.cpp
 *
 * Code generation for function 'sort1'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "sort1.h"
#include "sortIdx.h"
#include "eml_int_forloop_overflow_check.h"
#include "ctrainingRoutineKNN2_data.h"

/* Variable Definitions */
static emlrtRSInfo ld_emlrtRSI = { 72, /* lineNo */
  "sort",                              /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/sort.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 105,/* lineNo */
  "sortIdx",                           /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 308,/* lineNo */
  "block_merge_sort",                  /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 333,/* lineNo */
  "block_merge_sort",                  /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 420,/* lineNo */
  "initialize_vector_sort",            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 427,/* lineNo */
  "initialize_vector_sort",            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

/* Function Definitions */
void sort(const emlrtStack *sp, real_T x[250])
{
  int32_T idx[250];
  real_T x4[4];
  uint8_T idx4[4];
  real_T xwork[250];
  int32_T nNaNs;
  int32_T ib;
  int32_T k;
  int8_T perm[4];
  int32_T quartetOffset;
  int32_T i2;
  int32_T i3;
  int32_T iwork[250];
  int32_T i4;
  real_T d7;
  real_T d8;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ld_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  memset(&idx[0], 0, 250U * sizeof(int32_T));
  b_st.site = &md_emlrtRSI;
  c_st.site = &nd_emlrtRSI;
  x4[0] = 0.0;
  idx4[0] = 0U;
  x4[1] = 0.0;
  idx4[1] = 0U;
  x4[2] = 0.0;
  idx4[2] = 0U;
  x4[3] = 0.0;
  idx4[3] = 0U;
  memset(&xwork[0], 0, 250U * sizeof(real_T));
  nNaNs = -249;
  ib = -1;
  for (k = 0; k < 250; k++) {
    if (muDoubleScalarIsNaN(x[k])) {
      idx[-nNaNs] = k + 1;
      xwork[-nNaNs] = x[k];
      nNaNs++;
    } else {
      ib++;
      idx4[ib] = static_cast<uint8_T>((k + 1));
      x4[ib] = x[k];
      if (ib + 1 == 4) {
        quartetOffset = (k - nNaNs) - 252;
        if (x4[0] <= x4[1]) {
          ib = 1;
          i2 = 2;
        } else {
          ib = 2;
          i2 = 1;
        }

        if (x4[2] <= x4[3]) {
          i3 = 3;
          i4 = 4;
        } else {
          i3 = 4;
          i4 = 3;
        }

        d7 = x4[ib - 1];
        d8 = x4[i3 - 1];
        if (d7 <= d8) {
          d7 = x4[i2 - 1];
          if (d7 <= d8) {
            perm[0] = static_cast<int8_T>(ib);
            perm[1] = static_cast<int8_T>(i2);
            perm[2] = static_cast<int8_T>(i3);
            perm[3] = static_cast<int8_T>(i4);
          } else if (d7 <= x4[i4 - 1]) {
            perm[0] = static_cast<int8_T>(ib);
            perm[1] = static_cast<int8_T>(i3);
            perm[2] = static_cast<int8_T>(i2);
            perm[3] = static_cast<int8_T>(i4);
          } else {
            perm[0] = static_cast<int8_T>(ib);
            perm[1] = static_cast<int8_T>(i3);
            perm[2] = static_cast<int8_T>(i4);
            perm[3] = static_cast<int8_T>(i2);
          }
        } else {
          d8 = x4[i4 - 1];
          if (d7 <= d8) {
            if (x4[i2 - 1] <= d8) {
              perm[0] = static_cast<int8_T>(i3);
              perm[1] = static_cast<int8_T>(ib);
              perm[2] = static_cast<int8_T>(i2);
              perm[3] = static_cast<int8_T>(i4);
            } else {
              perm[0] = static_cast<int8_T>(i3);
              perm[1] = static_cast<int8_T>(ib);
              perm[2] = static_cast<int8_T>(i4);
              perm[3] = static_cast<int8_T>(i2);
            }
          } else {
            perm[0] = static_cast<int8_T>(i3);
            perm[1] = static_cast<int8_T>(i4);
            perm[2] = static_cast<int8_T>(ib);
            perm[3] = static_cast<int8_T>(i2);
          }
        }

        i3 = perm[0] - 1;
        idx[quartetOffset] = idx4[i3];
        i4 = perm[1] - 1;
        idx[quartetOffset + 1] = idx4[i4];
        ib = perm[2] - 1;
        idx[quartetOffset + 2] = idx4[ib];
        i2 = perm[3] - 1;
        idx[quartetOffset + 3] = idx4[i2];
        x[quartetOffset] = x4[i3];
        x[quartetOffset + 1] = x4[i4];
        x[quartetOffset + 2] = x4[ib];
        x[quartetOffset + 3] = x4[i2];
        ib = -1;
      }
    }
  }

  if (ib + 1 > 0) {
    perm[1] = 0;
    perm[2] = 0;
    perm[3] = 0;
    if (ib + 1 == 1) {
      perm[0] = 1;
    } else if (ib + 1 == 2) {
      if (x4[0] <= x4[1]) {
        perm[0] = 1;
        perm[1] = 2;
      } else {
        perm[0] = 2;
        perm[1] = 1;
      }
    } else if (x4[0] <= x4[1]) {
      if (x4[1] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 2;
        perm[2] = 3;
      } else if (x4[0] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 3;
        perm[2] = 2;
      } else {
        perm[0] = 3;
        perm[1] = 1;
        perm[2] = 2;
      }
    } else if (x4[0] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 1;
      perm[2] = 3;
    } else if (x4[1] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 3;
      perm[2] = 1;
    } else {
      perm[0] = 3;
      perm[1] = 2;
      perm[2] = 1;
    }

    d_st.site = &pd_emlrtRSI;
    if (ib + 1 > 2147483646) {
      e_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 0; k <= ib; k++) {
      i3 = perm[k] - 1;
      i4 = (k - nNaNs) - ib;
      idx[i4] = idx4[i3];
      x[i4] = x4[i3];
    }
  }

  ib = ((nNaNs + 249) >> 1) + 1;
  d_st.site = &qd_emlrtRSI;
  for (k = 0; k <= ib - 2; k++) {
    i2 = (k - nNaNs) + 1;
    i3 = idx[i2];
    idx[i2] = idx[249 - k];
    idx[249 - k] = i3;
    x[i2] = xwork[249 - k];
    x[249 - k] = xwork[i2];
  }

  if (((nNaNs + 249) & 1) != 0) {
    ib -= nNaNs;
    x[ib] = xwork[ib];
  }

  if (1 - nNaNs > 1) {
    memset(&iwork[0], 0, 250U * sizeof(int32_T));
    c_st.site = &od_emlrtRSI;
    merge_block(&c_st, idx, x, 1 - nNaNs, iwork, xwork);
  }
}

/* End of code generation (sort1.cpp) */
