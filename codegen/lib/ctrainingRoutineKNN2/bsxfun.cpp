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

/* Function Definitions */
void b_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int csz_idx_1;
  int acoef;
  int i17;
  int k;
  int varargin_2;
  int varargin_3;
  int b_k;
  csz_idx_1 = b->size[1];
  acoef = a->size[1];
  if (csz_idx_1 < acoef) {
    acoef = csz_idx_1;
  }

  if (b->size[1] == 1) {
    csz_idx_1 = a->size[1];
  } else if (a->size[1] == 1) {
    csz_idx_1 = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    csz_idx_1 = a->size[1];
  } else {
    csz_idx_1 = acoef;
  }

  i17 = c->size[0] * c->size[1];
  c->size[0] = 9;
  c->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(c, i17);
  if (c->size[1] != 0) {
    acoef = (a->size[1] != 1);
    csz_idx_1 = (b->size[1] != 1);
    i17 = c->size[1] - 1;
    for (k = 0; k <= i17; k++) {
      varargin_2 = acoef * k;
      varargin_3 = csz_idx_1 * k;
      for (b_k = 0; b_k < 9; b_k++) {
        c->data[b_k + 9 * k] = a->data[varargin_2] - b->data[b_k + 9 *
          varargin_3];
      }
    }
  }
}

void bsxfun(const emxArray_real_T *a, const emxArray_real_T *b, emxArray_real_T *
            c)
{
  int csz_idx_1;
  int acoef;
  int i4;
  int k;
  int varargin_2;
  int varargin_3;
  int b_k;
  csz_idx_1 = b->size[1];
  acoef = a->size[1];
  if (csz_idx_1 < acoef) {
    acoef = csz_idx_1;
  }

  if (b->size[1] == 1) {
    csz_idx_1 = a->size[1];
  } else if (a->size[1] == 1) {
    csz_idx_1 = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    csz_idx_1 = a->size[1];
  } else {
    csz_idx_1 = acoef;
  }

  i4 = c->size[0] * c->size[1];
  c->size[0] = 18;
  c->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(c, i4);
  if (c->size[1] != 0) {
    acoef = (a->size[1] != 1);
    csz_idx_1 = (b->size[1] != 1);
    i4 = c->size[1] - 1;
    for (k = 0; k <= i4; k++) {
      varargin_2 = acoef * k;
      varargin_3 = csz_idx_1 * k;
      for (b_k = 0; b_k < 18; b_k++) {
        c->data[b_k + 18 * k] = a->data[varargin_2] - b->data[b_k + 18 *
          varargin_3];
      }
    }
  }
}

/* End of code generation (bsxfun.cpp) */
