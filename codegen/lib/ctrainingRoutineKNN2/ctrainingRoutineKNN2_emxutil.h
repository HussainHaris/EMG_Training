/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ctrainingRoutineKNN2_emxutil.h
 *
 * Code generation for function 'ctrainingRoutineKNN2_emxutil'
 *
 */

#ifndef CTRAININGROUTINEKNN2_EMXUTIL_H
#define CTRAININGROUTINEKNN2_EMXUTIL_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "omp.h"
#include "ctrainingRoutineKNN2_types.h"

/* Function Declarations */
extern void c_emxFreeStruct_coder_internal_(coder_internal_sparse *pStruct);
extern void c_emxInitStruct_coder_internal_(coder_internal_sparse *pStruct);
extern void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int oldNumel);
extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);

#endif

/* End of code generation (ctrainingRoutineKNN2_emxutil.h) */
