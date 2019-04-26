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
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "omp.h"
#include "ctrainingRoutineKNN2_types.h"

/* Type Definitions */
#include "cs.h"

/* Function Declarations */
extern void b_efiltfilt(const emxArray_real_T *x, emxArray_real_T *y);
extern void efiltfilt(const emxArray_real_T *x, emxArray_real_T *y);

#endif

/* End of code generation (filtfilt.h) */
