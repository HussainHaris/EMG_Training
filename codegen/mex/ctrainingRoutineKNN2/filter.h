/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * filter.h
 *
 * Code generation for function 'filter'
 *
 */

#ifndef FILTER_H
#define FILTER_H

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
extern void b_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[],
                     const real_T x[18], const real_T zi_data[], real_T y[18],
                     real_T zf_data[], int32_T zf_size[1]);
extern void c_filter(const emlrtStack *sp, real_T b_data[], int32_T b_size[1],
                     real_T a_data[], int32_T a_size[1], const emxArray_real_T
                     *x, const emxArray_real_T *zi, emxArray_real_T *y,
                     emxArray_real_T *zf);
extern void d_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[],
                     const emxArray_real_T *x, const emxArray_real_T *zi,
                     emxArray_real_T *y, emxArray_real_T *zf);
extern void f_filter(const emlrtStack *sp, real_T b_data[], int32_T b_size[1],
                     real_T a_data[], int32_T a_size[1], const emxArray_real_T
                     *x, const emxArray_real_T *zi, emxArray_real_T *y,
                     emxArray_real_T *zf);
extern void filter(const emlrtStack *sp, real_T b_data[], int32_T b_size[1],
                   real_T a_data[], int32_T a_size[1], const emxArray_real_T *x,
                   const emxArray_real_T *zi, emxArray_real_T *y);
extern void h_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[],
                     const emxArray_real_T *x, const emxArray_real_T *zi,
                     emxArray_real_T *y);
extern void i_filter(const emlrtStack *sp, real_T b_data[], int32_T b_size[1],
                     real_T a_data[], int32_T a_size[1], const emxArray_real_T
                     *x, const emxArray_real_T *zi, emxArray_real_T *y);
extern void j_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[],
                     const real_T x[9], const real_T zi_data[], real_T y[9],
                     emxArray_real_T *zf);
extern void k_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[],
                     const real_T x[9], const emxArray_real_T *zi, real_T y[9]);
extern void l_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[],
                     const emxArray_real_T *x, const emxArray_real_T *zi,
                     emxArray_real_T *y, emxArray_real_T *zf);
extern void m_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[],
                     const emxArray_real_T *x, const emxArray_real_T *zi,
                     emxArray_real_T *y);

#endif

/* End of code generation (filter.h) */
