/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * filter.cpp
 *
 * Code generation for function 'filter'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "filter.h"
#include "eml_int_forloop_overflow_check.h"
#include "ctrainingRoutineKNN2_emxutil.h"
#include "xaxpy.h"
#include "isfinite.h"
#include "ctrainingRoutineKNN2_data.h"

/* Variable Definitions */
static emlrtRSInfo cb_emlrtRSI = { 342,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 325,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 316,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 239,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 236,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 232,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 229,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 149,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 425,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 421,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 399,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 395,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 410,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 386,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 375,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 365,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 246,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 226,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 173,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 172,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 177,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 176,/* lineNo */
  "filter",                            /* fcnName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pathName */
};

static emlrtRTEInfo w_emlrtRTEI = { 1, /* lineNo */
  19,                                  /* colNo */
  "filter",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 166,/* lineNo */
  1,                                   /* colNo */
  "filter",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 399,/* lineNo */
  26,                                  /* colNo */
  "filter",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 425,/* lineNo */
  34,                                  /* colNo */
  "filter",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 399,/* lineNo */
  21,                                  /* colNo */
  "filter",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 425,/* lineNo */
  29,                                  /* colNo */
  "filter",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 173,/* lineNo */
  47,                                  /* colNo */
  "filter",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 177,/* lineNo */
  26,                                  /* colNo */
  "filter",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 34,/* lineNo */
  19,                                  /* colNo */
  "filter",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 126,/* lineNo */
  19,                                  /* colNo */
  "filter",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 144,/* lineNo */
  5,                                   /* colNo */
  "filter",                            /* fName */
  "/Applications/MATLAB_R2019a.app/toolbox/eml/lib/matlab/datafun/filter.m"/* pName */
};

/* Function Declarations */
static boolean_T b_compatible_zi_size(const emxArray_real_T *x, const
  emxArray_real_T *zi, int32_T ndbm1);
static boolean_T compatible_zi_size(const emxArray_real_T *x, const
  emxArray_real_T *zi);
static void e_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[],
                     const real_T x[18], const real_T zi_data[], real_T y[18],
                     real_T zf_data[], int32_T zf_size[1]);
static void g_filter(const emlrtStack *sp, real_T b_data[], int32_T b_size[1],
                     real_T a_data[], int32_T a_size[1], const emxArray_real_T
                     *x, const real_T zi_data[], emxArray_real_T *y,
                     emxArray_real_T *zf);

/* Function Definitions */
static boolean_T b_compatible_zi_size(const emxArray_real_T *x, const
  emxArray_real_T *zi, int32_T ndbm1)
{
  return (zi->size[0] == ndbm1) && (x->size[1] == zi->size[1]);
}

static boolean_T compatible_zi_size(const emxArray_real_T *x, const
  emxArray_real_T *zi)
{
  return x->size[1] == zi->size[1];
}

static void e_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[],
                     const real_T x[18], const real_T zi_data[], real_T y[18],
                     real_T zf_data[], int32_T zf_size[1])
{
  real_T a1;
  int32_T k;
  emxArray_real_T *r5;
  int32_T naxpy;
  int32_T j;
  int32_T y_tmp;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  a1 = a_data[0];
  if (muDoubleScalarIsInf(a_data[0]) || muDoubleScalarIsNaN(a_data[0])) {
    emlrtErrorWithMessageIdR2018a(sp, &gc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
  } else if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      for (k = 0; k < 7; k++) {
        b_data[k] /= a1;
      }

      for (k = 0; k < 6; k++) {
        a_data[k + 1] /= a1;
      }

      a_data[0] = 1.0;
    }
  }

  zf_size[0] = 6;
  for (k = 0; k < 6; k++) {
    zf_data[k] = 0.0;
  }

  for (k = 0; k < 6; k++) {
    y[k] = zi_data[k];
  }

  memset(&y[6], 0, 12U * sizeof(real_T));
  for (k = 0; k < 18; k++) {
    if (18 - k < 7) {
      naxpy = 17 - k;
    } else {
      naxpy = 6;
    }

    for (j = 0; j <= naxpy; j++) {
      y_tmp = k + j;
      y[y_tmp] += x[k] * b_data[j];
    }

    if (17 - k < 6) {
      naxpy = 16 - k;
    } else {
      naxpy = 5;
    }

    a1 = y[k];
    for (j = 0; j <= naxpy; j++) {
      y_tmp = (k + j) + 1;
      y[y_tmp] += -a1 * a_data[1 + j];
    }
  }

  emxInit_real_T(sp, &r5, 1, &ab_emlrtRTEI, true);
  for (k = 0; k < 6; k++) {
    for (j = 0; j <= k; j++) {
      zf_data[j] += x[k + 12] * b_data[(j - k) + 6];
    }
  }

  for (k = 0; k < 6; k++) {
    for (j = 0; j <= k; j++) {
      zf_data[j] += -y[k + 12] * a_data[(j - k) + 6];
    }
  }

  emxFree_real_T(&r5);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void g_filter(const emlrtStack *sp, real_T b_data[], int32_T b_size[1],
                     real_T a_data[], int32_T a_size[1], const emxArray_real_T
                     *x, const real_T zi_data[], emxArray_real_T *y,
                     emxArray_real_T *zf)
{
  int32_T na;
  int32_T nb;
  int32_T ndbuffer;
  real_T a1;
  uint32_T x_idx_0;
  int32_T k;
  int32_T i14;
  int32_T nx;
  int32_T loop_ub;
  int32_T niccp;
  boolean_T overflow;
  int32_T naxpy;
  int32_T b;
  int32_T i15;
  emxArray_real_T *r8;
  emxArray_real_T b_b_data;
  emxArray_real_T b_a_data;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  na = a_size[0];
  nb = b_size[0];
  ndbuffer = muIntScalarMax_sint32(a_size[0], b_size[0]);
  a1 = a_data[0];
  if (muDoubleScalarIsInf(a_data[0]) || muDoubleScalarIsNaN(a_data[0])) {
    emlrtErrorWithMessageIdR2018a(sp, &gc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
  } else if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      st.site = &jb_emlrtRSI;
      for (k = 0; k < nb; k++) {
        b_data[k] /= a1;
      }

      for (k = 2; k <= na; k++) {
        a_data[k - 1] /= a1;
      }

      a_data[0] = 1.0;
    }
  }

  x_idx_0 = static_cast<uint32_T>(x->size[0]);
  i14 = y->size[0];
  y->size[0] = static_cast<int32_T>(x_idx_0);
  emxEnsureCapacity_real_T(sp, y, i14, &w_emlrtRTEI);
  nx = x->size[0];
  i14 = zf->size[0];
  zf->size[0] = static_cast<int8_T>((ndbuffer - 1));
  emxEnsureCapacity_real_T(sp, zf, i14, &y_emlrtRTEI);
  loop_ub = static_cast<int8_T>((ndbuffer - 1));
  for (i14 = 0; i14 < loop_ub; i14++) {
    zf->data[i14] = 0.0;
  }

  if (x->size[0] < ndbuffer - 1) {
    niccp = x->size[0] + 1;
  } else {
    niccp = ndbuffer;
  }

  st.site = &gb_emlrtRSI;
  for (k = 0; k <= niccp - 2; k++) {
    y->data[k] = zi_data[k];
  }

  st.site = &fb_emlrtRSI;
  overflow = ((niccp <= x->size[0]) && (x->size[0] > 2147483646));
  if (overflow) {
    b_st.site = &r_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = niccp; k <= nx; k++) {
    y->data[k - 1] = 0.0;
  }

  st.site = &eb_emlrtRSI;
  overflow = ((1 <= x->size[0]) && (x->size[0] > 2147483646));
  if (overflow) {
    b_st.site = &r_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 0; k < nx; k++) {
    niccp = nx - k;
    naxpy = muIntScalarMin_sint32(niccp, nb);
    st.site = &db_emlrtRSI;
    for (loop_ub = 0; loop_ub < naxpy; loop_ub++) {
      i14 = k + loop_ub;
      y->data[i14] += x->data[k] * b_data[loop_ub];
    }

    niccp--;
    i15 = na - 1;
    naxpy = muIntScalarMin_sint32(niccp, i15);
    a1 = -y->data[k];
    st.site = &cb_emlrtRSI;
    for (loop_ub = 0; loop_ub < naxpy; loop_ub++) {
      i14 = (k + loop_ub) + 1;
      y->data[i14] += a1 * a_data[1 + loop_ub];
    }
  }

  if (x->size[0] < ndbuffer - 1) {
    niccp = ndbuffer - x->size[0];
    st.site = &bc_emlrtRSI;
    for (k = 0; k <= niccp - 2; k++) {
      zf->data[k] = zi_data[k + nx];
    }
  }

  if (x->size[0] >= nb) {
    ndbuffer = (x->size[0] - nb) + 1;
  } else {
    ndbuffer = 0;
  }

  b = x->size[0] - 1;
  st.site = &ac_emlrtRSI;
  emxInit_real_T(sp, &r8, 1, &ab_emlrtRTEI, true);
  for (k = ndbuffer; k <= b; k++) {
    niccp = nx - k;
    naxpy = (nb - nx) + k;
    if ((x->data[k] == 0.0) || (naxpy <= 32)) {
      st.site = &xb_emlrtRSI;
      if ((1 <= naxpy) && (naxpy > 2147483646)) {
        b_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (loop_ub = 0; loop_ub < naxpy; loop_ub++) {
        zf->data[loop_ub] += x->data[k] * b_data[niccp + loop_ub];
      }
    } else {
      i14 = r8->size[0];
      r8->size[0] = zf->size[0];
      emxEnsureCapacity_real_T(sp, r8, i14, &ab_emlrtRTEI);
      loop_ub = zf->size[0];
      for (i14 = 0; i14 < loop_ub; i14++) {
        r8->data[i14] = zf->data[i14];
      }

      b_b_data.data = &b_data[0];
      b_b_data.size = &b_size[0];
      b_b_data.allocatedSize = -1;
      b_b_data.numDimensions = 1;
      b_b_data.canFreeData = false;
      st.site = &wb_emlrtRSI;
      xaxpy(naxpy, x->data[k], &b_b_data, niccp + 1, r8, 1);
      i14 = zf->size[0];
      zf->size[0] = r8->size[0];
      emxEnsureCapacity_real_T(sp, zf, i14, &cb_emlrtRTEI);
      loop_ub = r8->size[0];
      for (i14 = 0; i14 < loop_ub; i14++) {
        zf->data[i14] = r8->data[i14];
      }
    }
  }

  if (x->size[0] >= na) {
    ndbuffer = (x->size[0] - na) + 1;
  } else {
    ndbuffer = 0;
  }

  b = x->size[0] - 1;
  st.site = &yb_emlrtRSI;
  for (k = ndbuffer; k <= b; k++) {
    niccp = nx - k;
    naxpy = (na - nx) + k;
    if ((-y->data[k] == 0.0) || (naxpy <= 32)) {
      st.site = &vb_emlrtRSI;
      if ((1 <= naxpy) && (naxpy > 2147483646)) {
        b_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (loop_ub = 0; loop_ub < naxpy; loop_ub++) {
        zf->data[loop_ub] += -y->data[k] * a_data[niccp + loop_ub];
      }
    } else {
      i14 = r8->size[0];
      r8->size[0] = zf->size[0];
      emxEnsureCapacity_real_T(sp, r8, i14, &bb_emlrtRTEI);
      loop_ub = zf->size[0];
      for (i14 = 0; i14 < loop_ub; i14++) {
        r8->data[i14] = zf->data[i14];
      }

      b_a_data.data = &a_data[0];
      b_a_data.size = &a_size[0];
      b_a_data.allocatedSize = -1;
      b_a_data.numDimensions = 1;
      b_a_data.canFreeData = false;
      st.site = &ub_emlrtRSI;
      xaxpy(naxpy, -y->data[k], &b_a_data, niccp + 1, r8, 1);
      i14 = zf->size[0];
      zf->size[0] = r8->size[0];
      emxEnsureCapacity_real_T(sp, zf, i14, &db_emlrtRTEI);
      loop_ub = r8->size[0];
      for (i14 = 0; i14 < loop_ub; i14++) {
        zf->data[i14] = r8->data[i14];
      }
    }
  }

  emxFree_real_T(&r8);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[], const
              real_T x[18], const real_T zi_data[], real_T y[18], real_T
              zf_data[], int32_T zf_size[1])
{
  real_T a1;
  int32_T k;
  emxArray_real_T *r1;
  int32_T naxpy;
  int32_T j;
  int32_T y_tmp;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  a1 = a_data[0];
  if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      for (k = 0; k < 7; k++) {
        b_data[k] /= a1;
      }

      for (k = 0; k < 6; k++) {
        a_data[k + 1] /= a1;
      }

      a_data[0] = 1.0;
    }
  }

  zf_size[0] = 6;
  for (k = 0; k < 6; k++) {
    zf_data[k] = 0.0;
  }

  for (k = 0; k < 6; k++) {
    y[k] = zi_data[k];
  }

  memset(&y[6], 0, 12U * sizeof(real_T));
  for (k = 0; k < 18; k++) {
    if (18 - k < 7) {
      naxpy = 17 - k;
    } else {
      naxpy = 6;
    }

    for (j = 0; j <= naxpy; j++) {
      y_tmp = k + j;
      y[y_tmp] += x[k] * b_data[j];
    }

    if (17 - k < 6) {
      naxpy = 16 - k;
    } else {
      naxpy = 5;
    }

    a1 = y[k];
    for (j = 0; j <= naxpy; j++) {
      y_tmp = (k + j) + 1;
      y[y_tmp] += -a1 * a_data[1 + j];
    }
  }

  emxInit_real_T(sp, &r1, 1, &ab_emlrtRTEI, true);
  for (k = 0; k < 6; k++) {
    for (j = 0; j <= k; j++) {
      zf_data[j] += x[k + 12] * b_data[(j - k) + 6];
    }
  }

  for (k = 0; k < 6; k++) {
    for (j = 0; j <= k; j++) {
      zf_data[j] += -y[k + 12] * a_data[(j - k) + 6];
    }
  }

  emxFree_real_T(&r1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_filter(const emlrtStack *sp, real_T b_data[], int32_T b_size[1], real_T
              a_data[], int32_T a_size[1], const emxArray_real_T *x, const
              emxArray_real_T *zi, emxArray_real_T *y, emxArray_real_T *zf)
{
  int32_T na;
  int32_T nb;
  int32_T ndbuffer;
  int8_T zicase;
  boolean_T overflow;
  real_T a1;
  uint32_T x_idx_0;
  int32_T k;
  int32_T i6;
  int32_T nx;
  int32_T loop_ub;
  int32_T niccp;
  int32_T naxpy;
  int32_T b;
  int32_T i7;
  emxArray_real_T *r2;
  emxArray_real_T b_b_data;
  emxArray_real_T b_a_data;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  na = a_size[0];
  nb = b_size[0];
  if (a_size[0] > b_size[0]) {
    ndbuffer = a_size[0] - 1;
  } else {
    ndbuffer = b_size[0] - 1;
  }

  if (zi->size[0] == ndbuffer) {
    zicase = 1;
  } else {
    zicase = 2;
    overflow = (zi->size[0] == 3);
    if (!overflow) {
      emlrtErrorWithMessageIdR2018a(sp, &fc_emlrtRTEI,
        "Coder:MATLAB:filter_invalidInitialConditions",
        "Coder:MATLAB:filter_invalidInitialConditions", 0);
    }
  }

  a1 = a_data[0];
  if (muDoubleScalarIsInf(a_data[0]) || muDoubleScalarIsNaN(a_data[0])) {
    emlrtErrorWithMessageIdR2018a(sp, &gc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
  } else if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      st.site = &jb_emlrtRSI;
      for (k = 0; k < nb; k++) {
        b_data[k] /= a1;
      }

      for (k = 2; k <= na; k++) {
        a_data[k - 1] /= a1;
      }

      a_data[0] = 1.0;
    }
  }

  x_idx_0 = static_cast<uint32_T>(x->size[0]);
  i6 = y->size[0];
  y->size[0] = static_cast<int32_T>(x_idx_0);
  emxEnsureCapacity_real_T(sp, y, i6, &w_emlrtRTEI);
  nx = x->size[0];
  i6 = zf->size[0];
  zf->size[0] = static_cast<int8_T>(ndbuffer);
  emxEnsureCapacity_real_T(sp, zf, i6, &y_emlrtRTEI);
  loop_ub = static_cast<int8_T>(ndbuffer);
  for (i6 = 0; i6 < loop_ub; i6++) {
    zf->data[i6] = 0.0;
  }

  if (x->size[0] < ndbuffer) {
    niccp = x->size[0] + 1;
  } else {
    niccp = ndbuffer + 1;
  }

  if (zicase == 2) {
    st.site = &ib_emlrtRSI;
    for (k = 0; k <= niccp - 2; k++) {
      y->data[k] = zi->data[k];
    }

    st.site = &hb_emlrtRSI;
    overflow = ((niccp <= x->size[0]) && (x->size[0] > 2147483646));
    if (overflow) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = niccp; k <= nx; k++) {
      y->data[k - 1] = 0.0;
    }
  } else {
    st.site = &gb_emlrtRSI;
    for (k = 0; k <= niccp - 2; k++) {
      y->data[k] = zi->data[k];
    }

    st.site = &fb_emlrtRSI;
    overflow = ((niccp <= x->size[0]) && (x->size[0] > 2147483646));
    if (overflow) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = niccp; k <= nx; k++) {
      y->data[k - 1] = 0.0;
    }
  }

  st.site = &eb_emlrtRSI;
  overflow = ((1 <= x->size[0]) && (x->size[0] > 2147483646));
  if (overflow) {
    b_st.site = &r_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 0; k < nx; k++) {
    niccp = nx - k;
    naxpy = muIntScalarMin_sint32(niccp, nb);
    st.site = &db_emlrtRSI;
    for (loop_ub = 0; loop_ub < naxpy; loop_ub++) {
      i6 = k + loop_ub;
      y->data[i6] += x->data[k] * b_data[loop_ub];
    }

    niccp--;
    i7 = na - 1;
    naxpy = muIntScalarMin_sint32(niccp, i7);
    a1 = -y->data[k];
    st.site = &cb_emlrtRSI;
    for (loop_ub = 0; loop_ub < naxpy; loop_ub++) {
      i6 = (k + loop_ub) + 1;
      y->data[i6] += a1 * a_data[1 + loop_ub];
    }
  }

  if (x->size[0] < ndbuffer) {
    niccp = (ndbuffer - x->size[0]) - 1;
    if (zicase == 2) {
      st.site = &cc_emlrtRSI;
      for (k = 0; k <= niccp; k++) {
        zf->data[k] = zi->data[k + nx];
      }
    } else {
      st.site = &bc_emlrtRSI;
      for (k = 0; k <= niccp; k++) {
        zf->data[k] = zi->data[k + nx];
      }
    }
  }

  if (x->size[0] >= nb) {
    ndbuffer = (x->size[0] - nb) + 1;
  } else {
    ndbuffer = 0;
  }

  b = x->size[0] - 1;
  st.site = &ac_emlrtRSI;
  emxInit_real_T(sp, &r2, 1, &ab_emlrtRTEI, true);
  for (k = ndbuffer; k <= b; k++) {
    niccp = nx - k;
    naxpy = (nb - nx) + k;
    if ((x->data[k] == 0.0) || (naxpy <= 32)) {
      st.site = &xb_emlrtRSI;
      if ((1 <= naxpy) && (naxpy > 2147483646)) {
        b_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (loop_ub = 0; loop_ub < naxpy; loop_ub++) {
        zf->data[loop_ub] += x->data[k] * b_data[niccp + loop_ub];
      }
    } else {
      i6 = r2->size[0];
      r2->size[0] = zf->size[0];
      emxEnsureCapacity_real_T(sp, r2, i6, &ab_emlrtRTEI);
      loop_ub = zf->size[0];
      for (i6 = 0; i6 < loop_ub; i6++) {
        r2->data[i6] = zf->data[i6];
      }

      b_b_data.data = &b_data[0];
      b_b_data.size = &b_size[0];
      b_b_data.allocatedSize = -1;
      b_b_data.numDimensions = 1;
      b_b_data.canFreeData = false;
      st.site = &wb_emlrtRSI;
      xaxpy(naxpy, x->data[k], &b_b_data, niccp + 1, r2, 1);
      i6 = zf->size[0];
      zf->size[0] = r2->size[0];
      emxEnsureCapacity_real_T(sp, zf, i6, &cb_emlrtRTEI);
      loop_ub = r2->size[0];
      for (i6 = 0; i6 < loop_ub; i6++) {
        zf->data[i6] = r2->data[i6];
      }
    }
  }

  if (x->size[0] >= na) {
    ndbuffer = (x->size[0] - na) + 1;
  } else {
    ndbuffer = 0;
  }

  b = x->size[0] - 1;
  st.site = &yb_emlrtRSI;
  for (k = ndbuffer; k <= b; k++) {
    niccp = nx - k;
    naxpy = (na - nx) + k;
    if ((-y->data[k] == 0.0) || (naxpy <= 32)) {
      st.site = &vb_emlrtRSI;
      if ((1 <= naxpy) && (naxpy > 2147483646)) {
        b_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (loop_ub = 0; loop_ub < naxpy; loop_ub++) {
        zf->data[loop_ub] += -y->data[k] * a_data[niccp + loop_ub];
      }
    } else {
      i6 = r2->size[0];
      r2->size[0] = zf->size[0];
      emxEnsureCapacity_real_T(sp, r2, i6, &bb_emlrtRTEI);
      loop_ub = zf->size[0];
      for (i6 = 0; i6 < loop_ub; i6++) {
        r2->data[i6] = zf->data[i6];
      }

      b_a_data.data = &a_data[0];
      b_a_data.size = &a_size[0];
      b_a_data.allocatedSize = -1;
      b_a_data.numDimensions = 1;
      b_a_data.canFreeData = false;
      st.site = &ub_emlrtRSI;
      xaxpy(naxpy, -y->data[k], &b_a_data, niccp + 1, r2, 1);
      i6 = zf->size[0];
      zf->size[0] = r2->size[0];
      emxEnsureCapacity_real_T(sp, zf, i6, &db_emlrtRTEI);
      loop_ub = r2->size[0];
      for (i6 = 0; i6 < loop_ub; i6++) {
        zf->data[i6] = r2->data[i6];
      }
    }
  }

  emxFree_real_T(&r2);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[], const
              emxArray_real_T *x, const emxArray_real_T *zi, emxArray_real_T *y,
              emxArray_real_T *zf)
{
  real_T a1;
  int32_T i10;
  int32_T k;
  uint32_T sx_idx_1;
  int32_T nc;
  uint32_T size_zf_idx_1;
  int32_T c;
  real_T zi_data[6];
  emxArray_real_T *r4;
  real_T b_b_data[7];
  real_T b_a_data[7];
  real_T tmp_data[6];
  int32_T tmp_size[1];
  int32_T i11;
  int32_T naxpy;
  int32_T j;
  int32_T i12;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (!compatible_zi_size(x, zi)) {
    emlrtErrorWithMessageIdR2018a(sp, &fc_emlrtRTEI,
      "Coder:MATLAB:filter_invalidInitialConditions",
      "Coder:MATLAB:filter_invalidInitialConditions", 0);
  }

  a1 = a_data[0];
  if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      st.site = &jb_emlrtRSI;
      for (k = 0; k < 7; k++) {
        b_data[k] /= a1;
      }

      for (k = 0; k < 6; k++) {
        a_data[k + 1] /= a1;
      }

      a_data[0] = 1.0;
    }
  }

  i10 = y->size[0] * y->size[1];
  y->size[0] = 18;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, y, i10, &w_emlrtRTEI);
  sx_idx_1 = static_cast<uint32_T>(x->size[1]);
  nc = static_cast<int32_T>(sx_idx_1) - 1;
  size_zf_idx_1 = static_cast<uint32_T>(x->size[1]);
  i10 = zf->size[0] * zf->size[1];
  zf->size[0] = 6;
  zf->size[1] = static_cast<int32_T>(size_zf_idx_1);
  emxEnsureCapacity_real_T(sp, zf, i10, &y_emlrtRTEI);
  k = 6 * static_cast<int32_T>(size_zf_idx_1);
  for (i10 = 0; i10 < k; i10++) {
    zf->data[i10] = 0.0;
  }

  if (static_cast<int32_T>(sx_idx_1) >= 2) {
    st.site = &rc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      for (i10 = 0; i10 < 6; i10++) {
        zi_data[i10] = zi->data[i10 + 6 * c];
      }

      for (i10 = 0; i10 < 7; i10++) {
        b_b_data[i10] = b_data[i10];
        b_a_data[i10] = a_data[i10];
      }

      st.site = &qc_emlrtRSI;
      e_filter(&st, b_b_data, b_a_data, *(real_T (*)[18])&x->data[18 * c],
               zi_data, *(real_T (*)[18])&y->data[18 * c], tmp_data, tmp_size);
      for (i10 = 0; i10 < 6; i10++) {
        zf->data[i10 + 6 * c] = tmp_data[i10];
      }
    }
  } else {
    st.site = &pc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      st.site = &ib_emlrtRSI;
      for (k = 0; k < 6; k++) {
        y->data[k] = zi->data[k];
      }

      for (k = 0; k < 12; k++) {
        y->data[k + 6] = 0.0;
      }
    }

    st.site = &oc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    emxInit_real_T(sp, &r4, 2, &ab_emlrtRTEI, true);
    for (c = 0; c <= nc; c++) {
      for (k = 0; k < 18; k++) {
        i11 = 18 - k;
        naxpy = muIntScalarMin_sint32(i11, 7);
        st.site = &db_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          i10 = k + j;
          y->data[i10] += x->data[k] * b_data[j];
        }

        i12 = 17 - k;
        naxpy = muIntScalarMin_sint32(i12, 6);
        a1 = -y->data[k];
        st.site = &cb_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          i10 = (k + j) + 1;
          y->data[i10] += a1 * a_data[1 + j];
        }
      }

      for (k = 0; k < 6; k++) {
        st.site = &xb_emlrtRSI;
        for (j = 0; j <= k; j++) {
          zf->data[j] += x->data[k + 12] * b_data[(j - k) + 6];
        }
      }

      for (k = 0; k < 6; k++) {
        st.site = &vb_emlrtRSI;
        for (j = 0; j <= k; j++) {
          zf->data[j] += -y->data[k + 12] * a_data[(j - k) + 6];
        }
      }
    }

    emxFree_real_T(&r4);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void f_filter(const emlrtStack *sp, real_T b_data[], int32_T b_size[1], real_T
              a_data[], int32_T a_size[1], const emxArray_real_T *x, const
              emxArray_real_T *zi, emxArray_real_T *y, emxArray_real_T *zf)
{
  int32_T na;
  int32_T nb;
  int32_T ndbuffer;
  real_T a1;
  uint32_T sx_idx_0;
  int32_T k;
  uint32_T sx_idx_1;
  int32_T lb;
  int32_T nx;
  int32_T nc;
  int32_T size_zf_idx_1;
  emxArray_real_T *r6;
  int32_T c;
  emxArray_real_T *r7;
  emxArray_real_T *b_x;
  int32_T b_b_size[1];
  real_T zi_data[6];
  int32_T naxpy;
  real_T b_b_data[7];
  int32_T b_a_size[1];
  int32_T j;
  real_T b_a_data[7];
  int32_T b;
  int32_T i13;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if ((x->size[0] != 1) || (x->size[1] == 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(sp, &ec_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  na = a_size[0];
  nb = b_size[0];
  if (a_size[0] > b_size[0]) {
    ndbuffer = a_size[0] - 1;
  } else {
    ndbuffer = b_size[0] - 1;
  }

  if (!b_compatible_zi_size(x, zi, ndbuffer)) {
    emlrtErrorWithMessageIdR2018a(sp, &fc_emlrtRTEI,
      "Coder:MATLAB:filter_invalidInitialConditions",
      "Coder:MATLAB:filter_invalidInitialConditions", 0);
  }

  a1 = a_data[0];
  if (muDoubleScalarIsInf(a_data[0]) || muDoubleScalarIsNaN(a_data[0])) {
    emlrtErrorWithMessageIdR2018a(sp, &gc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
  } else if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      st.site = &jb_emlrtRSI;
      for (k = 0; k < nb; k++) {
        b_data[k] /= a1;
      }

      for (k = 2; k <= na; k++) {
        a_data[k - 1] /= a1;
      }

      a_data[0] = 1.0;
    }
  }

  sx_idx_0 = static_cast<uint32_T>(x->size[0]);
  sx_idx_1 = static_cast<uint32_T>(x->size[1]);
  lb = y->size[0] * y->size[1];
  y->size[0] = static_cast<int32_T>(sx_idx_0);
  y->size[1] = static_cast<int32_T>(sx_idx_1);
  emxEnsureCapacity_real_T(sp, y, lb, &w_emlrtRTEI);
  nx = x->size[0];
  sx_idx_1 = static_cast<uint32_T>(x->size[1]);
  nc = static_cast<int32_T>(sx_idx_1) - 1;
  size_zf_idx_1 = x->size[1];
  lb = zf->size[0] * zf->size[1];
  zf->size[0] = ndbuffer;
  zf->size[1] = size_zf_idx_1;
  emxEnsureCapacity_real_T(sp, zf, lb, &y_emlrtRTEI);
  size_zf_idx_1 *= ndbuffer;
  for (lb = 0; lb < size_zf_idx_1; lb++) {
    zf->data[lb] = 0.0;
  }

  if (static_cast<int32_T>(sx_idx_1) >= 2) {
    st.site = &rc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    emxInit_real_T(sp, &r6, 1, &w_emlrtRTEI, true);
    emxInit_real_T(sp, &r7, 1, &w_emlrtRTEI, true);
    emxInit_real_T(sp, &b_x, 1, &qb_emlrtRTEI, true);
    for (c = 0; c <= nc; c++) {
      size_zf_idx_1 = x->size[0];
      lb = b_x->size[0];
      b_x->size[0] = size_zf_idx_1;
      emxEnsureCapacity_real_T(sp, b_x, lb, &qb_emlrtRTEI);
      for (lb = 0; lb < size_zf_idx_1; lb++) {
        b_x->data[lb] = x->data[lb + x->size[0] * c];
      }

      size_zf_idx_1 = zi->size[0];
      for (lb = 0; lb < size_zf_idx_1; lb++) {
        zi_data[lb] = zi->data[lb + zi->size[0] * c];
      }

      b_b_size[0] = b_size[0];
      if (0 <= b_size[0] - 1) {
        memcpy(&b_b_data[0], &b_data[0], (uint32_T)(b_size[0] * static_cast<
                int32_T>(sizeof(real_T))));
      }

      b_a_size[0] = a_size[0];
      if (0 <= a_size[0] - 1) {
        memcpy(&b_a_data[0], &a_data[0], (uint32_T)(a_size[0] * static_cast<
                int32_T>(sizeof(real_T))));
      }

      st.site = &qc_emlrtRSI;
      g_filter(&st, b_b_data, b_b_size, b_a_data, b_a_size, b_x, zi_data, r6, r7);
      size_zf_idx_1 = r6->size[0];
      for (lb = 0; lb < size_zf_idx_1; lb++) {
        y->data[lb + y->size[0] * c] = r6->data[lb];
      }

      size_zf_idx_1 = r7->size[0];
      for (lb = 0; lb < size_zf_idx_1; lb++) {
        zf->data[lb + zf->size[0] * c] = r7->data[lb];
      }
    }

    emxFree_real_T(&b_x);
    emxFree_real_T(&r7);
    emxFree_real_T(&r6);
  } else {
    size_zf_idx_1 = muIntScalarMin_sint32(x->size[0], ndbuffer);
    st.site = &pc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      st.site = &ib_emlrtRSI;
      for (k = 0; k < size_zf_idx_1; k++) {
        y->data[k] = zi->data[k];
      }

      lb = size_zf_idx_1 + 1;
      st.site = &hb_emlrtRSI;
      if ((size_zf_idx_1 + 1 <= nx) && (nx > 2147483646)) {
        b_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = lb; k <= nx; k++) {
        y->data[k - 1] = 0.0;
      }
    }

    st.site = &oc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      st.site = &eb_emlrtRSI;
      if ((1 <= nx) && (nx > 2147483646)) {
        b_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 0; k < nx; k++) {
        size_zf_idx_1 = nx - k;
        naxpy = muIntScalarMin_sint32(size_zf_idx_1, nb);
        st.site = &db_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          lb = k + j;
          y->data[lb] += x->data[k] * b_data[j];
        }

        lb = size_zf_idx_1 - 1;
        i13 = na - 1;
        naxpy = muIntScalarMin_sint32(lb, i13);
        a1 = -y->data[k];
        st.site = &cb_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          lb = (k + j) + 1;
          y->data[lb] += a1 * a_data[1 + j];
        }
      }

      if (nx < ndbuffer) {
        size_zf_idx_1 = ndbuffer - nx;
        st.site = &cc_emlrtRSI;
        for (k = 0; k < size_zf_idx_1; k++) {
          zf->data[k] = zi->data[k + nx];
        }
      }

      if (nx >= nb) {
        lb = (nx - nb) + 1;
      } else {
        lb = 0;
      }

      b = nx - 1;
      st.site = &ac_emlrtRSI;
      for (k = lb; k <= b; k++) {
        size_zf_idx_1 = nx - k;
        naxpy = (nb - nx) + k;
        if ((x->data[k] == 0.0) || (naxpy <= 32)) {
          st.site = &xb_emlrtRSI;
          if ((1 <= naxpy) && (naxpy > 2147483646)) {
            b_st.site = &r_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }

          for (j = 0; j < naxpy; j++) {
            zf->data[j] += x->data[k] * b_data[size_zf_idx_1 + j];
          }
        } else {
          st.site = &wb_emlrtRSI;
          b_xaxpy(naxpy, x->data[k], b_data, size_zf_idx_1 + 1, zf);
        }
      }

      if (nx >= na) {
        lb = (nx - na) + 1;
      } else {
        lb = 0;
      }

      b = nx - 1;
      st.site = &yb_emlrtRSI;
      for (k = lb; k <= b; k++) {
        size_zf_idx_1 = nx - k;
        naxpy = (na - nx) + k;
        if ((-y->data[k] == 0.0) || (naxpy <= 32)) {
          st.site = &vb_emlrtRSI;
          if ((1 <= naxpy) && (naxpy > 2147483646)) {
            b_st.site = &r_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }

          for (j = 0; j < naxpy; j++) {
            zf->data[j] += -y->data[k] * a_data[size_zf_idx_1 + j];
          }
        } else {
          st.site = &ub_emlrtRSI;
          b_xaxpy(naxpy, -y->data[k], a_data, size_zf_idx_1 + 1, zf);
        }
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void filter(const emlrtStack *sp, real_T b_data[], int32_T b_size[1], real_T
            a_data[], int32_T a_size[1], const emxArray_real_T *x, const
            emxArray_real_T *zi, emxArray_real_T *y)
{
  int32_T na;
  int32_T nb;
  int32_T ndbuffer;
  int8_T zicase;
  boolean_T overflow;
  real_T a1;
  uint32_T x_idx_0;
  int32_T k;
  int32_T i4;
  int32_T nx;
  int32_T naxpy;
  int32_T j;
  int32_T i5;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  na = a_size[0];
  nb = b_size[0];
  ndbuffer = muIntScalarMax_sint32(a_size[0], b_size[0]);
  if (zi->size[0] == ndbuffer - 1) {
    zicase = 1;
  } else {
    zicase = 2;
    overflow = (zi->size[0] == ndbuffer - 1);
    if (!overflow) {
      emlrtErrorWithMessageIdR2018a(sp, &fc_emlrtRTEI,
        "Coder:MATLAB:filter_invalidInitialConditions",
        "Coder:MATLAB:filter_invalidInitialConditions", 0);
    }
  }

  a1 = a_data[0];
  if (muDoubleScalarIsInf(a_data[0]) || muDoubleScalarIsNaN(a_data[0])) {
    emlrtErrorWithMessageIdR2018a(sp, &gc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
  } else if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      st.site = &jb_emlrtRSI;
      for (k = 0; k < nb; k++) {
        b_data[k] /= a1;
      }

      for (k = 2; k <= na; k++) {
        a_data[k - 1] /= a1;
      }

      a_data[0] = 1.0;
    }
  }

  x_idx_0 = static_cast<uint32_T>(x->size[0]);
  i4 = y->size[0];
  y->size[0] = static_cast<int32_T>(x_idx_0);
  emxEnsureCapacity_real_T(sp, y, i4, &w_emlrtRTEI);
  nx = x->size[0];
  if (x->size[0] < ndbuffer - 1) {
    ndbuffer = x->size[0] + 1;
  }

  if (zicase == 2) {
    st.site = &ib_emlrtRSI;
    for (k = 0; k <= ndbuffer - 2; k++) {
      y->data[k] = zi->data[k];
    }

    st.site = &hb_emlrtRSI;
    overflow = ((ndbuffer <= x->size[0]) && (x->size[0] > 2147483646));
    if (overflow) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = ndbuffer; k <= nx; k++) {
      y->data[k - 1] = 0.0;
    }
  } else {
    st.site = &gb_emlrtRSI;
    for (k = 0; k <= ndbuffer - 2; k++) {
      y->data[k] = zi->data[k];
    }

    st.site = &fb_emlrtRSI;
    overflow = ((ndbuffer <= x->size[0]) && (x->size[0] > 2147483646));
    if (overflow) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = ndbuffer; k <= nx; k++) {
      y->data[k - 1] = 0.0;
    }
  }

  st.site = &eb_emlrtRSI;
  overflow = ((1 <= x->size[0]) && (x->size[0] > 2147483646));
  if (overflow) {
    b_st.site = &r_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 0; k < nx; k++) {
    ndbuffer = nx - k;
    naxpy = muIntScalarMin_sint32(ndbuffer, nb);
    st.site = &db_emlrtRSI;
    for (j = 0; j < naxpy; j++) {
      i4 = k + j;
      y->data[i4] += x->data[k] * b_data[j];
    }

    ndbuffer--;
    i5 = na - 1;
    naxpy = muIntScalarMin_sint32(ndbuffer, i5);
    a1 = -y->data[k];
    st.site = &cb_emlrtRSI;
    for (j = 0; j < naxpy; j++) {
      i4 = (k + j) + 1;
      y->data[i4] += a1 * a_data[1 + j];
    }
  }
}

void h_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[], const
              emxArray_real_T *x, const emxArray_real_T *zi, emxArray_real_T *y)
{
  real_T a1;
  int32_T i16;
  int32_T k;
  uint32_T sx_idx_1;
  int32_T nc;
  int32_T c;
  real_T b_b_data[7];
  real_T b_a_data[7];
  int32_T i17;
  int32_T naxpy;
  int32_T j;
  int32_T i18;
  int32_T as_tmp;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!compatible_zi_size(x, zi)) {
    emlrtErrorWithMessageIdR2018a(sp, &fc_emlrtRTEI,
      "Coder:MATLAB:filter_invalidInitialConditions",
      "Coder:MATLAB:filter_invalidInitialConditions", 0);
  }

  a1 = a_data[0];
  if (muDoubleScalarIsInf(a_data[0]) || muDoubleScalarIsNaN(a_data[0])) {
    emlrtErrorWithMessageIdR2018a(sp, &gc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
  } else if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      st.site = &jb_emlrtRSI;
      for (k = 0; k < 7; k++) {
        b_data[k] /= a1;
      }

      for (k = 0; k < 6; k++) {
        a_data[k + 1] /= a1;
      }

      a_data[0] = 1.0;
    }
  }

  i16 = y->size[0] * y->size[1];
  y->size[0] = 18;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, y, i16, &w_emlrtRTEI);
  sx_idx_1 = static_cast<uint32_T>(x->size[1]);
  nc = static_cast<int32_T>(sx_idx_1) - 1;
  if (static_cast<int32_T>(sx_idx_1) >= 2) {
    st.site = &tc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      st.site = &sc_emlrtRSI;
      for (i16 = 0; i16 < 7; i16++) {
        b_b_data[i16] = b_data[i16];
        b_a_data[i16] = a_data[i16];
      }

      a1 = a_data[0];
      if (muDoubleScalarIsInf(a_data[0]) || muDoubleScalarIsNaN(a_data[0])) {
        emlrtErrorWithMessageIdR2018a(&st, &gc_emlrtRTEI,
          "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
          "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
      } else if (a_data[0] == 0.0) {
        emlrtErrorWithMessageIdR2018a(&st, &hc_emlrtRTEI,
          "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
          "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
      } else {
        if (a_data[0] != 1.0) {
          for (k = 0; k < 7; k++) {
            b_b_data[k] /= a1;
          }

          for (k = 0; k < 6; k++) {
            b_a_data[k + 1] /= a1;
          }

          b_a_data[0] = 1.0;
        }
      }

      for (k = 0; k < 6; k++) {
        y->data[k + 18 * c] = zi->data[k + 6 * c];
      }

      for (k = 0; k < 12; k++) {
        y->data[(k + 18 * c) + 6] = 0.0;
      }

      for (k = 0; k < 18; k++) {
        if (18 - k < 7) {
          naxpy = 17 - k;
        } else {
          naxpy = 6;
        }

        as_tmp = k + 18 * c;
        a1 = x->data[as_tmp];
        for (j = 0; j <= naxpy; j++) {
          i16 = (k + j) + 18 * c;
          y->data[i16] += a1 * b_b_data[j];
        }

        if (17 - k < 6) {
          naxpy = 16 - k;
        } else {
          naxpy = 5;
        }

        a1 = -y->data[as_tmp];
        for (j = 0; j <= naxpy; j++) {
          i16 = ((k + j) + 18 * c) + 1;
          y->data[i16] += a1 * b_a_data[1 + j];
        }
      }
    }
  } else {
    st.site = &pc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      st.site = &ib_emlrtRSI;
      for (k = 0; k < 6; k++) {
        y->data[k] = zi->data[k];
      }

      for (k = 0; k < 12; k++) {
        y->data[k + 6] = 0.0;
      }
    }

    st.site = &oc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      for (k = 0; k < 18; k++) {
        i17 = 18 - k;
        naxpy = muIntScalarMin_sint32(i17, 7);
        st.site = &db_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          i16 = k + j;
          y->data[i16] += x->data[k] * b_data[j];
        }

        i18 = 17 - k;
        naxpy = muIntScalarMin_sint32(i18, 6);
        a1 = -y->data[k];
        st.site = &cb_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          i16 = (k + j) + 1;
          y->data[i16] += a1 * a_data[1 + j];
        }
      }
    }
  }
}

void i_filter(const emlrtStack *sp, real_T b_data[], int32_T b_size[1], real_T
              a_data[], int32_T a_size[1], const emxArray_real_T *x, const
              emxArray_real_T *zi, emxArray_real_T *y)
{
  int32_T na;
  int32_T nb;
  int32_T ndbuffer_tmp;
  real_T a1;
  uint32_T sx_idx_0;
  int32_T k;
  uint32_T sx_idx_1;
  int32_T i19;
  int32_T nx;
  int32_T nc;
  int32_T niccp;
  emxArray_real_T *r9;
  int32_T c;
  real_T b_b_data[7];
  real_T b_a_data[7];
  int32_T naxpy;
  int32_T j;
  int32_T i20;
  boolean_T overflow;
  int32_T i21;
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
  if ((x->size[0] != 1) || (x->size[1] == 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(sp, &ec_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  na = a_size[0];
  nb = b_size[0];
  ndbuffer_tmp = muIntScalarMax_sint32(a_size[0], b_size[0]);
  if (!b_compatible_zi_size(x, zi, ndbuffer_tmp - 1)) {
    emlrtErrorWithMessageIdR2018a(sp, &fc_emlrtRTEI,
      "Coder:MATLAB:filter_invalidInitialConditions",
      "Coder:MATLAB:filter_invalidInitialConditions", 0);
  }

  a1 = a_data[0];
  if (!b_isfinite(a_data[0])) {
    emlrtErrorWithMessageIdR2018a(sp, &gc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
  } else if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      st.site = &jb_emlrtRSI;
      for (k = 0; k < nb; k++) {
        b_data[k] /= a1;
      }

      for (k = 2; k <= na; k++) {
        a_data[k - 1] /= a1;
      }

      a_data[0] = 1.0;
    }
  }

  sx_idx_0 = static_cast<uint32_T>(x->size[0]);
  sx_idx_1 = static_cast<uint32_T>(x->size[1]);
  i19 = y->size[0] * y->size[1];
  y->size[0] = static_cast<int32_T>(sx_idx_0);
  y->size[1] = static_cast<int32_T>(sx_idx_1);
  emxEnsureCapacity_real_T(sp, y, i19, &w_emlrtRTEI);
  nx = x->size[0];
  sx_idx_1 = static_cast<uint32_T>(x->size[1]);
  nc = static_cast<int32_T>(sx_idx_1) - 1;
  if (static_cast<int32_T>(sx_idx_1) >= 2) {
    st.site = &tc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    emxInit_real_T(sp, &r9, 1, &w_emlrtRTEI, true);
    for (c = 0; c <= nc; c++) {
      st.site = &sc_emlrtRSI;
      if (0 <= b_size[0] - 1) {
        memcpy(&b_b_data[0], &b_data[0], (uint32_T)(b_size[0] * static_cast<
                int32_T>(sizeof(real_T))));
      }

      if (0 <= a_size[0] - 1) {
        memcpy(&b_a_data[0], &a_data[0], (uint32_T)(a_size[0] * static_cast<
                int32_T>(sizeof(real_T))));
      }

      i19 = a_size[0];
      na = b_size[0];
      a1 = a_data[0];
      if (muDoubleScalarIsInf(a_data[0]) || muDoubleScalarIsNaN(a_data[0])) {
        emlrtErrorWithMessageIdR2018a(&st, &gc_emlrtRTEI,
          "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
          "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
      } else if (a_data[0] == 0.0) {
        emlrtErrorWithMessageIdR2018a(&st, &hc_emlrtRTEI,
          "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
          "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
      } else {
        if (a_data[0] != 1.0) {
          b_st.site = &jb_emlrtRSI;
          for (k = 0; k < na; k++) {
            b_b_data[k] /= a1;
          }

          for (k = 2; k <= i19; k++) {
            b_a_data[k - 1] /= a1;
          }

          b_a_data[0] = 1.0;
        }
      }

      nb = x->size[0];
      nx = r9->size[0];
      r9->size[0] = nb;
      emxEnsureCapacity_real_T(&st, r9, nx, &rb_emlrtRTEI);
      nb = x->size[0];
      nx = x->size[0];
      if (nx < ndbuffer_tmp - 1) {
        niccp = x->size[0];
      } else {
        niccp = ndbuffer_tmp - 1;
      }

      b_st.site = &gb_emlrtRSI;
      if ((1 <= niccp) && (niccp > 2147483646)) {
        c_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (k = 0; k < niccp; k++) {
        r9->data[k] = zi->data[k + zi->size[0] * c];
      }

      naxpy = niccp + 1;
      b_st.site = &fb_emlrtRSI;
      nx = x->size[0];
      if (niccp + 1 > nx) {
        overflow = false;
      } else {
        nx = x->size[0];
        overflow = (nx > 2147483646);
      }

      if (overflow) {
        c_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (k = naxpy; k <= nb; k++) {
        r9->data[k - 1] = 0.0;
      }

      b_st.site = &eb_emlrtRSI;
      nx = x->size[0];
      if (1 > nx) {
        overflow = false;
      } else {
        nx = x->size[0];
        overflow = (nx > 2147483646);
      }

      if (overflow) {
        c_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (k = 0; k < nb; k++) {
        niccp = nb - k;
        naxpy = muIntScalarMin_sint32(niccp, na);
        b_st.site = &db_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          nx = k + j;
          r9->data[nx] += x->data[k + x->size[0] * c] * b_b_data[j];
        }

        naxpy = niccp - 1;
        i21 = i19 - 1;
        naxpy = muIntScalarMin_sint32(naxpy, i21);
        a1 = -r9->data[k];
        b_st.site = &cb_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          nx = (k + j) + 1;
          r9->data[nx] += a1 * b_a_data[1 + j];
        }
      }

      na = r9->size[0];
      for (i19 = 0; i19 < na; i19++) {
        y->data[i19 + y->size[0] * c] = r9->data[i19];
      }
    }

    emxFree_real_T(&r9);
  } else {
    if (x->size[0] < ndbuffer_tmp - 1) {
      niccp = x->size[0] + 1;
    } else {
      niccp = ndbuffer_tmp;
    }

    st.site = &pc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      st.site = &ib_emlrtRSI;
      for (k = 0; k <= niccp - 2; k++) {
        y->data[k] = zi->data[k];
      }

      st.site = &hb_emlrtRSI;
      if ((niccp <= nx) && (nx > 2147483646)) {
        b_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = niccp; k <= nx; k++) {
        y->data[k - 1] = 0.0;
      }
    }

    st.site = &oc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      st.site = &eb_emlrtRSI;
      if ((1 <= nx) && (nx > 2147483646)) {
        b_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 0; k < nx; k++) {
        niccp = nx - k;
        naxpy = muIntScalarMin_sint32(niccp, nb);
        st.site = &db_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          i19 = k + j;
          y->data[i19] += x->data[k] * b_data[j];
        }

        naxpy = niccp - 1;
        i20 = na - 1;
        naxpy = muIntScalarMin_sint32(naxpy, i20);
        a1 = -y->data[k];
        st.site = &cb_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          i19 = (k + j) + 1;
          y->data[i19] += a1 * a_data[1 + j];
        }
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void j_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[], const
              real_T x[9], const real_T zi_data[], real_T y[9], emxArray_real_T *
              zf)
{
  int32_T i24;
  int32_T k;
  emxArray_real_T *r10;
  int32_T naxpy;
  int32_T j;
  real_T as;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (muDoubleScalarIsInf(a_data[0]) || muDoubleScalarIsNaN(a_data[0])) {
    emlrtErrorWithMessageIdR2018a(sp, &gc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
  } else if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      b_data[0] /= a_data[0];
      b_data[1] /= a_data[0];
      b_data[2] /= a_data[0];
      b_data[3] /= a_data[0];
      a_data[1] /= a_data[0];
      a_data[2] /= a_data[0];
      a_data[3] /= a_data[0];
      a_data[0] = 1.0;
    }
  }

  i24 = zf->size[0];
  zf->size[0] = 3;
  emxEnsureCapacity_real_T(sp, zf, i24, &y_emlrtRTEI);
  zf->data[0] = 0.0;
  zf->data[1] = 0.0;
  zf->data[2] = 0.0;
  y[0] = zi_data[0];
  y[1] = zi_data[1];
  y[2] = zi_data[2];
  for (k = 0; k < 6; k++) {
    y[k + 3] = 0.0;
  }

  for (k = 0; k < 9; k++) {
    if (9 - k < 4) {
      naxpy = 8 - k;
    } else {
      naxpy = 3;
    }

    for (j = 0; j <= naxpy; j++) {
      i24 = k + j;
      y[i24] += x[k] * b_data[j];
    }

    if (8 - k < 3) {
      naxpy = 7 - k;
    } else {
      naxpy = 2;
    }

    as = -y[k];
    for (j = 0; j <= naxpy; j++) {
      i24 = (k + j) + 1;
      y[i24] += as * a_data[1 + j];
    }
  }

  emxInit_real_T(sp, &r10, 1, &ab_emlrtRTEI, true);
  for (k = 0; k < 3; k++) {
    for (j = 0; j <= k; j++) {
      zf->data[j] += x[k + 6] * b_data[(j - k) + 3];
    }
  }

  for (k = 0; k < 3; k++) {
    for (j = 0; j <= k; j++) {
      zf->data[j] += -y[k + 6] * a_data[(j - k) + 3];
    }
  }

  emxFree_real_T(&r10);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void k_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[], const
              real_T x[9], const emxArray_real_T *zi, real_T y[9])
{
  int8_T zicase;
  boolean_T p;
  int32_T k;
  int32_T naxpy;
  int32_T j;
  int32_T y_tmp;
  real_T d4;
  if (zi->size[0] == 3) {
    zicase = 1;
  } else {
    zicase = 2;
    p = (zi->size[0] == 3);
    if (!p) {
      emlrtErrorWithMessageIdR2018a(sp, &fc_emlrtRTEI,
        "Coder:MATLAB:filter_invalidInitialConditions",
        "Coder:MATLAB:filter_invalidInitialConditions", 0);
    }
  }

  if (muDoubleScalarIsInf(a_data[0]) || muDoubleScalarIsNaN(a_data[0])) {
    emlrtErrorWithMessageIdR2018a(sp, &gc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
  } else if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      b_data[0] /= a_data[0];
      b_data[1] /= a_data[0];
      b_data[2] /= a_data[0];
      b_data[3] /= a_data[0];
      a_data[1] /= a_data[0];
      a_data[2] /= a_data[0];
      a_data[3] /= a_data[0];
      a_data[0] = 1.0;
    }
  }

  if (zicase == 2) {
    y[0] = zi->data[0];
    y[1] = zi->data[1];
    y[2] = zi->data[2];
    for (k = 0; k < 6; k++) {
      y[k + 3] = 0.0;
    }
  } else {
    y[0] = zi->data[0];
    y[1] = zi->data[1];
    y[2] = zi->data[2];
    for (k = 0; k < 6; k++) {
      y[k + 3] = 0.0;
    }
  }

  for (k = 0; k < 9; k++) {
    if (9 - k < 4) {
      naxpy = 8 - k;
    } else {
      naxpy = 3;
    }

    for (j = 0; j <= naxpy; j++) {
      y_tmp = k + j;
      y[y_tmp] += x[k] * b_data[j];
    }

    if (8 - k < 3) {
      naxpy = 7 - k;
    } else {
      naxpy = 2;
    }

    d4 = y[k];
    for (j = 0; j <= naxpy; j++) {
      y_tmp = (k + j) + 1;
      y[y_tmp] += -d4 * a_data[1 + j];
    }
  }
}

void l_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[], const
              emxArray_real_T *x, const emxArray_real_T *zi, emxArray_real_T *y,
              emxArray_real_T *zf)
{
  int32_T i27;
  uint32_T sx_idx_1;
  int32_T nc;
  uint32_T size_zf_idx_1;
  int32_T loop_ub;
  int32_T c;
  emxArray_real_T *r12;
  real_T zi_data[3];
  emxArray_real_T *r13;
  real_T b_b_data[4];
  real_T b_a_data[4];
  int32_T i28;
  int32_T naxpy;
  int32_T j;
  int32_T i29;
  real_T as;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (!compatible_zi_size(x, zi)) {
    emlrtErrorWithMessageIdR2018a(sp, &fc_emlrtRTEI,
      "Coder:MATLAB:filter_invalidInitialConditions",
      "Coder:MATLAB:filter_invalidInitialConditions", 0);
  }

  if (!b_isfinite(a_data[0])) {
    emlrtErrorWithMessageIdR2018a(sp, &gc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
  } else if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      st.site = &jb_emlrtRSI;
      b_data[0] /= a_data[0];
      b_data[1] /= a_data[0];
      b_data[2] /= a_data[0];
      b_data[3] /= a_data[0];
      a_data[1] /= a_data[0];
      a_data[2] /= a_data[0];
      a_data[3] /= a_data[0];
      a_data[0] = 1.0;
    }
  }

  i27 = y->size[0] * y->size[1];
  y->size[0] = 9;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, y, i27, &w_emlrtRTEI);
  sx_idx_1 = static_cast<uint32_T>(x->size[1]);
  nc = static_cast<int32_T>(sx_idx_1) - 1;
  size_zf_idx_1 = static_cast<uint32_T>(x->size[1]);
  i27 = zf->size[0] * zf->size[1];
  zf->size[0] = 3;
  zf->size[1] = static_cast<int32_T>(size_zf_idx_1);
  emxEnsureCapacity_real_T(sp, zf, i27, &y_emlrtRTEI);
  loop_ub = 3 * static_cast<int32_T>(size_zf_idx_1);
  for (i27 = 0; i27 < loop_ub; i27++) {
    zf->data[i27] = 0.0;
  }

  if (static_cast<int32_T>(sx_idx_1) >= 2) {
    st.site = &rc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    emxInit_real_T(sp, &r12, 1, &w_emlrtRTEI, true);
    for (c = 0; c <= nc; c++) {
      zi_data[0] = zi->data[3 * c];
      zi_data[1] = zi->data[1 + 3 * c];
      zi_data[2] = zi->data[2 + 3 * c];
      b_b_data[0] = b_data[0];
      b_a_data[0] = a_data[0];
      b_b_data[1] = b_data[1];
      b_a_data[1] = a_data[1];
      b_b_data[2] = b_data[2];
      b_a_data[2] = a_data[2];
      b_b_data[3] = b_data[3];
      b_a_data[3] = a_data[3];
      st.site = &qc_emlrtRSI;
      j_filter(&st, b_b_data, b_a_data, *(real_T (*)[9])&x->data[9 * c], zi_data,
               *(real_T (*)[9])&y->data[9 * c], r12);
      loop_ub = r12->size[0];
      for (i27 = 0; i27 < loop_ub; i27++) {
        zf->data[i27 + 3 * c] = r12->data[i27];
      }
    }

    emxFree_real_T(&r12);
  } else {
    st.site = &pc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      st.site = &ib_emlrtRSI;
      y->data[0] = zi->data[0];
      y->data[1] = zi->data[1];
      y->data[2] = zi->data[2];
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y->data[loop_ub + 3] = 0.0;
      }
    }

    st.site = &oc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    emxInit_real_T(sp, &r13, 2, &ab_emlrtRTEI, true);
    for (c = 0; c <= nc; c++) {
      for (loop_ub = 0; loop_ub < 9; loop_ub++) {
        i28 = 9 - loop_ub;
        naxpy = muIntScalarMin_sint32(i28, 4);
        st.site = &db_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          i27 = loop_ub + j;
          y->data[i27] += x->data[loop_ub] * b_data[j];
        }

        i29 = 8 - loop_ub;
        naxpy = muIntScalarMin_sint32(i29, 3);
        as = -y->data[loop_ub];
        st.site = &cb_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          i27 = (loop_ub + j) + 1;
          y->data[i27] += as * a_data[1 + j];
        }
      }

      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        st.site = &xb_emlrtRSI;
        for (j = 0; j <= loop_ub; j++) {
          zf->data[j] += x->data[loop_ub + 6] * b_data[(j - loop_ub) + 3];
        }
      }

      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        st.site = &vb_emlrtRSI;
        for (j = 0; j <= loop_ub; j++) {
          zf->data[j] += -y->data[loop_ub + 6] * a_data[(j - loop_ub) + 3];
        }
      }
    }

    emxFree_real_T(&r13);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void m_filter(const emlrtStack *sp, real_T b_data[], real_T a_data[], const
              emxArray_real_T *x, const emxArray_real_T *zi, emxArray_real_T *y)
{
  int32_T i30;
  uint32_T sx_idx_1;
  int32_T nc;
  int32_T c;
  real_T b_b_data[4];
  real_T b_a_data[4];
  int32_T k;
  int32_T i31;
  int32_T naxpy;
  int32_T j;
  int32_T i32;
  real_T as;
  int32_T as_tmp;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!compatible_zi_size(x, zi)) {
    emlrtErrorWithMessageIdR2018a(sp, &fc_emlrtRTEI,
      "Coder:MATLAB:filter_invalidInitialConditions",
      "Coder:MATLAB:filter_invalidInitialConditions", 0);
  }

  if (muDoubleScalarIsInf(a_data[0]) || muDoubleScalarIsNaN(a_data[0])) {
    emlrtErrorWithMessageIdR2018a(sp, &gc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
  } else if (a_data[0] == 0.0) {
    emlrtErrorWithMessageIdR2018a(sp, &hc_emlrtRTEI,
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
      "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
  } else {
    if (a_data[0] != 1.0) {
      st.site = &jb_emlrtRSI;
      b_data[0] /= a_data[0];
      b_data[1] /= a_data[0];
      b_data[2] /= a_data[0];
      b_data[3] /= a_data[0];
      a_data[1] /= a_data[0];
      a_data[2] /= a_data[0];
      a_data[3] /= a_data[0];
      a_data[0] = 1.0;
    }
  }

  i30 = y->size[0] * y->size[1];
  y->size[0] = 9;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, y, i30, &w_emlrtRTEI);
  sx_idx_1 = static_cast<uint32_T>(x->size[1]);
  nc = static_cast<int32_T>(sx_idx_1) - 1;
  if (static_cast<int32_T>(sx_idx_1) >= 2) {
    st.site = &tc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      st.site = &sc_emlrtRSI;
      b_b_data[0] = b_data[0];
      b_a_data[0] = a_data[0];
      b_b_data[1] = b_data[1];
      b_a_data[1] = a_data[1];
      b_b_data[2] = b_data[2];
      b_a_data[2] = a_data[2];
      b_b_data[3] = b_data[3];
      b_a_data[3] = a_data[3];
      if (muDoubleScalarIsInf(a_data[0]) || muDoubleScalarIsNaN(a_data[0])) {
        emlrtErrorWithMessageIdR2018a(&st, &gc_emlrtRTEI,
          "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite",
          "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
      } else if (a_data[0] == 0.0) {
        emlrtErrorWithMessageIdR2018a(&st, &hc_emlrtRTEI,
          "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero",
          "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
      } else {
        if (a_data[0] != 1.0) {
          b_b_data[0] = b_data[0] / a_data[0];
          b_b_data[1] = b_data[1] / a_data[0];
          b_b_data[2] = b_data[2] / a_data[0];
          b_b_data[3] = b_data[3] / a_data[0];
          b_a_data[1] = a_data[1] / a_data[0];
          b_a_data[2] = a_data[2] / a_data[0];
          b_a_data[3] = a_data[3] / a_data[0];
          b_a_data[0] = 1.0;
        }
      }

      y->data[9 * c] = zi->data[3 * c];
      y->data[1 + 9 * c] = zi->data[1 + 3 * c];
      y->data[2 + 9 * c] = zi->data[2 + 3 * c];
      for (k = 0; k < 6; k++) {
        y->data[(k + 9 * c) + 3] = 0.0;
      }

      for (k = 0; k < 9; k++) {
        if (9 - k < 4) {
          naxpy = 8 - k;
        } else {
          naxpy = 3;
        }

        as_tmp = k + 9 * c;
        as = x->data[as_tmp];
        for (j = 0; j <= naxpy; j++) {
          i30 = (k + j) + 9 * c;
          y->data[i30] += as * b_b_data[j];
        }

        if (8 - k < 3) {
          naxpy = 7 - k;
        } else {
          naxpy = 2;
        }

        as = -y->data[as_tmp];
        for (j = 0; j <= naxpy; j++) {
          i30 = ((k + j) + 9 * c) + 1;
          y->data[i30] += as * b_a_data[1 + j];
        }
      }
    }
  } else {
    st.site = &pc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      st.site = &ib_emlrtRSI;
      y->data[0] = zi->data[0];
      y->data[1] = zi->data[1];
      y->data[2] = zi->data[2];
      for (k = 0; k < 6; k++) {
        y->data[k + 3] = 0.0;
      }
    }

    st.site = &oc_emlrtRSI;
    if ((1 <= static_cast<int32_T>(sx_idx_1)) && (static_cast<int32_T>(sx_idx_1)
         > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (c = 0; c <= nc; c++) {
      for (k = 0; k < 9; k++) {
        i31 = 9 - k;
        naxpy = muIntScalarMin_sint32(i31, 4);
        st.site = &db_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          i30 = k + j;
          y->data[i30] += x->data[k] * b_data[j];
        }

        i32 = 8 - k;
        naxpy = muIntScalarMin_sint32(i32, 3);
        as = -y->data[k];
        st.site = &cb_emlrtRSI;
        for (j = 0; j < naxpy; j++) {
          i30 = (k + j) + 1;
          y->data[i30] += as * a_data[1 + j];
        }
      }
    }
  }
}

/* End of code generation (filter.cpp) */
