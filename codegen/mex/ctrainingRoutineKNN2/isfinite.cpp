/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * isfinite.cpp
 *
 * Code generation for function 'isfinite'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "isfinite.h"

/* Function Definitions */
boolean_T b_isfinite(real_T x)
{
  return (!muDoubleScalarIsInf(x)) && (!muDoubleScalarIsNaN(x));
}

/* End of code generation (isfinite.cpp) */
