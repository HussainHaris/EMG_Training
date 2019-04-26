/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bsxfun.cpp
 *
 * Code generation for function 'bsxfun'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "bsxfun.h"
#include "ctrainingRoutineKNN2_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo pb_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "bsxfun",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/elmat/bsxfun.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 50,/* lineNo */
  15,                                  /* colNo */
  "bsxfun",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/elmat/bsxfun.m"/* pName */
};

/* Function Definitions */
void b_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
              emxArray_real_T *b, emxArray_real_T *c)
{
  int32_T csz_idx_1;
  int32_T i26;
  int32_T bcoef;
  int32_T k;
  int32_T varargin_2;
  int32_T varargin_3;
  int32_T b_k;
  if (b->size[1] == 1) {
    csz_idx_1 = a->size[1];
  } else if (a->size[1] == 1) {
    csz_idx_1 = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    csz_idx_1 = a->size[1];
  } else {
    emlrtErrorWithMessageIdR2018a(sp, &mc_emlrtRTEI,
      "MATLAB:bsxfun:arrayDimensionsMustMatch",
      "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }

  i26 = c->size[0] * c->size[1];
  c->size[0] = 9;
  c->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(sp, c, i26, &pb_emlrtRTEI);
  if (c->size[1] != 0) {
    csz_idx_1 = (a->size[1] != 1);
    bcoef = (b->size[1] != 1);
    i26 = c->size[1] - 1;
    for (k = 0; k <= i26; k++) {
      varargin_2 = csz_idx_1 * k;
      varargin_3 = bcoef * k;
      for (b_k = 0; b_k < 9; b_k++) {
        c->data[b_k + 9 * k] = a->data[varargin_2] - b->data[b_k + 9 *
          varargin_3];
      }
    }
  }
}

void bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
            emxArray_real_T *b, emxArray_real_T *c)
{
  int32_T csz_idx_1;
  int32_T i9;
  int32_T bcoef;
  int32_T k;
  int32_T varargin_2;
  int32_T varargin_3;
  int32_T b_k;
  if (b->size[1] == 1) {
    csz_idx_1 = a->size[1];
  } else if (a->size[1] == 1) {
    csz_idx_1 = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    csz_idx_1 = a->size[1];
  } else {
    emlrtErrorWithMessageIdR2018a(sp, &mc_emlrtRTEI,
      "MATLAB:bsxfun:arrayDimensionsMustMatch",
      "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }

  i9 = c->size[0] * c->size[1];
  c->size[0] = 18;
  c->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(sp, c, i9, &pb_emlrtRTEI);
  if (c->size[1] != 0) {
    csz_idx_1 = (a->size[1] != 1);
    bcoef = (b->size[1] != 1);
    i9 = c->size[1] - 1;
    for (k = 0; k <= i9; k++) {
      varargin_2 = csz_idx_1 * k;
      varargin_3 = bcoef * k;
      for (b_k = 0; b_k < 18; b_k++) {
        c->data[b_k + 18 * k] = a->data[varargin_2] - b->data[b_k + 18 *
          varargin_3];
      }
    }
  }
}

/* End of code generation (bsxfun.cpp) */
