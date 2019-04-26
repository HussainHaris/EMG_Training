/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bsxfun.h
 *
 * Code generation for function 'bsxfun'
 *
 */

#ifndef BSXFUN_H
#define BSXFUN_H

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
extern void b_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
                     emxArray_real_T *b, emxArray_real_T *c);
extern void bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
                   emxArray_real_T *b, emxArray_real_T *c);

#endif

/* End of code generation (bsxfun.h) */
