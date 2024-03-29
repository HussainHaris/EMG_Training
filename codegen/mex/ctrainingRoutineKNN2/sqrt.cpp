/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sqrt.cpp
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "sqrt.h"
#include "ctrainingRoutineKNN2_data.h"

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, real_T *x)
{
  if (*x < 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &yb_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  *x = muDoubleScalarSqrt(*x);
}

/* End of code generation (sqrt.cpp) */
