/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ctrainingRoutineKNN2_types.h
 *
 * Code generation for function 'ctrainingRoutineKNN2'
 *
 */

#ifndef CTRAININGROUTINEKNN2_TYPES_H
#define CTRAININGROUTINEKNN2_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  int32_T f1[16];
} cell_wrap_5;

typedef struct {
  int32_T f1[7];
} cell_wrap_6;

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

typedef struct {
  emxArray_real_T *d;
  emxArray_int32_T *colidx;
  emxArray_int32_T *rowidx;
} coder_internal_sparse;

#endif

/* End of code generation (ctrainingRoutineKNN2_types.h) */
