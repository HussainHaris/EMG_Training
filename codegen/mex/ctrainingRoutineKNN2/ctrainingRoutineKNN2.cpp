/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ctrainingRoutineKNN2.cpp
 *
 * Code generation for function 'ctrainingRoutineKNN2'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "mean.h"
#include "ctrainingRoutineKNN2_emxutil.h"
#include "sort1.h"
#include "sqrt.h"
#include "power.h"
#include "filtfilt.h"
#include "ctrainingRoutineKNN2_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 25,    /* lineNo */
  "ctrainingRoutineKNN2",              /* fcnName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 26,  /* lineNo */
  "ctrainingRoutineKNN2",              /* fcnName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 35,  /* lineNo */
  "ctrainingRoutineKNN2",              /* fcnName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 36,  /* lineNo */
  "ctrainingRoutineKNN2",              /* fcnName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 37,  /* lineNo */
  "ctrainingRoutineKNN2",              /* fcnName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 39,  /* lineNo */
  "ctrainingRoutineKNN2",              /* fcnName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 99,  /* lineNo */
  "filtfilt",                          /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/filtfilt.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 20, /* lineNo */
  "sig_rms_pad_fixed",                 /* fcnName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/sig_rms_pad_fixed.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 24, /* lineNo */
  "trapz",                             /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/trapz.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 90, /* lineNo */
  "trapwork",                          /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/trapz.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 126,/* lineNo */
  "trapzFlat",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/trapz.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 31, /* lineNo */
  "rms",                               /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/signal/signal/rms.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 60, /* lineNo */
  "mode",                              /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/mode.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 87, /* lineNo */
  "arraymode",                         /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/mode.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 142,/* lineNo */
  "vectormode",                        /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/mode.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 32, /* lineNo */
  "sort",                              /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/sort.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 27,    /* lineNo */
  1,                                   /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 28,  /* lineNo */
  1,                                   /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 28,  /* lineNo */
  16,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 28,  /* lineNo */
  66,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 28,  /* lineNo */
  87,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 28,  /* lineNo */
  125,                                 /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 29,  /* lineNo */
  1,                                   /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 29,  /* lineNo */
  16,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 29,  /* lineNo */
  65,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 29,  /* lineNo */
  86,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 29,  /* lineNo */
  124,                                 /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 30,  /* lineNo */
  1,                                   /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 30,  /* lineNo */
  16,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 30,  /* lineNo */
  65,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 30,  /* lineNo */
  86,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 30,  /* lineNo */
  124,                                 /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 25,  /* lineNo */
  26,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 28,/* lineNo */
  71,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 29,/* lineNo */
  70,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 30,/* lineNo */
  70,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 25,/* lineNo */
  1,                                   /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 26,/* lineNo */
  28,                                  /* colNo */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  52,                                  /* colNo */
  "dW",                                /* aName */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  54,                                  /* colNo */
  "FILT_FULL",                         /* aName */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  82,                                  /* colNo */
  "FILT_FULL",                         /* aName */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  82,                                  /* colNo */
  "FILT_FULL",                         /* aName */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  83,                                  /* colNo */
  "FILT_FULL",                         /* aName */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  30,                                  /* colNo */
  "FILT_FULL",                         /* aName */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  250,                                 /* iLast */
  20,                                  /* lineNo */
  2,                                   /* colNo */
  "y",                                 /* aName */
  "sig_rms_pad_fixed",                 /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/sig_rms_pad_fixed.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  28,                                  /* colNo */
  "dW",                                /* aName */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  31,                                  /* colNo */
  "dW",                                /* aName */
  "ctrainingRoutineKNN2",              /* fName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo xd_emlrtRSI = { 27, /* lineNo */
  "ctrainingRoutineKNN2",              /* fcnName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 30, /* lineNo */
  "ctrainingRoutineKNN2",              /* fcnName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 29, /* lineNo */
  "ctrainingRoutineKNN2",              /* fcnName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 28, /* lineNo */
  "ctrainingRoutineKNN2",              /* fcnName */
  "/Users/haris/Desktop/Haris2019/EMG/EMG_training_KNN_resources/ctrainingRoutineKNN2.m"/* pathName */
};

/* Function Declarations */
static const mxArray *emlrt_marshallOut(const real_T u);
static void figure(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static void plot(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static void subplot(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, emlrtMCInfo *location);
static void title(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static void xlabel(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static void ylabel(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m2);
  return y;
}

static void figure(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "figure", true, location);
}

static void plot(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "plot", true, location);
}

static void subplot(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  emlrtCallMATLABR2012b(sp, 0, NULL, 3, pArrays, "subplot", true, location);
}

static void title(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "title", true, location);
}

static void xlabel(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "xlabel", true, location);
}

static void ylabel(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "ylabel", true, location);
}

void ctrainingRoutineKNN2(const emlrtStack *sp, const emxArray_real_T *dW,
  real_T F[9920])
{
  real_T dWF[750];
  real_T sigRMS[750];
  int32_T ix;
  int32_T i0;
  emxArray_real_T *x;
  emxArray_real_T *b_dW;
  emxArray_real_T *FILT_FULL;
  int32_T i1;
  emxArray_real_T *u;
  const mxArray *y;
  const mxArray *m0;
  const mxArray *b_y;
  static const int32_T iv0[2] = { 1, 39 };

  static const char_T b_u[39] = { 'F', 'o', 'r', 'e', 'a', 'r', 'm', ' ', 'E',
    'M', 'G', ' ', 'F', 'i', 'l', 't', 'e', 'r', 'e', 'd', ' ', 'S', 'i', 'g',
    'n', 'a', 'l', ' ', '-', ' ', 'C', 'h', 'a', 'n', 'n', 'e', 'l', ' ', '1' };

  real_T *pData;
  int32_T i;
  int32_T exitg1;
  static const int32_T iv1[2] = { 1, 26 };

  static const char_T c_u[26] = { 'S', 'a', 'm', 'p', 'l', 'e', 's', ',', ' ',
    '2', '5', '0', 'H', 'z', ' ', 'S', 'a', 'm', 'p', 'l', 'e', ' ', 'R', 'a',
    't', 'e' };

  static const int32_T iv2[2] = { 1, 9 };

  static const char_T d_u[9] = { 'V', 'o', 'l', 't', 'a', 'g', 'e', ' ', 'V' };

  const mxArray *c_y;
  static const int32_T iv3[2] = { 1, 39 };

  static const char_T e_u[39] = { 'F', 'o', 'r', 'e', 'a', 'r', 'm', ' ', 'E',
    'M', 'G', ' ', 'F', 'i', 'l', 't', 'e', 'r', 'e', 'd', ' ', 'S', 'i', 'g',
    'n', 'a', 'l', ' ', '-', ' ', 'C', 'h', 'a', 'n', 'n', 'e', 'l', ' ', '2' };

  static const int32_T iv4[2] = { 1, 26 };

  static const int32_T iv5[2] = { 1, 9 };

  static const int32_T iv6[2] = { 1, 39 };

  static const char_T f_u[39] = { 'F', 'o', 'r', 'e', 'a', 'r', 'm', ' ', 'E',
    'M', 'G', ' ', 'F', 'i', 'l', 't', 'e', 'r', 'e', 'd', ' ', 'S', 'i', 'g',
    'n', 'a', 'l', ' ', '-', ' ', 'C', 'h', 'a', 'n', 'n', 'e', 'l', ' ', '3' };

  static const int32_T iv7[2] = { 1, 26 };

  static const int32_T iv8[2] = { 1, 9 };

  int32_T j;
  real_T RMS[9920];
  real_T CLASS[992];
  int32_T b_index;
  real_T b_RMS[2976];
  real_T sigRMSIntegral[2976];
  int32_T ia;
  real_T MAX[2976];
  real_T b_dWF[259];
  real_T d_y[250];
  real_T S[259];
  static const uint8_T uv0[250] = { 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U, 11U,
    12U, 13U, 14U, 15U, 16U, 17U, 18U, 19U, 20U, 21U, 22U, 23U, 24U, 25U, 26U,
    27U, 28U, 29U, 30U, 31U, 32U, 33U, 34U, 35U, 36U, 37U, 38U, 39U, 40U, 41U,
    42U, 43U, 44U, 45U, 46U, 47U, 48U, 49U, 50U, 51U, 52U, 53U, 54U, 55U, 56U,
    57U, 58U, 59U, 60U, 61U, 62U, 63U, 64U, 65U, 66U, 67U, 68U, 69U, 70U, 71U,
    72U, 73U, 74U, 75U, 76U, 77U, 78U, 79U, 80U, 81U, 82U, 83U, 84U, 85U, 86U,
    87U, 88U, 89U, 90U, 91U, 92U, 93U, 94U, 95U, 96U, 97U, 98U, 99U, 100U, 101U,
    102U, 103U, 104U, 105U, 106U, 107U, 108U, 109U, 110U, 111U, 112U, 113U, 114U,
    115U, 116U, 117U, 118U, 119U, 120U, 121U, 122U, 123U, 124U, 125U, 126U, 127U,
    128U, 129U, 130U, 131U, 132U, 133U, 134U, 135U, 136U, 137U, 138U, 139U, 140U,
    141U, 142U, 143U, 144U, 145U, 146U, 147U, 148U, 149U, 150U, 151U, 152U, 153U,
    154U, 155U, 156U, 157U, 158U, 159U, 160U, 161U, 162U, 163U, 164U, 165U, 166U,
    167U, 168U, 169U, 170U, 171U, 172U, 173U, 174U, 175U, 176U, 177U, 178U, 179U,
    180U, 181U, 182U, 183U, 184U, 185U, 186U, 187U, 188U, 189U, 190U, 191U, 192U,
    193U, 194U, 195U, 196U, 197U, 198U, 199U, 200U, 201U, 202U, 203U, 204U, 205U,
    206U, 207U, 208U, 209U, 210U, 211U, 212U, 213U, 214U, 215U, 216U, 217U, 218U,
    219U, 220U, 221U, 222U, 223U, 224U, 225U, 226U, 227U, 228U, 229U, 230U, 231U,
    232U, 233U, 234U, 235U, 236U, 237U, 238U, 239U, 240U, 241U, 242U, 243U, 244U,
    245U, 246U, 247U, 248U, 249U, 250U };

  int32_T S_size_tmp;
  real_T mtmp;
  int32_T S_size[1];
  static const real_T c[250] = { 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.5 };

  real_T d0;
  boolean_T exitg2;
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
  covrtLogFcn(&emlrtCoverageInstance, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 0);

  /*  */
  /*  Inputs: */
  /*  dW = data array : [4 x 30000] */
  /*  Outputs */
  /*  P = [11 x 1] Contains double size parameters */
  /*  .Index..,1....2....3....4....5....6....7..% */
  /*  2Hz High Pass: */
  /* window separation */
  /* Other var decs: */
  memset(&dWF[0], 0, 750U * sizeof(real_T));
  memset(&sigRMS[0], 0, 750U * sizeof(real_T));

  /*  average out data from "0" class  */
  /*  FILT ENTIRE SIG?: */
  st.site = &emlrtRSI;
  ix = dW->size[1];
  if (1 > ix) {
    emlrtDynamicBoundsCheckR2012b(1, 1, ix, &i_emlrtBCI, &st);
  }

  if (2 > ix) {
    emlrtDynamicBoundsCheckR2012b(2, 1, ix, &i_emlrtBCI, &st);
  }

  if (3 > ix) {
    emlrtDynamicBoundsCheckR2012b(3, 1, ix, &i_emlrtBCI, &st);
  }

  i0 = dW->size[0];
  emxInit_real_T(&st, &x, 2, &f_emlrtRTEI, true);
  if (i0 == 0) {
    x->size[0] = 0;
    x->size[1] = 0;
  } else {
    emxInit_real_T(&st, &b_dW, 2, &emlrtRTEI, true);
    ix = dW->size[0];
    i0 = b_dW->size[0] * b_dW->size[1];
    b_dW->size[0] = ix;
    b_dW->size[1] = 3;
    emxEnsureCapacity_real_T(&st, b_dW, i0, &emlrtRTEI);
    for (i0 = 0; i0 < 3; i0++) {
      for (i1 = 0; i1 < ix; i1++) {
        b_dW->data[i1 + b_dW->size[0] * i0] = dW->data[i1 + dW->size[0] * i0];
      }
    }

    b_st.site = &g_emlrtRSI;
    efiltfilt(&b_st, b_dW, x);
    emxFree_real_T(&b_dW);
  }

  st.site = &b_emlrtRSI;
  emxInit_real_T(&st, &FILT_FULL, 2, &e_emlrtRTEI, true);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    FILT_FULL->size[0] = 0;
    FILT_FULL->size[1] = 0;
  } else {
    b_st.site = &g_emlrtRSI;
    b_efiltfilt(&b_st, x, FILT_FULL);
  }

  emxFree_real_T(&x);
  emxInit_real_T(&st, &u, 1, &b_emlrtRTEI, true);
  st.site = &xd_emlrtRSI;
  figure(&st, emlrt_marshallOut(10.0), &emlrtMCI);
  y = NULL;
  m0 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m0);
  st.site = &be_emlrtRSI;
  subplot(&st, emlrt_marshallOut(3.0), y, b_y, &b_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv0);
  emlrtInitCharArrayR2013a(sp, 39, m0, (char_T *)&b_u[0]);
  emlrtAssign(&y, m0);
  st.site = &be_emlrtRSI;
  title(&st, y, &c_emlrtMCI);
  i0 = FILT_FULL->size[1];
  if (1 > i0) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &e_emlrtBCI, sp);
  }

  ix = FILT_FULL->size[0];
  i0 = u->size[0];
  u->size[0] = ix;
  emxEnsureCapacity_real_T(sp, u, i0, &b_emlrtRTEI);
  for (i0 = 0; i0 < ix; i0++) {
    u->data[i0] = FILT_FULL->data[i0];
  }

  y = NULL;
  m0 = emlrtCreateNumericArray(1, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m0);
  i0 = 0;
  i = 0;
  do {
    exitg1 = 0;
    i1 = FILT_FULL->size[0];
    if (i < i1) {
      pData[i0] = FILT_FULL->data[i];
      i0++;
      i++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  emlrtAssign(&y, m0);
  st.site = &be_emlrtRSI;
  plot(&st, y, &d_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 26, m0, (char_T *)&c_u[0]);
  emlrtAssign(&y, m0);
  st.site = &be_emlrtRSI;
  xlabel(&st, y, &e_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 9, m0, (char_T *)&d_u[0]);
  emlrtAssign(&y, m0);
  st.site = &be_emlrtRSI;
  ylabel(&st, y, &f_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateDoubleScalar(3.0);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m0);
  c_y = NULL;
  m0 = emlrtCreateDoubleScalar(2.0);
  emlrtAssign(&c_y, m0);
  st.site = &ae_emlrtRSI;
  subplot(&st, y, b_y, c_y, &g_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 39, m0, (char_T *)&e_u[0]);
  emlrtAssign(&y, m0);
  st.site = &ae_emlrtRSI;
  title(&st, y, &h_emlrtMCI);
  i0 = FILT_FULL->size[1];
  if (2 > i0) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i0, &d_emlrtBCI, sp);
  }

  ix = FILT_FULL->size[0];
  i0 = u->size[0];
  u->size[0] = ix;
  emxEnsureCapacity_real_T(sp, u, i0, &c_emlrtRTEI);
  for (i0 = 0; i0 < ix; i0++) {
    u->data[i0] = FILT_FULL->data[i0 + FILT_FULL->size[0]];
  }

  y = NULL;
  m0 = emlrtCreateNumericArray(1, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m0);
  i0 = 0;
  i = 0;
  do {
    exitg1 = 0;
    i1 = FILT_FULL->size[0];
    if (i < i1) {
      pData[i0] = FILT_FULL->data[i + FILT_FULL->size[0]];
      i0++;
      i++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  emlrtAssign(&y, m0);
  st.site = &ae_emlrtRSI;
  plot(&st, y, &i_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv4);
  emlrtInitCharArrayR2013a(sp, 26, m0, (char_T *)&c_u[0]);
  emlrtAssign(&y, m0);
  st.site = &ae_emlrtRSI;
  xlabel(&st, y, &j_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv5);
  emlrtInitCharArrayR2013a(sp, 9, m0, (char_T *)&d_u[0]);
  emlrtAssign(&y, m0);
  st.site = &ae_emlrtRSI;
  ylabel(&st, y, &k_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateDoubleScalar(3.0);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m0);
  c_y = NULL;
  m0 = emlrtCreateDoubleScalar(3.0);
  emlrtAssign(&c_y, m0);
  st.site = &yd_emlrtRSI;
  subplot(&st, y, b_y, c_y, &l_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv6);
  emlrtInitCharArrayR2013a(sp, 39, m0, (char_T *)&f_u[0]);
  emlrtAssign(&y, m0);
  st.site = &yd_emlrtRSI;
  title(&st, y, &m_emlrtMCI);
  i0 = FILT_FULL->size[1];
  if (3 > i0) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i0, &c_emlrtBCI, sp);
  }

  ix = FILT_FULL->size[0];
  i0 = u->size[0];
  u->size[0] = ix;
  emxEnsureCapacity_real_T(sp, u, i0, &d_emlrtRTEI);
  for (i0 = 0; i0 < ix; i0++) {
    u->data[i0] = FILT_FULL->data[i0 + (FILT_FULL->size[0] << 1)];
  }

  y = NULL;
  m0 = emlrtCreateNumericArray(1, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m0);
  i0 = 0;
  i = 0;
  emxFree_real_T(&u);
  do {
    exitg1 = 0;
    i1 = FILT_FULL->size[0];
    if (i < i1) {
      pData[i0] = FILT_FULL->data[i + (FILT_FULL->size[0] << 1)];
      i0++;
      i++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  emlrtAssign(&y, m0);
  st.site = &yd_emlrtRSI;
  plot(&st, y, &n_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv7);
  emlrtInitCharArrayR2013a(sp, 26, m0, (char_T *)&c_u[0]);
  emlrtAssign(&y, m0);
  st.site = &yd_emlrtRSI;
  xlabel(&st, y, &o_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv8);
  emlrtInitCharArrayR2013a(sp, 9, m0, (char_T *)&d_u[0]);
  emlrtAssign(&y, m0);
  st.site = &yd_emlrtRSI;
  ylabel(&st, y, &p_emlrtMCI);
  for (i = 0; i < 3; i++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 0, 1);

    /* select chunk of 250: */
    for (j = 0; j < 992; j++) {
      covrtLogFor(&emlrtCoverageInstance, 0, 0, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0, 1);
      i0 = 30 * j;
      b_index = FILT_FULL->size[0];
      i1 = FILT_FULL->size[1];
      ia = 1 + i;
      if (ia > i1) {
        emlrtDynamicBoundsCheckR2012b(ia, 1, i1, &b_emlrtBCI, sp);
      }

      for (i1 = 0; i1 < 250; i1++) {
        ix = (i1 + i0) + 1;
        if (ix > b_index) {
          emlrtDynamicBoundsCheckR2012b(ix, 1, b_index, &f_emlrtBCI, sp);
        }

        dWF[i1 + 250 * i] = FILT_FULL->data[(ix + FILT_FULL->size[0] * (ia - 1))
          - 1];
      }

      st.site = &c_emlrtRSI;
      covrtLogFcn(&emlrtCoverageInstance, 1, 0);
      covrtLogBasicBlock(&emlrtCoverageInstance, 1, 0);

      /*  CALCULATE RMS */
      /*  Zeropad signal */
      covrtLogIf(&emlrtCoverageInstance, 1, 0, 0, true);
      covrtLogBasicBlock(&emlrtCoverageInstance, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 1, 2);

      /*  Square the samples */
      for (i0 = 0; i0 < 250; i0++) {
        d_y[i0] = 0.0;
        b_dWF[i0] = dWF[i0 + 250 * i];
      }

      memset(&b_dWF[250], 0, 9U * sizeof(real_T));
      power(b_dWF, S);
      b_index = 0;
      for (ix = 0; ix < 250; ix++) {
        covrtLogFor(&emlrtCoverageInstance, 1, 0, 0, 1);
        covrtLogBasicBlock(&emlrtCoverageInstance, 1, 3);
        b_index++;

        /*  Average and take the square root of each window */
        if (uv0[ix] > uv0[ix] + 9) {
          i0 = 0;
          i1 = -1;
        } else {
          i0 = ix;
          i1 = ix + 9;
        }

        S_size_tmp = i1 - i0;
        S_size[0] = S_size_tmp + 1;
        for (i1 = 0; i1 <= S_size_tmp; i1++) {
          b_dWF[i1] = S[i0 + i1];
        }

        if (b_index > 250) {
          emlrtDynamicBoundsCheckR2012b(251, 1, 250, &g_emlrtBCI, &st);
        }

        b_st.site = &ad_emlrtRSI;
        d_y[b_index - 1] = mean(b_dWF, S_size);
        b_st.site = &ad_emlrtRSI;
        b_sqrt(&b_st, &d_y[b_index - 1]);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      covrtLogFor(&emlrtCoverageInstance, 1, 0, 0, 0);
      for (i0 = 0; i0 < 250; i0++) {
        sigRMS[i + 3 * i0] = d_y[i0];
      }

      st.site = &d_emlrtRSI;
      b_st.site = &bd_emlrtRSI;
      c_st.site = &cd_emlrtRSI;
      d_st.site = &dd_emlrtRSI;
      mtmp = 0.0;
      ix = 0;
      for (b_index = 0; b_index < 250; b_index++) {
        S_size_tmp = 1 + b_index;
        for (ia = S_size_tmp; ia <= S_size_tmp; ia++) {
          mtmp += sigRMS[i + 3 * (ia - 1)] * c[ix];
        }

        ix++;
      }

      b_index = i + 3 * j;
      sigRMSIntegral[b_index] = mtmp;
      st.site = &e_emlrtRSI;
      for (i0 = 0; i0 < 250; i0++) {
        d0 = dWF[i0 + 250 * i];
        d_y[i0] = d0 * d0;
      }

      mtmp = d_y[0];
      for (ia = 0; ia < 249; ia++) {
        mtmp += d_y[ia + 1];
      }

      mtmp /= 250.0;
      b_st.site = &gd_emlrtRSI;
      if (mtmp < 0.0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &yb_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 4, "sqrt");
      }

      b_RMS[b_index] = muDoubleScalarSqrt(mtmp);
      d0 = dWF[250 * i];
      if (!muDoubleScalarIsNaN(d0)) {
        ix = 1;
      } else {
        ix = 0;
        ia = 2;
        exitg2 = false;
        while ((!exitg2) && (ia < 251)) {
          if (!muDoubleScalarIsNaN(dWF[(ia + 250 * i) - 1])) {
            ix = ia;
            exitg2 = true;
          } else {
            ia++;
          }
        }
      }

      if (ix == 0) {
        MAX[b_index] = d0;
      } else {
        mtmp = dWF[(ix + 250 * i) - 1];
        i0 = ix + 1;
        for (ia = i0; ia < 251; ia++) {
          d0 = dWF[(ia + 250 * i) - 1];
          if (mtmp < d0) {
            mtmp = d0;
          }
        }

        MAX[b_index] = mtmp;
      }

      i0 = dW->size[1];
      if (4 > i0) {
        emlrtDynamicBoundsCheckR2012b(4, 1, i0, &emlrtBCI, sp);
      }

      st.site = &f_emlrtRSI;
      i0 = 30 * j;
      ix = dW->size[0];
      for (i1 = 0; i1 < 250; i1++) {
        ia = (i1 + i0) + 1;
        if (ia > ix) {
          emlrtDynamicBoundsCheckR2012b(ia, 1, ix, &h_emlrtBCI, &st);
        }

        d_y[i1] = dW->data[(ia + dW->size[0] * 3) - 1];
      }

      b_st.site = &hd_emlrtRSI;
      c_st.site = &id_emlrtRSI;
      d_st.site = &jd_emlrtRSI;
      e_st.site = &kd_emlrtRSI;
      sort(&e_st, d_y);
      CLASS[j] = d_y[0];
      ix = 1;
      mtmp = d_y[0];
      b_index = 1;
      for (ia = 0; ia < 249; ia++) {
        d0 = d_y[ia + 1];
        if (d0 == mtmp) {
          b_index++;
        } else {
          if (b_index > ix) {
            CLASS[j] = mtmp;
            ix = b_index;
          }

          mtmp = d0;
          b_index = 1;
        }
      }

      if (b_index > ix) {
        CLASS[j] = mtmp;
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 0, 0, 1, 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&FILT_FULL);
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 2);
  for (i0 = 0; i0 < 3; i0++) {
    for (i1 = 0; i1 < 992; i1++) {
      ix = i0 + 3 * i1;
      RMS[i1 + 992 * i0] = b_RMS[ix];
      RMS[i1 + 992 * (i0 + 3)] = sigRMSIntegral[ix];
      RMS[i1 + 992 * (i0 + 6)] = MAX[ix];
    }
  }

  memcpy(&RMS[8928], &CLASS[0], 992U * sizeof(real_T));
  memcpy(&F[0], &RMS[0], 9920U * sizeof(real_T));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (ctrainingRoutineKNN2.cpp) */
