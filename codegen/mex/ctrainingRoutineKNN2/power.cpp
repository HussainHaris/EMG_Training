/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power.cpp
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "power.h"

/* Function Definitions */
void power(const real_T a[259], real_T y[259])
{
  int32_T k;
  for (k = 0; k < 259; k++) {
    y[k] = a[k] * a[k];
  }
}

/* End of code generation (power.cpp) */
