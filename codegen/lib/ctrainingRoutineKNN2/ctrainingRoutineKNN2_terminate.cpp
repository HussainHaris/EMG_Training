/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ctrainingRoutineKNN2_terminate.cpp
 *
 * Code generation for function 'ctrainingRoutineKNN2_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "ctrainingRoutineKNN2_terminate.h"
#include "ctrainingRoutineKNN2_data.h"

/* Function Definitions */
void ctrainingRoutineKNN2_terminate()
{
  omp_destroy_nest_lock(&emlrtNestLockGlobal);
}

/* End of code generation (ctrainingRoutineKNN2_terminate.cpp) */
