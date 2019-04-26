/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * introsort.cpp
 *
 * Code generation for function 'introsort'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "introsort.h"
#include "insertionsort.h"

/* Function Definitions */
void b_introsort(int32_T x[7], const cell_wrap_6 cmp_tunableEnvironment[2])
{
  b_insertionsort(x, cmp_tunableEnvironment);
}

void introsort(int32_T x[16], const cell_wrap_5 cmp_tunableEnvironment[2])
{
  insertionsort(x, cmp_tunableEnvironment);
}

/* End of code generation (introsort.cpp) */
