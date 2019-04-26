/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ctrainingRoutineKNN2_initialize.cpp
 *
 * Code generation for function 'ctrainingRoutineKNN2_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "ctrainingRoutineKNN2_initialize.h"
#include "_coder_ctrainingRoutineKNN2_mex.h"
#include "ctrainingRoutineKNN2_data.h"

/* Function Declarations */
static void ctrainingRoutineKNN2_once();

/* Function Definitions */
static void ctrainingRoutineKNN2_once()
{
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m",
                  0U, 1U, 3U, 0U, 0U, 0U, 0U, 2U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "ctrainingRoutineKNN2", 0, -1,
               1817);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 2U, 1761, -1, 1812);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 1U, 1470, -1, 1747);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 192, -1, 1393);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0U, 0U, 1395, 1407, 1760);
  covrtForInit(&emlrtCoverageInstance, 0U, 1U, 1437, 1462, 1756);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/sig_rms_pad_fixed.m",
                  1U, 1U, 4U, 1U, 0U, 0U, 0U, 1U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 1U, 0U, "sig_rms_pad_fixed", 0, -1, 510);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 1U, 3U, 386, -1, 499);
  covrtBasicBlockInit(&emlrtCoverageInstance, 1U, 2U, 295, -1, 367);
  covrtBasicBlockInit(&emlrtCoverageInstance, 1U, 1U, 268, -1, 288);
  covrtBasicBlockInit(&emlrtCoverageInstance, 1U, 0U, 68, -1, 210);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 1U, 0U, 212, 263, -1, 293);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 1U, 0U, 369, 385, 504);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 1U);
}

void ctrainingRoutineKNN2_initialize()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    ctrainingRoutineKNN2_once();
  }
}

/* End of code generation (ctrainingRoutineKNN2_initialize.cpp) */
