/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * filtfilt.cpp
 *
 * Code generation for function 'filtfilt'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "filtfilt.h"
#include "introsort.h"
#include "ctrainingRoutineKNN2_emxutil.h"
#include "filter.h"
#include "bsxfun.h"
#include "warning.h"
#include "fillIn.h"
#include "ctrainingRoutineKNN2_data.h"
#include "solve_from_lu.h"
#include "makeCXSparseMatrix.h"
#include "solve_from_qr.h"

/* Type Definitions */
#include "cs.h"

/* Variable Definitions */
static emlrtRSInfo h_emlrtRSI = { 114, /* lineNo */
  "efiltfilt",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 129, /* lineNo */
  "efiltfilt",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 134, /* lineNo */
  "efiltfilt",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 136, /* lineNo */
  "efiltfilt",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 140, /* lineNo */
  "efiltfilt",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 76,  /* lineNo */
  "validateattributes",                /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 246, /* lineNo */
  "getCoeffsAndInitialConditions",     /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 13,  /* lineNo */
  "sparse",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/sparfun/sparse.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 220, /* lineNo */
  "sparse/sparse",                     /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/shared/coder/coder/+coder/+internal/@sparse/sparse.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 1481,/* lineNo */
  "sparse/mldivide",                   /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/shared/coder/coder/+coder/+internal/@sparse/sparse.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 156, /* lineNo */
  "CXSparseAPI/iteratedSolve",         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 307, /* lineNo */
  "CXSparseAPI/iteratedLU",            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/CXSparseAPI.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 271,/* lineNo */
  "ffOneChanCat",                      /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 269,/* lineNo */
  "ffOneChanCat",                      /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 315,/* lineNo */
  "ffOneChan",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 316,/* lineNo */
  "ffOneChan",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 318,/* lineNo */
  "ffOneChan",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 331,/* lineNo */
  "ffOneChan",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 332,/* lineNo */
  "ffOneChan",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 372,/* lineNo */
  "ffMultiChan",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 375,/* lineNo */
  "ffMultiChan",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 376,/* lineNo */
  "ffMultiChan",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 377,/* lineNo */
  "ffMultiChan",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 378,/* lineNo */
  "ffMultiChan",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 379,/* lineNo */
  "ffMultiChan",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 381,/* lineNo */
  "ffMultiChan",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 382,/* lineNo */
  "ffMultiChan",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 387,/* lineNo */
  "ffMultiChan",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 28, /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 17, /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 139,/* lineNo */
  "sparse/sparse",                     /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/shared/coder/coder/+coder/+internal/@sparse/sparse.m"/* pathName */
};

static emlrtRTEInfo g_emlrtRTEI = { 123,/* lineNo */
  9,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 121,/* lineNo */
  9,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 246,/* lineNo */
  20,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 13,/* lineNo */
  5,                                   /* colNo */
  "sparse",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/sparfun/sparse.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 140,/* lineNo */
  34,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 136,/* lineNo */
  13,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 134,/* lineNo */
  13,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 140,/* lineNo */
  9,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 266,/* lineNo */
  5,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 147,/* lineNo */
  9,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 145,/* lineNo */
  9,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 134,/* lineNo */
  20,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 52,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 274,/* lineNo */
  5,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "sparse",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/shared/coder/coder/+coder/+internal/@sparse/sparse.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 140,/* lineNo */
  16,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 280,/* lineNo */
  14,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 372,/* lineNo */
  5,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 375,/* lineNo */
  40,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 387,/* lineNo */
  5,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 354,/* lineNo */
  14,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 378,/* lineNo */
  42,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 381,/* lineNo */
  41,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 382,/* lineNo */
  38,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 382,/* lineNo */
  9,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 384,/* lineNo */
  9,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 375,/* lineNo */
  9,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 379,/* lineNo */
  9,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 136,/* lineNo */
  20,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 316,/* lineNo */
  44,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 348,/* lineNo */
  9,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 332,/* lineNo */
  9,                                   /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 106,/* lineNo */
  14,                                  /* colNo */
  "filtfilt",                          /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 228,/* lineNo */
  51,                                  /* colNo */
  "getCoeffsAndInitialConditions",     /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatenonempty.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatefinite.m"/* pName */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  266,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChanCat",                      /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  266,                                 /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChanCat",                      /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  266,                                 /* lineNo */
  14,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChanCat",                      /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  266,                                 /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChanCat",                      /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  270,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChanCat",                      /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  274,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChanCat",                      /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ic_emlrtRTEI = { 51,/* lineNo */
  13,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 58,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 115,/* lineNo */
  9,                                   /* colNo */
  "computeDimsData",                   /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 61,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pName */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  375,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "ffMultiChan",                       /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  375,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "ffMultiChan",                       /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  378,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "ffMultiChan",                       /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  378,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "ffMultiChan",                       /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  382,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "ffMultiChan",                       /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  384,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "ffMultiChan",                       /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  271,                                 /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChanCat",                      /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  274,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChanCat",                      /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  314,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChan",                         /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  314,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChan",                         /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  317,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChan",                         /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  317,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChan",                         /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  332,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChan",                         /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  348,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChan",                         /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  314,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChan",                         /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  314,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChan",                         /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  316,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChan",                         /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  317,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChan",                         /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  317,                                 /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "ffOneChan",                         /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo de_emlrtRSI = { 348,/* lineNo */
  "ffOneChan",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 384,/* lineNo */
  "ffMultiChan",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 274,/* lineNo */
  "ffOneChanCat",                      /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 18, /* lineNo */
  "indexDivide",                       /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/eml/+coder/+internal/indexDivide.m"/* pathName */
};

/* Function Declarations */
static void b_ffMultiChan(const emlrtStack *sp, const real_T b_data[], const
  real_T a_data[], emxArray_real_T *xc, const real_T zi_data[], emxArray_real_T *
  y);
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static void ffMultiChan(const emlrtStack *sp, const real_T b_data[], const
  real_T a_data[], emxArray_real_T *xc, const real_T zi_data[], emxArray_real_T *
  y);
static void ffOneChan(const emlrtStack *sp, const real_T b_data[], const real_T
                      a_data[], emxArray_real_T *xc, const real_T zi_data[]);

/* Function Definitions */
static void b_ffMultiChan(const emlrtStack *sp, const real_T b_data[], const
  real_T a_data[], emxArray_real_T *xc, const real_T zi_data[], emxArray_real_T *
  y)
{
  uint32_T sz_idx_0;
  uint32_T sz_idx_1;
  int32_T nx;
  int32_T calclen;
  int32_T maxdimlen;
  int32_T i25;
  emxArray_real_T *xt;
  int32_T num_idx_1;
  emxArray_real_T *yc3;
  emxArray_real_T *yc5;
  emxArray_real_T *zo;
  emxArray_real_T *yc2;
  emxArray_real_T *b_zo;
  emxArray_real_T *r11;
  emxArray_real_T *zi;
  int32_T loop_ub;
  real_T b_b_data[4];
  real_T b_a_data[4];
  int32_T b_size[1];
  int32_T a_size[1];
  real_T d5;
  real_T c_b_data[7];
  real_T c_a_data[7];
  real_T b_sz_idx_0;
  real_T b_sz_idx_1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  sz_idx_0 = static_cast<uint32_T>(xc->size[0]);
  sz_idx_1 = static_cast<uint32_T>(xc->size[1]);
  st.site = &dc_emlrtRSI;
  nx = xc->size[0] * xc->size[1];
  b_st.site = &mc_emlrtRSI;
  if (static_cast<int32_T>(sz_idx_0) > 0) {
    c_st.site = &ge_emlrtRSI;
    calclen = div_s32(&c_st, nx, (int32_T)sz_idx_0);
    if (calclen > nx) {
      emlrtErrorWithMessageIdR2018a(&b_st, &kc_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }
  } else {
    calclen = 0;
  }

  maxdimlen = xc->size[0];
  if (xc->size[1] > xc->size[0]) {
    maxdimlen = xc->size[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (static_cast<int32_T>(sz_idx_0) > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &ic_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (calclen > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &ic_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (static_cast<int32_T>(sz_idx_0) * calclen != nx) {
    emlrtErrorWithMessageIdR2018a(&st, &jc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  maxdimlen = static_cast<int32_T>(sz_idx_0);
  i25 = xc->size[0] * xc->size[1];
  xc->size[0] = static_cast<int32_T>(sz_idx_0);
  xc->size[1] = calclen;
  emxEnsureCapacity_real_T(sp, xc, i25, &eb_emlrtRTEI);
  for (i25 = 0; i25 < calclen; i25++) {
    for (num_idx_1 = 0; num_idx_1 < maxdimlen; num_idx_1++) {
      xc->data[num_idx_1 + xc->size[0] * i25] = xc->data[num_idx_1 + maxdimlen *
        i25];
    }
  }

  emxInit_real_T(sp, &xt, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &yc3, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &yc5, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(sp, &zo, 2, &hb_emlrtRTEI, true);
  emxInit_real_T(sp, &yc2, 2, &kb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_zo, 2, &hb_emlrtRTEI, true);
  emxInit_real_T(sp, &r11, 2, &s_emlrtRTEI, true);
  emxInit_real_T(sp, &zi, 2, &hb_emlrtRTEI, true);
  i25 = xc->size[0];
  if (1 > i25) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i25, &p_emlrtBCI, sp);
  }

  maxdimlen = xc->size[0];
  for (i25 = 0; i25 < 9; i25++) {
    num_idx_1 = 10 - i25;
    if (num_idx_1 > maxdimlen) {
      emlrtDynamicBoundsCheckR2012b(num_idx_1, 1, maxdimlen, &q_emlrtBCI, sp);
    }
  }

  loop_ub = xc->size[1];
  i25 = r11->size[0] * r11->size[1];
  r11->size[0] = 1;
  r11->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, r11, i25, &s_emlrtRTEI);
  for (i25 = 0; i25 < loop_ub; i25++) {
    r11->data[i25] = 2.0 * xc->data[xc->size[0] * i25];
  }

  loop_ub = xc->size[1];
  i25 = yc3->size[0] * yc3->size[1];
  yc3->size[0] = 9;
  yc3->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, yc3, i25, &fb_emlrtRTEI);
  for (i25 = 0; i25 < loop_ub; i25++) {
    for (num_idx_1 = 0; num_idx_1 < 9; num_idx_1++) {
      yc3->data[num_idx_1 + 9 * i25] = xc->data[(xc->size[0] * i25 - num_idx_1)
        + 9];
    }
  }

  st.site = &ec_emlrtRSI;
  b_bsxfun(&st, r11, yc3, xt);
  b_b_data[0] = b_data[0];
  b_a_data[0] = a_data[0];
  b_b_data[1] = b_data[1];
  b_a_data[1] = a_data[1];
  b_b_data[2] = b_data[2];
  b_a_data[2] = a_data[2];
  b_b_data[3] = b_data[3];
  b_a_data[3] = a_data[3];
  loop_ub = xt->size[1];
  i25 = zi->size[0] * zi->size[1];
  zi->size[0] = 3;
  zi->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, zi, i25, &hb_emlrtRTEI);
  for (i25 = 0; i25 < 3; i25++) {
    for (num_idx_1 = 0; num_idx_1 < loop_ub; num_idx_1++) {
      d5 = zi_data[i25] * xt->data[9 * num_idx_1];
      zi->data[i25 + 3 * num_idx_1] = d5;
    }
  }

  st.site = &fc_emlrtRSI;
  l_filter(&st, b_b_data, b_a_data, xt, zi, yc3, zo);
  b_size[0] = 4;
  a_size[0] = 4;
  c_b_data[0] = b_data[0];
  c_a_data[0] = a_data[0];
  c_b_data[1] = b_data[1];
  c_a_data[1] = a_data[1];
  c_b_data[2] = b_data[2];
  c_a_data[2] = a_data[2];
  c_b_data[3] = b_data[3];
  c_a_data[3] = a_data[3];
  st.site = &gc_emlrtRSI;
  f_filter(&st, c_b_data, b_size, c_a_data, a_size, xc, zo, yc2, b_zo);
  i25 = xc->size[0];
  num_idx_1 = xc->size[0];
  if ((num_idx_1 < 1) || (num_idx_1 > i25)) {
    emlrtDynamicBoundsCheckR2012b(num_idx_1, 1, i25, &r_emlrtBCI, sp);
  }

  maxdimlen = xc->size[0] - 1;
  nx = xc->size[0];
  loop_ub = xc->size[1];
  i25 = yc3->size[0] * yc3->size[1];
  yc3->size[0] = 9;
  yc3->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, yc3, i25, &ib_emlrtRTEI);
  for (i25 = 0; i25 < loop_ub; i25++) {
    for (num_idx_1 = 0; num_idx_1 < 9; num_idx_1++) {
      calclen = maxdimlen - num_idx_1;
      if ((calclen < 1) || (calclen > nx)) {
        emlrtDynamicBoundsCheckR2012b(calclen, 1, nx, &s_emlrtBCI, sp);
      }

      yc3->data[num_idx_1 + 9 * i25] = xc->data[(calclen + xc->size[0] * i25) -
        1];
    }
  }

  loop_ub = xc->size[1];
  maxdimlen = xc->size[0];
  i25 = r11->size[0] * r11->size[1];
  r11->size[0] = 1;
  r11->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, r11, i25, &s_emlrtRTEI);
  for (i25 = 0; i25 < loop_ub; i25++) {
    r11->data[i25] = 2.0 * xc->data[(maxdimlen + xc->size[0] * i25) - 1];
  }

  st.site = &hc_emlrtRSI;
  b_bsxfun(&st, r11, yc3, xt);
  b_b_data[0] = b_data[0];
  b_a_data[0] = a_data[0];
  b_b_data[1] = b_data[1];
  b_a_data[1] = a_data[1];
  b_b_data[2] = b_data[2];
  b_a_data[2] = a_data[2];
  b_b_data[3] = b_data[3];
  b_a_data[3] = a_data[3];
  st.site = &ic_emlrtRSI;
  m_filter(&st, b_b_data, b_a_data, xt, b_zo, yc3);
  b_b_data[0] = b_data[0];
  b_a_data[0] = a_data[0];
  b_b_data[1] = b_data[1];
  b_a_data[1] = a_data[1];
  b_b_data[2] = b_data[2];
  b_a_data[2] = a_data[2];
  b_b_data[3] = b_data[3];
  b_a_data[3] = a_data[3];
  loop_ub = yc3->size[1];
  i25 = xt->size[0] * xt->size[1];
  xt->size[0] = 9;
  xt->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, xt, i25, &jb_emlrtRTEI);
  for (i25 = 0; i25 < loop_ub; i25++) {
    for (num_idx_1 = 0; num_idx_1 < 9; num_idx_1++) {
      xt->data[num_idx_1 + 9 * i25] = yc3->data[(9 * i25 - num_idx_1) + 8];
    }
  }

  loop_ub = yc3->size[1];
  i25 = zi->size[0] * zi->size[1];
  zi->size[0] = 3;
  zi->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, zi, i25, &hb_emlrtRTEI);
  for (i25 = 0; i25 < 3; i25++) {
    for (num_idx_1 = 0; num_idx_1 < loop_ub; num_idx_1++) {
      d5 = zi_data[i25] * yc3->data[8 + 9 * num_idx_1];
      zi->data[i25 + 3 * num_idx_1] = d5;
    }
  }

  st.site = &jc_emlrtRSI;
  l_filter(&st, b_b_data, b_a_data, xt, zi, yc3, zo);
  if (1 > yc2->size[0]) {
    i25 = 0;
    num_idx_1 = 1;
    calclen = -1;
  } else {
    i25 = yc2->size[0];
    num_idx_1 = yc2->size[0];
    if ((num_idx_1 < 1) || (num_idx_1 > i25)) {
      emlrtDynamicBoundsCheckR2012b(num_idx_1, 1, i25, &t_emlrtBCI, sp);
    }

    i25 = num_idx_1 - 1;
    num_idx_1 = -1;
    calclen = 0;
  }

  loop_ub = yc2->size[1] - 1;
  maxdimlen = yc5->size[0] * yc5->size[1];
  st.site = &kc_emlrtRSI;
  nx = div_s32_floor(&st, calclen - i25, num_idx_1);
  yc5->size[0] = nx + 1;
  yc5->size[1] = loop_ub + 1;
  emxEnsureCapacity_real_T(sp, yc5, maxdimlen, &kb_emlrtRTEI);
  for (calclen = 0; calclen <= loop_ub; calclen++) {
    for (maxdimlen = 0; maxdimlen <= nx; maxdimlen++) {
      yc5->data[maxdimlen + yc5->size[0] * calclen] = yc2->data[(i25 + num_idx_1
        * maxdimlen) + yc2->size[0] * calclen];
    }
  }

  i25 = yc2->size[0] * yc2->size[1];
  yc2->size[0] = yc5->size[0];
  yc2->size[1] = yc5->size[1];
  emxEnsureCapacity_real_T(sp, yc2, i25, &kb_emlrtRTEI);
  loop_ub = yc5->size[1];
  for (i25 = 0; i25 < loop_ub; i25++) {
    nx = yc5->size[0];
    for (num_idx_1 = 0; num_idx_1 < nx; num_idx_1++) {
      yc2->data[num_idx_1 + yc2->size[0] * i25] = yc5->data[num_idx_1 +
        yc5->size[0] * i25];
    }
  }

  b_size[0] = 4;
  a_size[0] = 4;
  c_b_data[0] = b_data[0];
  c_a_data[0] = a_data[0];
  c_b_data[1] = b_data[1];
  c_a_data[1] = a_data[1];
  c_b_data[2] = b_data[2];
  c_a_data[2] = a_data[2];
  c_b_data[3] = b_data[3];
  c_a_data[3] = a_data[3];
  st.site = &kc_emlrtRSI;
  i_filter(&st, c_b_data, b_size, c_a_data, a_size, yc2, zo, yc5);
  if (1 > yc5->size[0]) {
    i25 = 0;
    num_idx_1 = 1;
    calclen = -1;
  } else {
    i25 = yc5->size[0];
    num_idx_1 = yc5->size[0];
    if ((num_idx_1 < 1) || (num_idx_1 > i25)) {
      emlrtDynamicBoundsCheckR2012b(num_idx_1, 1, i25, &u_emlrtBCI, sp);
    }

    i25 = num_idx_1 - 1;
    num_idx_1 = -1;
    calclen = 0;
  }

  loop_ub = yc5->size[1];
  maxdimlen = xc->size[0] * xc->size[1];
  st.site = &ee_emlrtRSI;
  nx = div_s32_floor(&st, calclen - i25, num_idx_1);
  xc->size[0] = nx + 1;
  xc->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, xc, maxdimlen, &mb_emlrtRTEI);
  for (calclen = 0; calclen < loop_ub; calclen++) {
    for (maxdimlen = 0; maxdimlen <= nx; maxdimlen++) {
      xc->data[maxdimlen + xc->size[0] * calclen] = yc5->data[(i25 + num_idx_1 *
        maxdimlen) + yc5->size[0] * calclen];
    }
  }

  emxFree_real_T(&zi);
  emxFree_real_T(&r11);
  emxFree_real_T(&b_zo);
  emxFree_real_T(&yc2);
  emxFree_real_T(&zo);
  emxFree_real_T(&yc5);
  emxFree_real_T(&yc3);
  emxFree_real_T(&xt);
  st.site = &lc_emlrtRSI;
  nx = xc->size[0] * xc->size[1];
  b_st.site = &uc_emlrtRSI;
  if (static_cast<int32_T>(sz_idx_0) <= 0) {
    b_sz_idx_0 = 0.0;
  } else {
    b_sz_idx_0 = sz_idx_0;
  }

  if (static_cast<int32_T>(sz_idx_1) <= 0) {
    b_sz_idx_1 = 0.0;
  } else {
    b_sz_idx_1 = b_sz_idx_0 * static_cast<real_T>(sz_idx_1);
  }

  if (!(b_sz_idx_1 <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &lc_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      "Coder:MATLAB:pmaxsize", 0);
  }

  calclen = static_cast<int32_T>(sz_idx_0);
  num_idx_1 = static_cast<int32_T>(sz_idx_1);
  maxdimlen = xc->size[0];
  if (xc->size[1] > xc->size[0]) {
    maxdimlen = xc->size[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (calclen > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &ic_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (num_idx_1 > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &ic_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  loop_ub = calclen * num_idx_1;
  if (loop_ub != nx) {
    emlrtErrorWithMessageIdR2018a(&st, &jc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  i25 = y->size[0] * y->size[1];
  y->size[0] = calclen;
  y->size[1] = num_idx_1;
  emxEnsureCapacity_real_T(sp, y, i25, &gb_emlrtRTEI);
  for (i25 = 0; i25 < loop_ub; i25++) {
    y->data[i25] = xc->data[i25];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T b_numerator;
  uint32_T b_denominator;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator < 0) {
      b_numerator = ~static_cast<uint32_T>(numerator) + 1U;
    } else {
      b_numerator = static_cast<uint32_T>(numerator);
    }

    if (denominator < 0) {
      b_denominator = ~static_cast<uint32_T>(denominator) + 1U;
    } else {
      b_denominator = static_cast<uint32_T>(denominator);
    }

    tempAbsQuotient = b_numerator / b_denominator;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -static_cast<int32_T>(tempAbsQuotient);
    } else {
      quotient = static_cast<int32_T>(tempAbsQuotient);
    }
  }

  return quotient;
}

static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator < 0) {
      absNumerator = ~static_cast<uint32_T>(numerator) + 1U;
    } else {
      absNumerator = static_cast<uint32_T>(numerator);
    }

    if (denominator < 0) {
      absDenominator = ~static_cast<uint32_T>(denominator) + 1U;
    } else {
      absDenominator = static_cast<uint32_T>(denominator);
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }

      quotient = -static_cast<int32_T>(tempAbsQuotient);
    } else {
      quotient = static_cast<int32_T>(tempAbsQuotient);
    }
  }

  return quotient;
}

static void ffMultiChan(const emlrtStack *sp, const real_T b_data[], const
  real_T a_data[], emxArray_real_T *xc, const real_T zi_data[], emxArray_real_T *
  y)
{
  uint32_T sz_idx_0;
  uint32_T sz_idx_1;
  int32_T nx;
  int32_T calclen;
  int32_T maxdimlen;
  int32_T i8;
  emxArray_real_T *xt;
  int32_T num_idx_1;
  emxArray_real_T *yc3;
  emxArray_real_T *yc5;
  emxArray_real_T *zo;
  emxArray_real_T *yc2;
  emxArray_real_T *b_zo;
  emxArray_real_T *r3;
  emxArray_real_T *zi;
  emxArray_real_T *b_yc2;
  int32_T loop_ub;
  real_T b_b_data[7];
  real_T b_a_data[7];
  int32_T b_size[1];
  int32_T a_size[1];
  real_T d2;
  real_T c_b_data[7];
  real_T c_a_data[7];
  real_T b_sz_idx_0;
  real_T b_sz_idx_1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  sz_idx_0 = static_cast<uint32_T>(xc->size[0]);
  sz_idx_1 = static_cast<uint32_T>(xc->size[1]);
  st.site = &dc_emlrtRSI;
  nx = xc->size[0] * xc->size[1];
  b_st.site = &mc_emlrtRSI;
  if (static_cast<int32_T>(sz_idx_0) > 0) {
    c_st.site = &ge_emlrtRSI;
    calclen = div_s32(&c_st, nx, (int32_T)sz_idx_0);
    if (calclen > nx) {
      emlrtErrorWithMessageIdR2018a(&b_st, &kc_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }
  } else {
    calclen = 0;
  }

  maxdimlen = xc->size[0];
  if (xc->size[1] > xc->size[0]) {
    maxdimlen = xc->size[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (static_cast<int32_T>(sz_idx_0) > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &ic_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (calclen > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &ic_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (static_cast<int32_T>(sz_idx_0) * calclen != nx) {
    emlrtErrorWithMessageIdR2018a(&st, &jc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  maxdimlen = static_cast<int32_T>(sz_idx_0);
  i8 = xc->size[0] * xc->size[1];
  xc->size[0] = static_cast<int32_T>(sz_idx_0);
  xc->size[1] = calclen;
  emxEnsureCapacity_real_T(sp, xc, i8, &eb_emlrtRTEI);
  for (i8 = 0; i8 < calclen; i8++) {
    for (num_idx_1 = 0; num_idx_1 < maxdimlen; num_idx_1++) {
      xc->data[num_idx_1 + xc->size[0] * i8] = xc->data[num_idx_1 + maxdimlen *
        i8];
    }
  }

  emxInit_real_T(sp, &xt, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &yc3, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &yc5, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(sp, &zo, 2, &hb_emlrtRTEI, true);
  emxInit_real_T(sp, &yc2, 2, &kb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_zo, 2, &hb_emlrtRTEI, true);
  emxInit_real_T(sp, &r3, 2, &s_emlrtRTEI, true);
  emxInit_real_T(sp, &zi, 2, &hb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_yc2, 2, &kb_emlrtRTEI, true);
  i8 = xc->size[0];
  if (1 > i8) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i8, &p_emlrtBCI, sp);
  }

  maxdimlen = xc->size[0];
  for (i8 = 0; i8 < 18; i8++) {
    num_idx_1 = 19 - i8;
    if (num_idx_1 > maxdimlen) {
      emlrtDynamicBoundsCheckR2012b(num_idx_1, 1, maxdimlen, &q_emlrtBCI, sp);
    }
  }

  loop_ub = xc->size[1];
  i8 = r3->size[0] * r3->size[1];
  r3->size[0] = 1;
  r3->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, r3, i8, &s_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    r3->data[i8] = 2.0 * xc->data[xc->size[0] * i8];
  }

  loop_ub = xc->size[1];
  i8 = yc3->size[0] * yc3->size[1];
  yc3->size[0] = 18;
  yc3->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, yc3, i8, &fb_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    for (num_idx_1 = 0; num_idx_1 < 18; num_idx_1++) {
      yc3->data[num_idx_1 + 18 * i8] = xc->data[(xc->size[0] * i8 - num_idx_1) +
        18];
    }
  }

  st.site = &ec_emlrtRSI;
  bsxfun(&st, r3, yc3, xt);
  for (i8 = 0; i8 < 7; i8++) {
    b_b_data[i8] = b_data[i8];
    b_a_data[i8] = a_data[i8];
  }

  loop_ub = xt->size[1];
  i8 = zi->size[0] * zi->size[1];
  zi->size[0] = 6;
  zi->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, zi, i8, &hb_emlrtRTEI);
  for (i8 = 0; i8 < 6; i8++) {
    for (num_idx_1 = 0; num_idx_1 < loop_ub; num_idx_1++) {
      d2 = zi_data[i8] * xt->data[18 * num_idx_1];
      zi->data[i8 + 6 * num_idx_1] = d2;
    }
  }

  st.site = &fc_emlrtRSI;
  d_filter(&st, b_b_data, b_a_data, xt, zi, yc3, zo);
  b_size[0] = 7;
  a_size[0] = 7;
  for (i8 = 0; i8 < 7; i8++) {
    b_b_data[i8] = b_data[i8];
    b_a_data[i8] = a_data[i8];
  }

  st.site = &gc_emlrtRSI;
  f_filter(&st, b_b_data, b_size, b_a_data, a_size, xc, zo, yc2, b_zo);
  i8 = xc->size[0];
  num_idx_1 = xc->size[0];
  if ((num_idx_1 < 1) || (num_idx_1 > i8)) {
    emlrtDynamicBoundsCheckR2012b(num_idx_1, 1, i8, &r_emlrtBCI, sp);
  }

  maxdimlen = xc->size[0] - 1;
  nx = xc->size[0];
  loop_ub = xc->size[1];
  i8 = yc3->size[0] * yc3->size[1];
  yc3->size[0] = 18;
  yc3->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, yc3, i8, &ib_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    for (num_idx_1 = 0; num_idx_1 < 18; num_idx_1++) {
      calclen = maxdimlen - num_idx_1;
      if ((calclen < 1) || (calclen > nx)) {
        emlrtDynamicBoundsCheckR2012b(calclen, 1, nx, &s_emlrtBCI, sp);
      }

      yc3->data[num_idx_1 + 18 * i8] = xc->data[(calclen + xc->size[0] * i8) - 1];
    }
  }

  loop_ub = xc->size[1];
  maxdimlen = xc->size[0];
  i8 = r3->size[0] * r3->size[1];
  r3->size[0] = 1;
  r3->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, r3, i8, &s_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    r3->data[i8] = 2.0 * xc->data[(maxdimlen + xc->size[0] * i8) - 1];
  }

  st.site = &hc_emlrtRSI;
  bsxfun(&st, r3, yc3, xt);
  for (i8 = 0; i8 < 7; i8++) {
    b_b_data[i8] = b_data[i8];
    b_a_data[i8] = a_data[i8];
  }

  st.site = &ic_emlrtRSI;
  h_filter(&st, b_b_data, b_a_data, xt, b_zo, yc3);
  for (i8 = 0; i8 < 7; i8++) {
    b_b_data[i8] = b_data[i8];
    b_a_data[i8] = a_data[i8];
  }

  loop_ub = yc3->size[1];
  i8 = xt->size[0] * xt->size[1];
  xt->size[0] = 18;
  xt->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, xt, i8, &jb_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    for (num_idx_1 = 0; num_idx_1 < 18; num_idx_1++) {
      xt->data[num_idx_1 + 18 * i8] = yc3->data[(18 * i8 - num_idx_1) + 17];
    }
  }

  loop_ub = yc3->size[1];
  i8 = zi->size[0] * zi->size[1];
  zi->size[0] = 6;
  zi->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, zi, i8, &hb_emlrtRTEI);
  for (i8 = 0; i8 < 6; i8++) {
    for (num_idx_1 = 0; num_idx_1 < loop_ub; num_idx_1++) {
      d2 = zi_data[i8] * yc3->data[17 + 18 * num_idx_1];
      zi->data[i8 + 6 * num_idx_1] = d2;
    }
  }

  st.site = &jc_emlrtRSI;
  d_filter(&st, b_b_data, b_a_data, xt, zi, yc3, zo);
  if (1 > yc2->size[0]) {
    i8 = 0;
    num_idx_1 = 1;
    calclen = -1;
  } else {
    i8 = yc2->size[0];
    num_idx_1 = yc2->size[0];
    if ((num_idx_1 < 1) || (num_idx_1 > i8)) {
      emlrtDynamicBoundsCheckR2012b(num_idx_1, 1, i8, &t_emlrtBCI, sp);
    }

    i8 = num_idx_1 - 1;
    num_idx_1 = -1;
    calclen = 0;
  }

  for (maxdimlen = 0; maxdimlen < 7; maxdimlen++) {
    b_b_data[maxdimlen] = b_data[maxdimlen];
    b_a_data[maxdimlen] = a_data[maxdimlen];
  }

  loop_ub = yc2->size[1] - 1;
  maxdimlen = b_yc2->size[0] * b_yc2->size[1];
  st.site = &kc_emlrtRSI;
  nx = div_s32_floor(&st, calclen - i8, num_idx_1);
  b_yc2->size[0] = nx + 1;
  b_yc2->size[1] = loop_ub + 1;
  emxEnsureCapacity_real_T(sp, b_yc2, maxdimlen, &kb_emlrtRTEI);
  for (calclen = 0; calclen <= loop_ub; calclen++) {
    for (maxdimlen = 0; maxdimlen <= nx; maxdimlen++) {
      b_yc2->data[maxdimlen + b_yc2->size[0] * calclen] = yc2->data[(i8 +
        num_idx_1 * maxdimlen) + yc2->size[0] * calclen];
    }
  }

  i8 = yc2->size[0] * yc2->size[1];
  yc2->size[0] = b_yc2->size[0];
  yc2->size[1] = b_yc2->size[1];
  emxEnsureCapacity_real_T(sp, yc2, i8, &kb_emlrtRTEI);
  loop_ub = b_yc2->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    nx = b_yc2->size[0];
    for (num_idx_1 = 0; num_idx_1 < nx; num_idx_1++) {
      yc2->data[num_idx_1 + yc2->size[0] * i8] = b_yc2->data[num_idx_1 +
        b_yc2->size[0] * i8];
    }
  }

  b_size[0] = 7;
  a_size[0] = 7;
  for (i8 = 0; i8 < 7; i8++) {
    c_b_data[i8] = b_b_data[i8];
    c_a_data[i8] = b_a_data[i8];
  }

  st.site = &kc_emlrtRSI;
  i_filter(&st, c_b_data, b_size, c_a_data, a_size, yc2, zo, b_yc2);
  i8 = yc5->size[0] * yc5->size[1];
  yc5->size[0] = b_yc2->size[0];
  yc5->size[1] = b_yc2->size[1];
  emxEnsureCapacity_real_T(sp, yc5, i8, &lb_emlrtRTEI);
  loop_ub = b_yc2->size[0] * b_yc2->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    yc5->data[i8] = b_yc2->data[i8];
  }

  if (1 > yc5->size[0]) {
    i8 = 0;
    num_idx_1 = 1;
    calclen = -1;
  } else {
    i8 = yc5->size[0];
    num_idx_1 = yc5->size[0];
    if ((num_idx_1 < 1) || (num_idx_1 > i8)) {
      emlrtDynamicBoundsCheckR2012b(num_idx_1, 1, i8, &u_emlrtBCI, sp);
    }

    i8 = num_idx_1 - 1;
    num_idx_1 = -1;
    calclen = 0;
  }

  loop_ub = yc5->size[1];
  maxdimlen = xc->size[0] * xc->size[1];
  st.site = &ee_emlrtRSI;
  nx = div_s32_floor(&st, calclen - i8, num_idx_1);
  xc->size[0] = nx + 1;
  xc->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, xc, maxdimlen, &mb_emlrtRTEI);
  for (calclen = 0; calclen < loop_ub; calclen++) {
    for (maxdimlen = 0; maxdimlen <= nx; maxdimlen++) {
      xc->data[maxdimlen + xc->size[0] * calclen] = yc5->data[(i8 + num_idx_1 *
        maxdimlen) + yc5->size[0] * calclen];
    }
  }

  emxFree_real_T(&b_yc2);
  emxFree_real_T(&zi);
  emxFree_real_T(&r3);
  emxFree_real_T(&b_zo);
  emxFree_real_T(&yc2);
  emxFree_real_T(&zo);
  emxFree_real_T(&yc5);
  emxFree_real_T(&yc3);
  emxFree_real_T(&xt);
  st.site = &lc_emlrtRSI;
  nx = xc->size[0] * xc->size[1];
  b_st.site = &uc_emlrtRSI;
  if (static_cast<int32_T>(sz_idx_0) <= 0) {
    b_sz_idx_0 = 0.0;
  } else {
    b_sz_idx_0 = sz_idx_0;
  }

  if (static_cast<int32_T>(sz_idx_1) <= 0) {
    b_sz_idx_1 = 0.0;
  } else {
    b_sz_idx_1 = b_sz_idx_0 * static_cast<real_T>(sz_idx_1);
  }

  if (!(b_sz_idx_1 <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &lc_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      "Coder:MATLAB:pmaxsize", 0);
  }

  calclen = static_cast<int32_T>(sz_idx_0);
  num_idx_1 = static_cast<int32_T>(sz_idx_1);
  maxdimlen = xc->size[0];
  if (xc->size[1] > xc->size[0]) {
    maxdimlen = xc->size[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (calclen > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &ic_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (num_idx_1 > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &ic_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  loop_ub = calclen * num_idx_1;
  if (loop_ub != nx) {
    emlrtErrorWithMessageIdR2018a(&st, &jc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  i8 = y->size[0] * y->size[1];
  y->size[0] = calclen;
  y->size[1] = num_idx_1;
  emxEnsureCapacity_real_T(sp, y, i8, &gb_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    y->data[i8] = xc->data[i8];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void ffOneChan(const emlrtStack *sp, const real_T b_data[], const real_T
                      a_data[], emxArray_real_T *xc, const real_T zi_data[])
{
  emxArray_real_T *yc5;
  emxArray_real_T *yc2;
  emxArray_real_T *zo;
  emxArray_real_T *b_yc2;
  real_T a1;
  int32_T i35;
  int32_T b_xc;
  real_T d6;
  int32_T i36;
  real_T b_b_data[7];
  real_T b_a_data[7];
  real_T xt[18];
  real_T b_zi_data[6];
  real_T unusedU0[18];
  real_T zo_data[6];
  int32_T zo_size[1];
  int32_T b_size[1];
  int32_T a_size[1];
  emxArray_real_T b_zo_data;
  real_T c_b_data[7];
  real_T c_a_data[7];
  int32_T naxpy;
  real_T yc3[18];
  int32_T j;
  int32_T yc3_tmp;
  emxArray_real_T c_zo_data;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &yc5, 1, &vb_emlrtRTEI, true);
  emxInit_real_T(sp, &yc2, 1, &x_emlrtRTEI, true);
  emxInit_real_T(sp, &zo, 1, &x_emlrtRTEI, true);
  emxInit_real_T(sp, &b_yc2, 1, &x_emlrtRTEI, true);
  a1 = a_data[0];
  i35 = xc->size[1];
  if (1 > i35) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i35, &eb_emlrtBCI, sp);
  }

  i35 = xc->size[0];
  if (1 > i35) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i35, &x_emlrtBCI, sp);
  }

  i35 = xc->size[1];
  if (1 > i35) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i35, &fb_emlrtBCI, sp);
  }

  b_xc = xc->size[0];
  d6 = 2.0 * xc->data[0];
  for (i35 = 0; i35 < 18; i35++) {
    i36 = 19 - i35;
    if (i36 > b_xc) {
      emlrtDynamicBoundsCheckR2012b(i36, 1, b_xc, &y_emlrtBCI, sp);
    }

    xt[i35] = -xc->data[i36 - 1] + d6;
  }

  for (i35 = 0; i35 < 7; i35++) {
    b_b_data[i35] = b_data[i35];
    b_a_data[i35] = a_data[i35];
  }

  for (i35 = 0; i35 < 6; i35++) {
    b_zi_data[i35] = zi_data[i35] * xt[0];
  }

  st.site = &pb_emlrtRSI;
  b_filter(&st, b_b_data, b_a_data, xt, b_zi_data, unusedU0, zo_data, zo_size);
  i35 = xc->size[1];
  if (1 > i35) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i35, &gb_emlrtBCI, sp);
  }

  for (i35 = 0; i35 < 7; i35++) {
    b_b_data[i35] = b_data[i35];
    b_a_data[i35] = a_data[i35];
  }

  b_xc = xc->size[0];
  i35 = yc5->size[0];
  yc5->size[0] = b_xc;
  emxEnsureCapacity_real_T(sp, yc5, i35, &tb_emlrtRTEI);
  for (i35 = 0; i35 < b_xc; i35++) {
    yc5->data[i35] = xc->data[i35];
  }

  b_size[0] = 7;
  a_size[0] = 7;
  for (i35 = 0; i35 < 7; i35++) {
    c_b_data[i35] = b_b_data[i35];
    c_a_data[i35] = b_a_data[i35];
  }

  b_zo_data.data = &zo_data[0];
  b_zo_data.size = &zo_size[0];
  b_zo_data.allocatedSize = 6;
  b_zo_data.numDimensions = 1;
  b_zo_data.canFreeData = false;
  st.site = &qb_emlrtRSI;
  c_filter(&st, c_b_data, b_size, c_a_data, a_size, yc5, &b_zo_data, yc2, zo);
  i35 = xc->size[1];
  if (1 > i35) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i35, &hb_emlrtBCI, sp);
  }

  i35 = xc->size[1];
  if (1 > i35) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i35, &ib_emlrtBCI, sp);
  }

  b_xc = xc->size[0];
  naxpy = xc->size[0];
  i35 = xc->size[0];
  i36 = xc->size[0];
  if ((i36 < 1) || (i36 > i35)) {
    emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &ab_emlrtBCI, sp);
  }

  d6 = 2.0 * xc->data[i36 - 1];
  for (i35 = 0; i35 < 18; i35++) {
    i36 = (b_xc - i35) - 1;
    if ((i36 < 1) || (i36 > naxpy)) {
      emlrtDynamicBoundsCheckR2012b(i36, 1, naxpy, &bb_emlrtBCI, sp);
    }

    xt[i35] = -xc->data[i36 - 1] + d6;
  }

  st.site = &rb_emlrtRSI;
  for (i35 = 0; i35 < 7; i35++) {
    b_b_data[i35] = b_data[i35];
    b_a_data[i35] = a_data[i35];
  }

  if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      for (b_xc = 0; b_xc < 7; b_xc++) {
        b_b_data[b_xc] /= a1;
      }

      for (b_xc = 0; b_xc < 6; b_xc++) {
        b_a_data[b_xc + 1] /= a1;
      }

      b_a_data[0] = 1.0;
    }
  }

  for (b_xc = 0; b_xc < 6; b_xc++) {
    yc3[b_xc] = zo->data[b_xc];
  }

  memset(&yc3[6], 0, 12U * sizeof(real_T));
  for (b_xc = 0; b_xc < 18; b_xc++) {
    if (18 - b_xc < 7) {
      naxpy = 17 - b_xc;
    } else {
      naxpy = 6;
    }

    for (j = 0; j <= naxpy; j++) {
      yc3_tmp = b_xc + j;
      yc3[yc3_tmp] += xt[b_xc] * b_b_data[j];
    }

    if (17 - b_xc < 6) {
      naxpy = 16 - b_xc;
    } else {
      naxpy = 5;
    }

    d6 = yc3[b_xc];
    for (j = 0; j <= naxpy; j++) {
      yc3_tmp = (b_xc + j) + 1;
      yc3[yc3_tmp] += -d6 * b_a_data[j + 1];
    }
  }

  a1 = yc3[17];
  for (i35 = 0; i35 < 7; i35++) {
    b_b_data[i35] = b_data[i35];
    b_a_data[i35] = a_data[i35];
  }

  for (i35 = 0; i35 < 18; i35++) {
    xt[i35] = yc3[17 - i35];
  }

  memcpy(&yc3[0], &xt[0], 18U * sizeof(real_T));
  for (i35 = 0; i35 < 6; i35++) {
    b_zi_data[i35] = zi_data[i35] * a1;
  }

  st.site = &sb_emlrtRSI;
  b_filter(&st, b_b_data, b_a_data, yc3, b_zi_data, unusedU0, zo_data, zo_size);
  if (1 > yc2->size[0]) {
    i35 = 0;
    i36 = 1;
    naxpy = -1;
  } else {
    i35 = yc2->size[0];
    i36 = yc2->size[0];
    if ((i36 < 1) || (i36 > i35)) {
      emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &cb_emlrtBCI, sp);
    }

    i35 = i36 - 1;
    i36 = -1;
    naxpy = 0;
  }

  for (j = 0; j < 7; j++) {
    b_b_data[j] = b_data[j];
    b_a_data[j] = a_data[j];
  }

  j = b_yc2->size[0];
  st.site = &tb_emlrtRSI;
  b_xc = div_s32_floor(&st, naxpy - i35, i36);
  b_yc2->size[0] = b_xc + 1;
  emxEnsureCapacity_real_T(sp, b_yc2, j, &x_emlrtRTEI);
  for (naxpy = 0; naxpy <= b_xc; naxpy++) {
    b_yc2->data[naxpy] = yc2->data[i35 + i36 * naxpy];
  }

  i35 = yc2->size[0];
  yc2->size[0] = b_yc2->size[0];
  emxEnsureCapacity_real_T(sp, yc2, i35, &x_emlrtRTEI);
  b_xc = b_yc2->size[0];
  for (i35 = 0; i35 < b_xc; i35++) {
    yc2->data[i35] = b_yc2->data[i35];
  }

  b_size[0] = 7;
  a_size[0] = 7;
  for (i35 = 0; i35 < 7; i35++) {
    c_b_data[i35] = b_b_data[i35];
    c_a_data[i35] = b_a_data[i35];
  }

  c_zo_data.data = &zo_data[0];
  c_zo_data.size = &zo_size[0];
  c_zo_data.allocatedSize = 6;
  c_zo_data.numDimensions = 1;
  c_zo_data.canFreeData = false;
  st.site = &tb_emlrtRSI;
  filter(&st, c_b_data, b_size, c_a_data, a_size, yc2, &c_zo_data, yc5);
  if (1 > yc5->size[0]) {
    i35 = 0;
    i36 = 1;
    naxpy = -1;
  } else {
    i35 = yc5->size[0];
    i36 = yc5->size[0];
    if ((i36 < 1) || (i36 > i35)) {
      emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &db_emlrtBCI, sp);
    }

    i35 = i36 - 1;
    i36 = -1;
    naxpy = 0;
  }

  j = b_yc2->size[0];
  st.site = &de_emlrtRSI;
  b_xc = div_s32_floor(&st, naxpy - i35, i36);
  yc3_tmp = b_xc + 1;
  b_yc2->size[0] = yc3_tmp;
  emxEnsureCapacity_real_T(sp, b_yc2, j, &x_emlrtRTEI);
  for (naxpy = 0; naxpy <= b_xc; naxpy++) {
    b_yc2->data[naxpy] = yc5->data[i35 + i36 * naxpy];
  }

  i35 = yc5->size[0];
  yc5->size[0] = b_yc2->size[0];
  emxEnsureCapacity_real_T(sp, yc5, i35, &x_emlrtRTEI);
  b_xc = b_yc2->size[0];
  for (i35 = 0; i35 < b_xc; i35++) {
    yc5->data[i35] = b_yc2->data[i35];
  }

  i35 = xc->size[0] * xc->size[1];
  xc->size[0] = yc3_tmp;
  xc->size[1] = 1;
  emxEnsureCapacity_real_T(sp, xc, i35, &ub_emlrtRTEI);
  for (i35 = 0; i35 < 1; i35++) {
    for (i36 = 0; i36 < yc3_tmp; i36++) {
      xc->data[i36] = yc5->data[i36];
    }
  }

  emxFree_real_T(&b_yc2);
  emxFree_real_T(&zo);
  emxFree_real_T(&yc2);
  emxFree_real_T(&yc5);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_efiltfilt(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T
                 *y)
{
  boolean_T p;
  int32_T i22;
  int32_T cptr;
  boolean_T exitg1;
  emxArray_real_T *xCol;
  int32_T loop_ub;
  int32_T i23;
  real_T b2_data[4];
  real_T a2_data[4];
  real_T vals[7];
  real_T outBuff[3];
  coder_internal_sparse obj;
  int32_T sortedIndices[7];
  cell_wrap_6 t0_tunableEnvironment[2];
  static const int8_T a[7] = { 1, 1, 1, 2, 3, 2, 3 };

  static const int8_T b[7] = { 1, 2, 3, 2, 3, 1, 2 };

  int8_T cidxInt[7];
  int8_T ridxInt[7];
  cs_di* cxA;
  cs_dis * S;
  cs_din * N;
  emxArray_real_T *yCol;
  emxArray_real_T *yc5;
  emxArray_real_T *ytemp;
  real_T tol;
  emxArray_real_T *zo;
  emxArray_real_T *b_zo;
  real_T xt[9];
  real_T d3;
  real_T outBuff_data[3];
  int32_T b_xCol;
  int32_T b_yCol;
  real_T unusedU0[9];
  int32_T b2_size[1];
  int32_T a2_size[1];
  real_T b_a2_data[7];
  int32_T outBuff_size[1];
  real_T b_outBuff_data[6];
  emxArray_real_T c_outBuff_data;
  real_T yc3[9];
  emxArray_real_T d_outBuff_data;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &h_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  p = true;
  i22 = x->size[0] * x->size[1];
  cptr = 0;
  exitg1 = false;
  while ((!exitg1) && (cptr <= i22 - 1)) {
    if ((!muDoubleScalarIsInf(x->data[cptr])) && (!muDoubleScalarIsNaN(x->
          data[cptr]))) {
      cptr++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &cc_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedFinite",
      "MATLAB:filtfilt:expectedFinite", 3, 4, 5, "input");
  }

  b_st.site = &m_emlrtRSI;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &bc_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedNonempty",
      "MATLAB:filtfilt:expectedNonempty", 3, 4, 5, "input");
  }

  p = (x->size[0] == 1);
  emxInit_real_T(sp, &xCol, 2, &h_emlrtRTEI, true);
  if (p) {
    i22 = xCol->size[0] * xCol->size[1];
    xCol->size[0] = x->size[1];
    xCol->size[1] = x->size[0];
    emxEnsureCapacity_real_T(sp, xCol, i22, &h_emlrtRTEI);
    loop_ub = x->size[0];
    for (i22 = 0; i22 < loop_ub; i22++) {
      cptr = x->size[1];
      for (i23 = 0; i23 < cptr; i23++) {
        xCol->data[i23 + xCol->size[0] * i22] = x->data[i22 + x->size[0] * i23];
      }
    }
  } else {
    i22 = xCol->size[0] * xCol->size[1];
    xCol->size[0] = x->size[0];
    xCol->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, xCol, i22, &g_emlrtRTEI);
    loop_ub = x->size[0] * x->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      xCol->data[i22] = x->data[i22];
    }
  }

  st.site = &i_emlrtRSI;
  b2_data[0] = 0.950971887923409;
  a2_data[0] = 1.0;
  b2_data[1] = -2.85291566377023;
  a2_data[1] = -2.89947959461186;
  b2_data[2] = 2.85291566377023;
  a2_data[2] = 2.803947977383;
  b2_data[3] = -0.950971887923409;
  a2_data[3] = -0.904347531392409;
  if (xCol->size[0] <= 9) {
    emlrtErrorWithMessageIdR2018a(&st, &ac_emlrtRTEI,
      "signal:filtfilt:InvalidDimensionsDataShortForFiltOrder",
      "signal:filtfilt:InvalidDimensionsDataShortForFiltOrder", 2, 6, 9.0);
  }

  vals[0] = -1.8994795946118601;
  vals[1] = 2.803947977383;
  vals[3] = 1.0;
  vals[5] = -1.0;
  vals[2] = -0.904347531392409;
  vals[4] = 1.0;
  vals[6] = -1.0;
  outBuff[0] = -0.095592079686789067;
  outBuff[1] = 0.18643996207929447;
  outBuff[2] = -0.090962808656295469;
  c_emxInitStruct_coder_internal_(&st, &obj, &u_emlrtRTEI, true);
  b_st.site = &n_emlrtRSI;
  c_st.site = &o_emlrtRSI;
  for (cptr = 0; cptr < 7; cptr++) {
    sortedIndices[cptr] = cptr + 1;
  }

  d_st.site = &vc_emlrtRSI;
  for (i22 = 0; i22 < 7; i22++) {
    t0_tunableEnvironment[0].f1[i22] = a[i22];
    t0_tunableEnvironment[1].f1[i22] = b[i22];
  }

  b_introsort(sortedIndices, t0_tunableEnvironment);
  for (cptr = 0; cptr < 7; cptr++) {
    cidxInt[cptr] = a[sortedIndices[cptr] - 1];
    ridxInt[cptr] = b[sortedIndices[cptr] - 1];
  }

  i22 = obj.d->size[0];
  obj.d->size[0] = 7;
  emxEnsureCapacity_real_T(&c_st, obj.d, i22, &i_emlrtRTEI);
  for (i22 = 0; i22 < 7; i22++) {
    obj.d->data[i22] = 0.0;
  }

  i22 = obj.colidx->size[0];
  obj.colidx->size[0] = 4;
  emxEnsureCapacity_int32_T(&c_st, obj.colidx, i22, &j_emlrtRTEI);
  obj.colidx->data[0] = 1;
  i22 = obj.rowidx->size[0];
  obj.rowidx->size[0] = 7;
  emxEnsureCapacity_int32_T(&c_st, obj.rowidx, i22, &i_emlrtRTEI);
  for (i22 = 0; i22 < 7; i22++) {
    obj.rowidx->data[i22] = 0;
  }

  cptr = 0;
  while ((cptr + 1 <= 7) && (cidxInt[cptr] == 1)) {
    obj.rowidx->data[cptr] = ridxInt[cptr];
    cptr++;
  }

  obj.colidx->data[1] = cptr + 1;
  while ((cptr + 1 <= 7) && (cidxInt[cptr] == 2)) {
    obj.rowidx->data[cptr] = ridxInt[cptr];
    cptr++;
  }

  obj.colidx->data[2] = cptr + 1;
  while ((cptr + 1 <= 7) && (cidxInt[cptr] == 3)) {
    obj.rowidx->data[cptr] = ridxInt[cptr];
    cptr++;
  }

  obj.colidx->data[3] = cptr + 1;
  for (cptr = 0; cptr < 7; cptr++) {
    obj.d->data[cptr] = vals[sortedIndices[cptr] - 1];
  }

  d_st.site = &p_emlrtRSI;
  sparse_fillIn(&d_st, &obj);
  b_st.site = &n_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  d_st.site = &t_emlrtRSI;
  cxA = makeCXSparseMatrix(obj.colidx->data[obj.colidx->size[0] - 1] - 1, 3, 3,
    &obj.colidx->data[0], &obj.rowidx->data[0], &obj.d->data[0]);
  S = cs_di_sqr(2, cxA, 0);
  N = cs_di_lu(cxA, S, 1);
  cs_di_spfree(cxA);
  if (N == NULL) {
    e_st.site = &v_emlrtRSI;
    warning(&e_st);
    cs_di_sfree(S);
    cs_di_nfree(N);
    cxA = makeCXSparseMatrix(obj.colidx->data[obj.colidx->size[0] - 1] - 1, 3, 3,
      &obj.colidx->data[0], &obj.rowidx->data[0], &obj.d->data[0]);
    S = cs_di_sqr(2, cxA, 1);
    N = cs_di_qr(cxA, S);
    cs_di_spfree(cxA);
    qr_rank_di(N, &tol);
    solve_from_qr_di(N, S, (double *)&outBuff[0], 3, 3);
    cs_di_sfree(S);
    cs_di_nfree(N);
  } else {
    solve_from_lu_di(N, S, (double *)&outBuff[0], 3);
    cs_di_sfree(S);
    cs_di_nfree(N);
  }

  c_emxFreeStruct_coder_internal_(&obj);
  emxInit_real_T(sp, &yCol, 2, &m_emlrtRTEI, true);
  if (xCol->size[1] == 1) {
    emxInit_real_T(sp, &yc5, 1, &vb_emlrtRTEI, true);
    emxInit_real_T(sp, &ytemp, 1, &o_emlrtRTEI, true);
    if (xCol->size[0] < 10000) {
      st.site = &j_emlrtRSI;
      i22 = yCol->size[0] * yCol->size[1];
      yCol->size[0] = xCol->size[0];
      yCol->size[1] = xCol->size[1];
      emxEnsureCapacity_real_T(&st, yCol, i22, &m_emlrtRTEI);
      loop_ub = xCol->size[0] * xCol->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        yCol->data[i22] = xCol->data[i22];
      }

      i22 = yCol->size[0];
      if (1 > i22) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i22, &j_emlrtBCI, &st);
      }

      tol = 2.0 * yCol->data[0];
      cptr = yCol->size[0];
      i22 = yCol->size[0];
      i23 = yCol->size[0];
      if ((i23 < 1) || (i23 > i22)) {
        emlrtDynamicBoundsCheckR2012b(i23, 1, i22, &k_emlrtBCI, &st);
      }

      d3 = 2.0 * yCol->data[i23 - 1];
      b_xCol = yCol->size[0] - 1;
      b_yCol = yCol->size[0];
      loop_ub = yCol->size[0];
      i22 = ytemp->size[0];
      ytemp->size[0] = loop_ub + 18;
      emxEnsureCapacity_real_T(&st, ytemp, i22, &o_emlrtRTEI);
      for (i22 = 0; i22 < 9; i22++) {
        i23 = 10 - i22;
        if (i23 > cptr) {
          emlrtDynamicBoundsCheckR2012b(i23, 1, cptr, &l_emlrtBCI, &st);
        }

        ytemp->data[i22] = tol - yCol->data[i23 - 1];
      }

      for (i22 = 0; i22 < loop_ub; i22++) {
        ytemp->data[i22 + 9] = yCol->data[i22];
      }

      for (i22 = 0; i22 < 9; i22++) {
        i23 = b_xCol - i22;
        if ((i23 < 1) || (i23 > b_yCol)) {
          emlrtDynamicBoundsCheckR2012b(i23, 1, b_yCol, &m_emlrtBCI, &st);
        }

        ytemp->data[(i22 + loop_ub) + 9] = d3 - yCol->data[i23 - 1];
      }

      loop_ub = ytemp->size[0] - 1;
      tol = ytemp->data[0];
      i22 = yc5->size[0];
      yc5->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(&st, yc5, i22, &r_emlrtRTEI);
      for (i22 = 0; i22 <= loop_ub; i22++) {
        yc5->data[i22] = ytemp->data[i22];
      }

      outBuff_size[0] = 3;
      b_outBuff_data[0] = outBuff[0] * tol;
      b_outBuff_data[1] = outBuff[1] * tol;
      b_outBuff_data[2] = outBuff[2] * tol;
      b2_size[0] = 4;
      a2_size[0] = 4;
      vals[0] = 0.950971887923409;
      b_a2_data[0] = 1.0;
      vals[1] = -2.85291566377023;
      b_a2_data[1] = -2.89947959461186;
      vals[2] = 2.85291566377023;
      b_a2_data[2] = 2.803947977383;
      vals[3] = -0.950971887923409;
      b_a2_data[3] = -0.904347531392409;
      c_outBuff_data.data = &b_outBuff_data[0];
      c_outBuff_data.size = &outBuff_size[0];
      c_outBuff_data.allocatedSize = 6;
      c_outBuff_data.numDimensions = 1;
      c_outBuff_data.canFreeData = false;
      b_st.site = &bb_emlrtRSI;
      filter(&b_st, vals, b2_size, b_a2_data, a2_size, yc5, &c_outBuff_data,
             ytemp);
      if (1 > ytemp->size[0]) {
        i22 = 0;
        i23 = 1;
        cptr = -1;
      } else {
        i22 = ytemp->size[0];
        i23 = ytemp->size[0];
        if ((i23 < 1) || (i23 > i22)) {
          emlrtDynamicBoundsCheckR2012b(i23, 1, i22, &n_emlrtBCI, &st);
        }

        i22 = i23 - 1;
        i23 = -1;
        cptr = 0;
      }

      b_xCol = yc5->size[0];
      b_st.site = &j_emlrtRSI;
      loop_ub = div_s32_floor(&b_st, cptr - i22, i23);
      yc5->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(&st, yc5, b_xCol, &r_emlrtRTEI);
      for (cptr = 0; cptr <= loop_ub; cptr++) {
        yc5->data[cptr] = ytemp->data[i22 + i23 * cptr];
      }

      i22 = ytemp->size[0];
      ytemp->size[0] = yc5->size[0];
      emxEnsureCapacity_real_T(&st, ytemp, i22, &r_emlrtRTEI);
      loop_ub = yc5->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        ytemp->data[i22] = yc5->data[i22];
      }

      i22 = ytemp->size[0];
      if (1 > i22) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i22, &v_emlrtBCI, &st);
      }

      loop_ub = ytemp->size[0] - 1;
      tol = ytemp->data[0];
      i22 = yc5->size[0];
      yc5->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(&st, yc5, i22, &r_emlrtRTEI);
      for (i22 = 0; i22 <= loop_ub; i22++) {
        yc5->data[i22] = ytemp->data[i22];
      }

      outBuff_size[0] = 3;
      b_outBuff_data[0] = outBuff[0] * tol;
      b_outBuff_data[1] = outBuff[1] * tol;
      b_outBuff_data[2] = outBuff[2] * tol;
      b2_size[0] = 4;
      a2_size[0] = 4;
      vals[0] = 0.950971887923409;
      b_a2_data[0] = 1.0;
      vals[1] = -2.85291566377023;
      b_a2_data[1] = -2.89947959461186;
      vals[2] = 2.85291566377023;
      b_a2_data[2] = 2.803947977383;
      vals[3] = -0.950971887923409;
      b_a2_data[3] = -0.904347531392409;
      d_outBuff_data.data = &b_outBuff_data[0];
      d_outBuff_data.size = &outBuff_size[0];
      d_outBuff_data.allocatedSize = 6;
      d_outBuff_data.numDimensions = 1;
      d_outBuff_data.canFreeData = false;
      b_st.site = &ab_emlrtRSI;
      filter(&b_st, vals, b2_size, b_a2_data, a2_size, yc5, &d_outBuff_data,
             ytemp);
      if (10 > ytemp->size[0] - 9) {
        i23 = 1;
        i22 = 1;
        cptr = 0;
      } else {
        i22 = ytemp->size[0];
        i23 = ytemp->size[0] - 9;
        if ((i23 < 1) || (i23 > i22)) {
          emlrtDynamicBoundsCheckR2012b(i23, 1, i22, &o_emlrtBCI, &st);
        }

        i22 = -1;
        cptr = ytemp->size[0];
        if (10 > cptr) {
          emlrtDynamicBoundsCheckR2012b(10, 1, cptr, &w_emlrtBCI, &st);
        }

        cptr = 10;
      }

      b_xCol = yCol->size[0] * yCol->size[1];
      b_st.site = &fe_emlrtRSI;
      loop_ub = div_s32_floor(&b_st, cptr - i23, i22) + 1;
      yCol->size[0] = loop_ub;
      yCol->size[1] = 1;
      emxEnsureCapacity_real_T(&st, yCol, b_xCol, &m_emlrtRTEI);
      for (cptr = 0; cptr < loop_ub; cptr++) {
        yCol->data[cptr] = ytemp->data[(i23 + i22 * cptr) - 1];
      }
    } else {
      st.site = &k_emlrtRSI;
      emxInit_real_T(&st, &zo, 1, &wb_emlrtRTEI, true);
      emxInit_real_T(&st, &b_zo, 1, &wb_emlrtRTEI, true);
      i22 = xCol->size[0];
      if (1 > i22) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i22, &x_emlrtBCI, &st);
      }

      cptr = xCol->size[0];
      tol = 2.0 * xCol->data[0];
      for (i22 = 0; i22 < 9; i22++) {
        i23 = 10 - i22;
        if (i23 > cptr) {
          emlrtDynamicBoundsCheckR2012b(i23, 1, cptr, &y_emlrtBCI, &st);
        }

        xt[i22] = -xCol->data[i23 - 1] + tol;
      }

      b2_data[0] = 0.950971887923409;
      a2_data[0] = 1.0;
      b2_data[1] = -2.85291566377023;
      a2_data[1] = -2.89947959461186;
      b2_data[2] = 2.85291566377023;
      a2_data[2] = 2.803947977383;
      b2_data[3] = -0.950971887923409;
      a2_data[3] = -0.904347531392409;
      outBuff_data[0] = outBuff[0] * xt[0];
      outBuff_data[1] = outBuff[1] * xt[0];
      outBuff_data[2] = outBuff[2] * xt[0];
      b_st.site = &pb_emlrtRSI;
      j_filter(&b_st, b2_data, a2_data, xt, outBuff_data, unusedU0, zo);
      loop_ub = xCol->size[0];
      i22 = yc5->size[0];
      yc5->size[0] = loop_ub;
      emxEnsureCapacity_real_T(&st, yc5, i22, &tb_emlrtRTEI);
      for (i22 = 0; i22 < loop_ub; i22++) {
        yc5->data[i22] = xCol->data[i22];
      }

      b2_size[0] = 4;
      a2_size[0] = 4;
      vals[0] = 0.950971887923409;
      b_a2_data[0] = 1.0;
      vals[1] = -2.85291566377023;
      b_a2_data[1] = -2.89947959461186;
      vals[2] = 2.85291566377023;
      b_a2_data[2] = 2.803947977383;
      vals[3] = -0.950971887923409;
      b_a2_data[3] = -0.904347531392409;
      b_st.site = &qb_emlrtRSI;
      c_filter(&b_st, vals, b2_size, b_a2_data, a2_size, yc5, zo, ytemp, b_zo);
      cptr = xCol->size[0] - 1;
      b_xCol = xCol->size[0];
      i22 = xCol->size[0];
      i23 = xCol->size[0];
      if ((i23 < 1) || (i23 > i22)) {
        emlrtDynamicBoundsCheckR2012b(i23, 1, i22, &ab_emlrtBCI, &st);
      }

      tol = 2.0 * xCol->data[i23 - 1];
      for (i22 = 0; i22 < 9; i22++) {
        i23 = cptr - i22;
        if ((i23 < 1) || (i23 > b_xCol)) {
          emlrtDynamicBoundsCheckR2012b(i23, 1, b_xCol, &bb_emlrtBCI, &st);
        }

        xt[i22] = -xCol->data[i23 - 1] + tol;
      }

      b2_data[0] = 0.950971887923409;
      a2_data[0] = 1.0;
      b2_data[1] = -2.85291566377023;
      a2_data[1] = -2.89947959461186;
      b2_data[2] = 2.85291566377023;
      a2_data[2] = 2.803947977383;
      b2_data[3] = -0.950971887923409;
      a2_data[3] = -0.904347531392409;
      b_st.site = &rb_emlrtRSI;
      k_filter(&b_st, b2_data, a2_data, xt, b_zo, yc3);
      tol = yc3[8];
      b2_data[0] = 0.950971887923409;
      a2_data[0] = 1.0;
      b2_data[1] = -2.85291566377023;
      a2_data[1] = -2.89947959461186;
      b2_data[2] = 2.85291566377023;
      a2_data[2] = 2.803947977383;
      b2_data[3] = -0.950971887923409;
      a2_data[3] = -0.904347531392409;
      for (i22 = 0; i22 < 9; i22++) {
        xt[i22] = yc3[8 - i22];
      }

      memcpy(&yc3[0], &xt[0], 9U * sizeof(real_T));
      outBuff_data[0] = outBuff[0] * tol;
      outBuff_data[1] = outBuff[1] * tol;
      outBuff_data[2] = outBuff[2] * tol;
      b_st.site = &sb_emlrtRSI;
      j_filter(&b_st, b2_data, a2_data, yc3, outBuff_data, unusedU0, zo);
      if (1 > ytemp->size[0]) {
        i22 = 0;
        i23 = 1;
        cptr = -1;
      } else {
        i22 = ytemp->size[0];
        i23 = ytemp->size[0];
        if ((i23 < 1) || (i23 > i22)) {
          emlrtDynamicBoundsCheckR2012b(i23, 1, i22, &cb_emlrtBCI, &st);
        }

        i22 = i23 - 1;
        i23 = -1;
        cptr = 0;
      }

      b_xCol = yc5->size[0];
      b_st.site = &k_emlrtRSI;
      loop_ub = div_s32_floor(&b_st, cptr - i22, i23);
      yc5->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(&st, yc5, b_xCol, &sb_emlrtRTEI);
      for (cptr = 0; cptr <= loop_ub; cptr++) {
        yc5->data[cptr] = ytemp->data[i22 + i23 * cptr];
      }

      i22 = ytemp->size[0];
      ytemp->size[0] = yc5->size[0];
      emxEnsureCapacity_real_T(&st, ytemp, i22, &sb_emlrtRTEI);
      loop_ub = yc5->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        ytemp->data[i22] = yc5->data[i22];
      }

      b2_size[0] = 4;
      a2_size[0] = 4;
      vals[0] = 0.950971887923409;
      b_a2_data[0] = 1.0;
      vals[1] = -2.85291566377023;
      b_a2_data[1] = -2.89947959461186;
      vals[2] = 2.85291566377023;
      b_a2_data[2] = 2.803947977383;
      vals[3] = -0.950971887923409;
      b_a2_data[3] = -0.904347531392409;
      b_st.site = &tb_emlrtRSI;
      filter(&b_st, vals, b2_size, b_a2_data, a2_size, ytemp, zo, yc5);
      if (1 > yc5->size[0]) {
        i23 = 1;
        i22 = 1;
        cptr = 0;
      } else {
        i22 = yc5->size[0];
        i23 = yc5->size[0];
        if ((i23 < 1) || (i23 > i22)) {
          emlrtDynamicBoundsCheckR2012b(i23, 1, i22, &db_emlrtBCI, &st);
        }

        i22 = -1;
        cptr = 1;
      }

      b_xCol = xCol->size[0] * xCol->size[1];
      b_st.site = &de_emlrtRSI;
      loop_ub = div_s32_floor(&b_st, cptr - i23, i22) + 1;
      xCol->size[0] = loop_ub;
      xCol->size[1] = 1;
      emxEnsureCapacity_real_T(&st, xCol, b_xCol, &ub_emlrtRTEI);
      for (cptr = 0; cptr < loop_ub; cptr++) {
        xCol->data[cptr] = yc5->data[(i23 + i22 * cptr) - 1];
      }

      emxFree_real_T(&b_zo);
      emxFree_real_T(&zo);
      i22 = yCol->size[0] * yCol->size[1];
      yCol->size[0] = xCol->size[0];
      yCol->size[1] = xCol->size[1];
      emxEnsureCapacity_real_T(&st, yCol, i22, &l_emlrtRTEI);
      loop_ub = xCol->size[0] * xCol->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        yCol->data[i22] = xCol->data[i22];
      }
    }

    emxFree_real_T(&ytemp);
    emxFree_real_T(&yc5);
  } else {
    st.site = &l_emlrtRSI;
    b_ffMultiChan(&st, b2_data, a2_data, xCol, outBuff, yCol);
  }

  emxFree_real_T(&xCol);
  p = (x->size[0] == 1);
  if (p) {
    i22 = y->size[0] * y->size[1];
    y->size[0] = yCol->size[1];
    y->size[1] = yCol->size[0];
    emxEnsureCapacity_real_T(sp, y, i22, &q_emlrtRTEI);
    loop_ub = yCol->size[0];
    for (i22 = 0; i22 < loop_ub; i22++) {
      cptr = yCol->size[1];
      for (i23 = 0; i23 < cptr; i23++) {
        y->data[i23 + y->size[0] * i22] = yCol->data[i22 + yCol->size[0] * i23];
      }
    }
  } else {
    i22 = y->size[0] * y->size[1];
    y->size[0] = yCol->size[0];
    y->size[1] = yCol->size[1];
    emxEnsureCapacity_real_T(sp, y, i22, &p_emlrtRTEI);
    loop_ub = yCol->size[0] * yCol->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      y->data[i22] = yCol->data[i22];
    }
  }

  emxFree_real_T(&yCol);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void efiltfilt(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T
               *y)
{
  boolean_T p;
  int32_T i2;
  int32_T cptr;
  boolean_T exitg1;
  emxArray_real_T *xCol;
  int32_T loop_ub;
  real_T b2_data[7];
  static const real_T b[7] = { 0.777246521400202, -0.295149620198606,
    2.36909935327861, -0.591875563889248, 2.36909935327861, -0.295149620198606,
    0.777246521400202 };

  real_T a2_data[7];
  static const real_T a[7] = { 1.0, -0.348004594825511, 2.53911455972459,
    -0.585595129484226, 2.14946749012577, -0.248575079976725, 0.604109699507276
  };

  real_T vals[16];
  coder_internal_sparse obj;
  real_T outBuff[6];
  int32_T sortedIndices[16];
  cell_wrap_5 this_tunableEnvironment[2];
  static const int8_T b_a[16] = { 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 2, 3, 4, 5, 6
  };

  static const int8_T b_b[16] = { 1, 2, 3, 4, 5, 6, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5
  };

  int8_T cidxInt[16];
  int8_T ridxInt[16];
  int32_T c;
  cs_di* cxA;
  cs_dis * S;
  cs_din * N;
  emxArray_real_T *yCol;
  emxArray_real_T *b_xCol;
  emxArray_real_T *ytemp;
  emxArray_real_T *b_ytemp;
  real_T tol;
  emxArray_real_T *r0;
  int32_T i3;
  real_T d1;
  int32_T c_xCol;
  real_T b_b2_data[7];
  real_T b_a2_data[7];
  int32_T outBuff_size[1];
  int32_T b2_size[1];
  real_T outBuff_data[6];
  int32_T a2_size[1];
  emxArray_real_T b_outBuff_data;
  real_T c_b2_data[7];
  real_T c_a2_data[7];
  emxArray_real_T c_outBuff_data;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &h_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  p = true;
  i2 = x->size[0] * 3;
  cptr = 0;
  exitg1 = false;
  while ((!exitg1) && (cptr <= i2 - 1)) {
    if ((!muDoubleScalarIsInf(x->data[cptr])) && (!muDoubleScalarIsNaN(x->
          data[cptr]))) {
      cptr++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &cc_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedFinite",
      "MATLAB:filtfilt:expectedFinite", 3, 4, 5, "input");
  }

  b_st.site = &m_emlrtRSI;
  if (x->size[0] == 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &bc_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedNonempty",
      "MATLAB:filtfilt:expectedNonempty", 3, 4, 5, "input");
  }

  p = (x->size[0] == 1);
  emxInit_real_T(sp, &xCol, 2, &h_emlrtRTEI, true);
  if (p) {
    i2 = xCol->size[0] * xCol->size[1];
    xCol->size[0] = 3;
    xCol->size[1] = x->size[0];
    emxEnsureCapacity_real_T(sp, xCol, i2, &h_emlrtRTEI);
    loop_ub = x->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      xCol->data[xCol->size[0] * i2] = x->data[i2];
      xCol->data[1 + xCol->size[0] * i2] = x->data[i2 + x->size[0]];
      xCol->data[2 + xCol->size[0] * i2] = x->data[i2 + (x->size[0] << 1)];
    }
  } else {
    i2 = xCol->size[0] * xCol->size[1];
    xCol->size[0] = x->size[0];
    xCol->size[1] = 3;
    emxEnsureCapacity_real_T(sp, xCol, i2, &g_emlrtRTEI);
    loop_ub = x->size[0] * x->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      xCol->data[i2] = x->data[i2];
    }
  }

  st.site = &i_emlrtRSI;
  for (i2 = 0; i2 < 7; i2++) {
    b2_data[i2] = b[i2];
    a2_data[i2] = a[i2];
  }

  if (xCol->size[0] <= 18) {
    emlrtErrorWithMessageIdR2018a(&st, &ac_emlrtRTEI,
      "signal:filtfilt:InvalidDimensionsDataShortForFiltOrder",
      "signal:filtfilt:InvalidDimensionsDataShortForFiltOrder", 2, 6, 18.0);
  }

  vals[0] = 1.0 + a2_data[1];
  for (i2 = 0; i2 < 5; i2++) {
    vals[i2 + 1] = a2_data[2 + i2];
    vals[i2 + 6] = 1.0;
    vals[i2 + 11] = -1.0;
  }

  for (i2 = 0; i2 < 6; i2++) {
    outBuff[i2] = b2_data[1 + i2] - b2_data[0] * a2_data[1 + i2];
  }

  c_emxInitStruct_coder_internal_(&st, &obj, &u_emlrtRTEI, true);
  b_st.site = &n_emlrtRSI;
  c_st.site = &o_emlrtRSI;
  for (cptr = 0; cptr < 16; cptr++) {
    sortedIndices[cptr] = cptr + 1;
    this_tunableEnvironment[0].f1[cptr] = b_a[cptr];
    this_tunableEnvironment[1].f1[cptr] = b_b[cptr];
  }

  introsort(sortedIndices, this_tunableEnvironment);
  for (cptr = 0; cptr < 16; cptr++) {
    cidxInt[cptr] = b_a[sortedIndices[cptr] - 1];
    ridxInt[cptr] = b_b[sortedIndices[cptr] - 1];
  }

  i2 = obj.d->size[0];
  obj.d->size[0] = 16;
  emxEnsureCapacity_real_T(&c_st, obj.d, i2, &i_emlrtRTEI);
  for (i2 = 0; i2 < 16; i2++) {
    obj.d->data[i2] = 0.0;
  }

  i2 = obj.colidx->size[0];
  obj.colidx->size[0] = 7;
  emxEnsureCapacity_int32_T(&c_st, obj.colidx, i2, &j_emlrtRTEI);
  obj.colidx->data[0] = 1;
  i2 = obj.rowidx->size[0];
  obj.rowidx->size[0] = 16;
  emxEnsureCapacity_int32_T(&c_st, obj.rowidx, i2, &i_emlrtRTEI);
  for (i2 = 0; i2 < 16; i2++) {
    obj.rowidx->data[i2] = 0;
  }

  cptr = 0;
  for (c = 0; c < 6; c++) {
    while ((cptr + 1 <= 16) && (cidxInt[cptr] == 1 + c)) {
      obj.rowidx->data[cptr] = ridxInt[cptr];
      cptr++;
    }

    obj.colidx->data[1 + c] = cptr + 1;
  }

  for (cptr = 0; cptr < 16; cptr++) {
    obj.d->data[cptr] = vals[sortedIndices[cptr] - 1];
  }

  d_st.site = &p_emlrtRSI;
  sparse_fillIn(&d_st, &obj);
  b_st.site = &n_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  d_st.site = &t_emlrtRSI;
  cxA = makeCXSparseMatrix(obj.colidx->data[obj.colidx->size[0] - 1] - 1, 6, 6,
    &obj.colidx->data[0], &obj.rowidx->data[0], &obj.d->data[0]);
  S = cs_di_sqr(2, cxA, 0);
  N = cs_di_lu(cxA, S, 1);
  cs_di_spfree(cxA);
  if (N == NULL) {
    e_st.site = &v_emlrtRSI;
    warning(&e_st);
    cs_di_sfree(S);
    cs_di_nfree(N);
    cxA = makeCXSparseMatrix(obj.colidx->data[obj.colidx->size[0] - 1] - 1, 6, 6,
      &obj.colidx->data[0], &obj.rowidx->data[0], &obj.d->data[0]);
    S = cs_di_sqr(2, cxA, 1);
    N = cs_di_qr(cxA, S);
    cs_di_spfree(cxA);
    qr_rank_di(N, &tol);
    solve_from_qr_di(N, S, (double *)&outBuff[0], 6, 6);
    cs_di_sfree(S);
    cs_di_nfree(N);
  } else {
    solve_from_lu_di(N, S, (double *)&outBuff[0], 6);
    cs_di_sfree(S);
    cs_di_nfree(N);
  }

  c_emxFreeStruct_coder_internal_(&obj);
  emxInit_real_T(sp, &yCol, 2, &m_emlrtRTEI, true);
  if (xCol->size[1] == 1) {
    if (xCol->size[0] < 10000) {
      st.site = &j_emlrtRSI;
      emxInit_real_T(&st, &ytemp, 1, &o_emlrtRTEI, true);
      emxInit_real_T(&st, &b_ytemp, 1, &r_emlrtRTEI, true);
      i2 = xCol->size[0];
      if (1 > i2) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i2, &j_emlrtBCI, &st);
      }

      tol = 2.0 * xCol->data[0];
      cptr = xCol->size[0];
      i2 = xCol->size[0];
      i3 = xCol->size[0];
      if ((i3 < 1) || (i3 > i2)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &k_emlrtBCI, &st);
      }

      d1 = 2.0 * xCol->data[i3 - 1];
      c = xCol->size[0] - 1;
      c_xCol = xCol->size[0];
      loop_ub = xCol->size[0];
      i2 = ytemp->size[0];
      ytemp->size[0] = loop_ub + 36;
      emxEnsureCapacity_real_T(&st, ytemp, i2, &o_emlrtRTEI);
      for (i2 = 0; i2 < 18; i2++) {
        i3 = 19 - i2;
        if (i3 > cptr) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, cptr, &l_emlrtBCI, &st);
        }

        ytemp->data[i2] = tol - xCol->data[i3 - 1];
      }

      for (i2 = 0; i2 < loop_ub; i2++) {
        ytemp->data[i2 + 18] = xCol->data[i2];
      }

      for (i2 = 0; i2 < 18; i2++) {
        i3 = c - i2;
        if ((i3 < 1) || (i3 > c_xCol)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, c_xCol, &m_emlrtBCI, &st);
        }

        ytemp->data[(i2 + loop_ub) + 18] = d1 - xCol->data[i3 - 1];
      }

      loop_ub = ytemp->size[0] - 1;
      tol = ytemp->data[0];
      for (i2 = 0; i2 < 7; i2++) {
        b_b2_data[i2] = b2_data[i2];
        b_a2_data[i2] = a2_data[i2];
      }

      i2 = b_ytemp->size[0];
      b_ytemp->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(&st, b_ytemp, i2, &r_emlrtRTEI);
      for (i2 = 0; i2 <= loop_ub; i2++) {
        b_ytemp->data[i2] = ytemp->data[i2];
      }

      outBuff_size[0] = 6;
      for (i2 = 0; i2 < 6; i2++) {
        outBuff_data[i2] = outBuff[i2] * tol;
      }

      b2_size[0] = 7;
      a2_size[0] = 7;
      for (i2 = 0; i2 < 7; i2++) {
        c_b2_data[i2] = b_b2_data[i2];
        c_a2_data[i2] = b_a2_data[i2];
      }

      b_outBuff_data.data = &outBuff_data[0];
      b_outBuff_data.size = &outBuff_size[0];
      b_outBuff_data.allocatedSize = 6;
      b_outBuff_data.numDimensions = 1;
      b_outBuff_data.canFreeData = false;
      b_st.site = &bb_emlrtRSI;
      filter(&b_st, c_b2_data, b2_size, c_a2_data, a2_size, b_ytemp,
             &b_outBuff_data, ytemp);
      i2 = ytemp->size[0];
      i3 = ytemp->size[0];
      if ((i3 < 1) || (i3 > i2)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &n_emlrtBCI, &st);
      }

      i2 = ytemp->size[0] - 1;
      i3 = b_ytemp->size[0];
      b_st.site = &j_emlrtRSI;
      loop_ub = div_s32_floor(&b_st, -i2, -1);
      b_ytemp->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(&st, b_ytemp, i3, &r_emlrtRTEI);
      for (i3 = 0; i3 <= loop_ub; i3++) {
        b_ytemp->data[i3] = ytemp->data[i2 - i3];
      }

      i2 = ytemp->size[0];
      ytemp->size[0] = b_ytemp->size[0];
      emxEnsureCapacity_real_T(&st, ytemp, i2, &r_emlrtRTEI);
      loop_ub = b_ytemp->size[0];
      for (i2 = 0; i2 < loop_ub; i2++) {
        ytemp->data[i2] = b_ytemp->data[i2];
      }

      loop_ub = ytemp->size[0] - 1;
      tol = ytemp->data[0];
      for (i2 = 0; i2 < 7; i2++) {
        b_b2_data[i2] = b2_data[i2];
        b_a2_data[i2] = a2_data[i2];
      }

      i2 = b_ytemp->size[0];
      b_ytemp->size[0] = loop_ub + 1;
      emxEnsureCapacity_real_T(&st, b_ytemp, i2, &r_emlrtRTEI);
      for (i2 = 0; i2 <= loop_ub; i2++) {
        b_ytemp->data[i2] = ytemp->data[i2];
      }

      outBuff_size[0] = 6;
      for (i2 = 0; i2 < 6; i2++) {
        outBuff_data[i2] = outBuff[i2] * tol;
      }

      b2_size[0] = 7;
      a2_size[0] = 7;
      for (i2 = 0; i2 < 7; i2++) {
        b2_data[i2] = b_b2_data[i2];
        a2_data[i2] = b_a2_data[i2];
      }

      c_outBuff_data.data = &outBuff_data[0];
      c_outBuff_data.size = &outBuff_size[0];
      c_outBuff_data.allocatedSize = 6;
      c_outBuff_data.numDimensions = 1;
      c_outBuff_data.canFreeData = false;
      b_st.site = &ab_emlrtRSI;
      filter(&b_st, b2_data, b2_size, a2_data, a2_size, b_ytemp, &c_outBuff_data,
             ytemp);
      if (19 > ytemp->size[0] - 18) {
        i3 = 1;
        i2 = 1;
        cptr = 0;
      } else {
        i2 = ytemp->size[0];
        i3 = ytemp->size[0] - 18;
        if ((i3 < 1) || (i3 > i2)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &o_emlrtBCI, &st);
        }

        i2 = -1;
        cptr = 19;
      }

      c = xCol->size[0] * xCol->size[1];
      b_st.site = &fe_emlrtRSI;
      loop_ub = div_s32_floor(&b_st, cptr - i3, i2) + 1;
      xCol->size[0] = loop_ub;
      xCol->size[1] = 1;
      emxEnsureCapacity_real_T(&st, xCol, c, &t_emlrtRTEI);
      for (cptr = 0; cptr < loop_ub; cptr++) {
        xCol->data[cptr] = ytemp->data[(i3 + i2 * cptr) - 1];
      }

      emxFree_real_T(&b_ytemp);
      emxFree_real_T(&ytemp);
      i2 = yCol->size[0] * yCol->size[1];
      yCol->size[0] = xCol->size[0];
      yCol->size[1] = xCol->size[1];
      emxEnsureCapacity_real_T(sp, yCol, i2, &m_emlrtRTEI);
      loop_ub = xCol->size[0] * xCol->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        yCol->data[i2] = xCol->data[i2];
      }
    } else {
      i2 = yCol->size[0] * yCol->size[1];
      yCol->size[0] = xCol->size[0];
      yCol->size[1] = xCol->size[1];
      emxEnsureCapacity_real_T(sp, yCol, i2, &l_emlrtRTEI);
      loop_ub = xCol->size[0] * xCol->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        yCol->data[i2] = xCol->data[i2];
      }

      st.site = &k_emlrtRSI;
      ffOneChan(&st, b2_data, a2_data, yCol, outBuff);
    }
  } else {
    emxInit_real_T(sp, &b_xCol, 2, &k_emlrtRTEI, true);
    i2 = b_xCol->size[0] * b_xCol->size[1];
    b_xCol->size[0] = xCol->size[0];
    b_xCol->size[1] = xCol->size[1];
    emxEnsureCapacity_real_T(sp, b_xCol, i2, &k_emlrtRTEI);
    loop_ub = xCol->size[0] * xCol->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      b_xCol->data[i2] = xCol->data[i2];
    }

    emxInit_real_T(sp, &r0, 2, &v_emlrtRTEI, true);
    st.site = &l_emlrtRSI;
    ffMultiChan(&st, b2_data, a2_data, b_xCol, outBuff, r0);
    i2 = yCol->size[0] * yCol->size[1];
    yCol->size[0] = r0->size[0];
    yCol->size[1] = r0->size[1];
    emxEnsureCapacity_real_T(sp, yCol, i2, &n_emlrtRTEI);
    loop_ub = r0->size[0] * r0->size[1];
    emxFree_real_T(&b_xCol);
    for (i2 = 0; i2 < loop_ub; i2++) {
      yCol->data[i2] = r0->data[i2];
    }

    emxFree_real_T(&r0);
  }

  emxFree_real_T(&xCol);
  p = (x->size[0] == 1);
  if (p) {
    i2 = y->size[0] * y->size[1];
    y->size[0] = yCol->size[1];
    y->size[1] = yCol->size[0];
    emxEnsureCapacity_real_T(sp, y, i2, &q_emlrtRTEI);
    loop_ub = yCol->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      cptr = yCol->size[1];
      for (i3 = 0; i3 < cptr; i3++) {
        y->data[i3 + y->size[0] * i2] = yCol->data[i2 + yCol->size[0] * i3];
      }
    }
  } else {
    i2 = y->size[0] * y->size[1];
    y->size[0] = yCol->size[0];
    y->size[1] = yCol->size[1];
    emxEnsureCapacity_real_T(sp, y, i2, &p_emlrtRTEI);
    loop_ub = yCol->size[0] * yCol->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      y->data[i2] = yCol->data[i2];
    }
  }

  emxFree_real_T(&yCol);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (filtfilt.cpp) */
