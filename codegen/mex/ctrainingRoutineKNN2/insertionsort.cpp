/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * insertionsort.cpp
 *
 * Code generation for function 'insertionsort'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "insertionsort.h"

/* Function Definitions */
void b_insertionsort(int32_T x[7], const cell_wrap_6 cmp_tunableEnvironment[2])
{
  int32_T k;
  int32_T xc;
  int32_T idx;
  boolean_T exitg1;
  int32_T i37;
  for (k = 0; k < 6; k++) {
    xc = x[k + 1] - 1;
    idx = k;
    exitg1 = false;
    while ((!exitg1) && (idx + 1 >= 1)) {
      i37 = cmp_tunableEnvironment[0].f1[x[idx] - 1];
      if ((cmp_tunableEnvironment[0].f1[xc] < i37) || ((cmp_tunableEnvironment[0]
            .f1[xc] == i37) && (cmp_tunableEnvironment[1].f1[xc] <
            cmp_tunableEnvironment[1].f1[x[idx] - 1]))) {
        x[idx + 1] = x[idx];
        idx--;
      } else {
        exitg1 = true;
      }
    }

    x[idx + 1] = xc + 1;
  }
}

void insertionsort(int32_T x[16], const cell_wrap_5 cmp_tunableEnvironment[2])
{
  int32_T k;
  int32_T xc;
  int32_T idx;
  boolean_T exitg1;
  int32_T i34;
  for (k = 0; k < 15; k++) {
    xc = x[k + 1] - 1;
    idx = k;
    exitg1 = false;
    while ((!exitg1) && (idx + 1 >= 1)) {
      i34 = cmp_tunableEnvironment[0].f1[x[idx] - 1];
      if ((cmp_tunableEnvironment[0].f1[xc] < i34) || ((cmp_tunableEnvironment[0]
            .f1[xc] == i34) && (cmp_tunableEnvironment[1].f1[xc] <
            cmp_tunableEnvironment[1].f1[x[idx] - 1]))) {
        x[idx + 1] = x[idx];
        idx--;
      } else {
        exitg1 = true;
      }
    }

    x[idx + 1] = xc + 1;
  }
}

/* End of code generation (insertionsort.cpp) */
