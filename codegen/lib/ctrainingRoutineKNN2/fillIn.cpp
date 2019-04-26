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

/* Function Definitions */
void sparse_fillIn(coder_internal_sparse *b_this)
{
  int idx;
  int i22;
  int c;
  int ridx;
  double val;
  int currRowIdx;
  idx = 1;
  i22 = b_this->colidx->size[0];
  for (c = 0; c <= i22 - 2; c++) {
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
