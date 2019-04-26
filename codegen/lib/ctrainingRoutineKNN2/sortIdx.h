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
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "omp.h"
#include "ctrainingRoutineKNN2_types.h"

/* Function Declarations */
extern void merge(int idx[250], double x[250], int offset, int np, int nq, int
                  iwork[250], double xwork[250]);

#endif

/* End of code generation (sortIdx.h) */
