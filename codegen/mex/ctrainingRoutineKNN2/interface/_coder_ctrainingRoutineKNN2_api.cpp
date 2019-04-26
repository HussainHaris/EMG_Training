/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_ctrainingRoutineKNN2_api.cpp
 *
 * Code generation for function '_coder_ctrainingRoutineKNN2_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "_coder_ctrainingRoutineKNN2_api.h"
#include "ctrainingRoutineKNN2_emxutil.h"
#include "ctrainingRoutineKNN2_data.h"

/* Variable Definitions */
static emlrtRTEInfo xb_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_ctrainingRoutineKNN2_api",   /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const real_T u[9920]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *dW, const
  char_T *identifier, emxArray_real_T *y);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u[9920])
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv12[2] = { 0, 0 };

  static const int32_T iv13[2] = { 1, 9920 };

  y = NULL;
  m3 = emlrtCreateNumericArray(2, iv12, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m3, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m3, *(int32_T (*)[2])&iv13[0], 2);
  emlrtAssign(&y, m3);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  const boolean_T bv0[2] = { true, true };

  int32_T iv14[2];
  int32_T i33;
  emlrtCheckVsBuiltInR2012b(sp, (const emlrtMsgIdentifier *)msgId, src, "double",
    false, 2U, *(int32_T (*)[2])&dims[0], (boolean_T *)&bv0[0], iv14);
  ret->allocatedSize = iv14[0] * iv14[1];
  i33 = ret->size[0] * ret->size[1];
  ret->size[0] = iv14[0];
  ret->size[1] = iv14[1];
  emxEnsureCapacity_real_T(sp, ret, i33, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *dW, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(dW), &thisId, y);
  emlrtDestroyArray(&dW);
}

void ctrainingRoutineKNN2_api(const mxArray * const prhs[1], int32_T, const
  mxArray *plhs[1])
{
  real_T (*F)[9920];
  emxArray_real_T *dW;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  F = (real_T (*)[9920])mxMalloc(sizeof(real_T [9920]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &dW, 2, &xb_emlrtRTEI, true);

  /* Marshall function inputs */
  dW->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "dW", dW);

  /* Invoke the target function */
  ctrainingRoutineKNN2(&st, dW, *F);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(*F);
  emxFree_real_T(&dW);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_ctrainingRoutineKNN2_api.cpp) */
