/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ctrainingRoutineKNN2_data.cpp
 *
 * Code generation for function 'ctrainingRoutineKNN2_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "ctrainingRoutineKNN2_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
covrtInstance emlrtCoverageInstance;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131482U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "ctrainingRoutineKNN2",              /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo r_emlrtRSI = { 21,         /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo u_emlrtRSI = { 287,        /* lineNo */
  "CXSparseAPI/iteratedLU",            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/CXSparseAPI.m"/* pathName */
};

emlrtRSInfo w_emlrtRSI = { 310,        /* lineNo */
  "CXSparseAPI/iteratedLU",            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/CXSparseAPI.m"/* pathName */
};

emlrtRSInfo x_emlrtRSI = { 453,        /* lineNo */
  "CXSparseAPI/makeCX",                /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/CXSparseAPI.m"/* pathName */
};

emlrtRSInfo y_emlrtRSI = { 351,        /* lineNo */
  "CXSparseAPI/iteratedQR",            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/CXSparseAPI.m"/* pathName */
};

emlrtRSInfo kb_emlrtRSI = { 60,        /* lineNo */
  "xaxpy",                             /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/+blas/xaxpy.m"/* pathName */
};

emlrtRSInfo lb_emlrtRSI = { 61,        /* lineNo */
  "xaxpy",                             /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/+blas/xaxpy.m"/* pathName */
};

emlrtRSInfo mb_emlrtRSI = { 99,        /* lineNo */
  "ceval_xaxpy",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/+blas/xaxpy.m"/* pathName */
};

emlrtRSInfo nb_emlrtRSI = { 100,       /* lineNo */
  "ceval_xaxpy",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/+blas/xaxpy.m"/* pathName */
};

emlrtRSInfo ob_emlrtRSI = { 101,       /* lineNo */
  "ceval_xaxpy",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/+blas/xaxpy.m"/* pathName */
};

emlrtRSInfo nc_emlrtRSI = { 108,       /* lineNo */
  "computeDimsData",                   /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pathName */
};

emlrtRSInfo wc_emlrtRSI = { 1680,      /* lineNo */
  "locSortrows",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/shared/coder/coder/+coder/+internal/@sparse/sparse.m"/* pathName */
};

emlrtRSInfo xc_emlrtRSI = { 18,        /* lineNo */
  "insertionsort",                     /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/shared/coder/coder/+coder/+internal/insertionsort.m"/* pathName */
};

emlrtRSInfo yc_emlrtRSI = { 34,        /* lineNo */
  "introsort",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/shared/coder/coder/+coder/+internal/introsort.m"/* pathName */
};

emlrtRSInfo ed_emlrtRSI = { 57,        /* lineNo */
  "xgemv",                             /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/+blas/xgemv.m"/* pathName */
};

emlrtRSInfo fd_emlrtRSI = { 58,        /* lineNo */
  "xgemv",                             /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/+refblas/xgemv.m"/* pathName */
};

emlrtRSInfo sd_emlrtRSI = { 506,       /* lineNo */
  "merge_block",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/sortIdx.m"/* pathName */
};

emlrtRTEInfo yb_emlrtRTEI = { 12,      /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pName */
};

emlrtRTEInfo hc_emlrtRTEI = { 146,     /* lineNo */
  5,                                   /* colNo */
  "filter",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pName */
};

emlrtRTEInfo nc_emlrtRTEI = { 17,      /* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/mean.m"/* pName */
};

/* End of code generation (ctrainingRoutineKNN2_data.cpp) */
