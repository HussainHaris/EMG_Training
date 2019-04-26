/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * filtfilt.h
 *
 * Code generation for function 'filtfilt'
 *
 */

#ifndef FILTFILT_H
#define FILTFILT_H

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

/* Type Definitions */
#include "cs.h"

/* Function Declarations */
extern void b_efiltfilt(const emlrtStack *sp, const emxArray_real_T *x,
  emxArray_real_T *y);
extern void efiltfilt(const emlrtStack *sp, const emxArray_real_T *x,
                      emxArray_real_T *y);

#endif

/* End of code generation (filtfilt.h) */
