/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortIdx.h
 *
 * Code generation for function 'sortIdx'
 *
 */

#ifndef SORTIDX_H
#define SORTIDX_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "ctrainingRoutineKNN2_types.h"

/* Function Declarations */
extern void merge_block(const emlrtStack *sp, int32_T idx[250], real_T x[250],
  int32_T n, int32_T iwork[250], real_T xwork[250]);

#endif

/* End of code generation (sortIdx.h) */
