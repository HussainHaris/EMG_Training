/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mean.cpp
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "mean.h"

/* Function Definitions */
real_T mean(const real_T x_data[], const int32_T x_size[1])
{
  real_T y;
  int32_T vlen;
  int32_T k;
  vlen = x_size[0];
  if (x_size[0] == 0) {
    y = 0.0;
  } else {
    y = x_data[0];
    for (k = 2; k <= vlen; k++) {
      y += x_data[k - 1];
    }
  }

  y /= static_cast<real_T>(x_size[0]);
  return y;
}

/* End of code generation (mean.cpp) */
