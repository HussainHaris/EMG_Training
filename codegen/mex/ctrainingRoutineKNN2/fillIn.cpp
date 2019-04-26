/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fillIn.cpp
 *
 * Code generation for function 'fillIn'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "fillIn.h"
#include "eml_int_forloop_overflow_check.h"
#include "ctrainingRoutineKNN2_data.h"

/* Variable Definitions */
static emlrtRSInfo q_emlrtRSI = { 14,  /* lineNo */
  "sparse/fillIn",                     /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/shared/coder/coder/+coder/+internal/@sparse/fillIn.m"/* pathName */
};

/* Function Definitions */
void sparse_fillIn(const emlrtStack *sp, coder_internal_sparse *b_this)
{
  int32_T idx;
  int32_T b;
  boolean_T overflow;
  int32_T c;
  int32_T ridx;
  real_T val;
  int32_T currRowIdx;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  idx = 1;
  b = b_this->colidx->size[0];
  st.site = &q_emlrtRSI;
  overflow = ((1 <= b_this->colidx->size[0] - 1) && (b_this->colidx->size[0] - 1
    > 2147483646));
  if (overflow) {
    b_st.site = &r_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (c = 0; c <= b - 2; c++) {
    ridx = b_this->colidx->data[c];
    b_this->colidx->data[c] = idx;
    while (ridx < b_this->colidx->data[c + 1]) {
      val = 0.0;
      currRowIdx = b_this->rowidx->data[ridx - 1];
      while ((ridx < b_this->colidx->data[c + 1]) && (b_this->rowidx->data[ridx
              - 1] == currRowIdx)) {
        val += b_this->d->data[ridx - 1];
        ridx++;
      }

      if (val != 0.0) {
        b_this->d->data[idx - 1] = val;
        b_this->rowidx->data[idx - 1] = currRowIdx;
        idx++;
      }
    }
  }

  b_this->colidx->data[b_this->colidx->size[0] - 1] = idx;
}

/* End of code generation (fillIn.cpp) */
