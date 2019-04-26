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
#include <cmath>
#include <string.h>
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "ctrainingRoutineKNN2_emxutil.h"
#include "sort1.h"
#include "sqrt.h"
#include "mean.h"
#include "power.h"
#include "filtfilt.h"

/* Function Definitions */
void ctrainingRoutineKNN2(const emxArray_real_T *dW, double F[9920])
{
  double dWF[750];
  double sigRMS[750];
  int i0;
  emxArray_real_T *x;
  emxArray_real_T *b_dW;
  int ix;
  emxArray_real_T *FILT_FULL;
  int ia;
  int i;
  int j;
  double RMS[9920];
  double CLASS[992];
  double b_RMS[2976];
  double sigRMSIntegral[2976];
  double MAX[2976];
  double b_dWF[259];
  double y[250];
  double S[259];
  int b_index;
  double mtmp;
  static const unsigned char uv0[250] = { 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U,
    10U, 11U, 12U, 13U, 14U, 15U, 16U, 17U, 18U, 19U, 20U, 21U, 22U, 23U, 24U,
    25U, 26U, 27U, 28U, 29U, 30U, 31U, 32U, 33U, 34U, 35U, 36U, 37U, 38U, 39U,
    40U, 41U, 42U, 43U, 44U, 45U, 46U, 47U, 48U, 49U, 50U, 51U, 52U, 53U, 54U,
    55U, 56U, 57U, 58U, 59U, 60U, 61U, 62U, 63U, 64U, 65U, 66U, 67U, 68U, 69U,
    70U, 71U, 72U, 73U, 74U, 75U, 76U, 77U, 78U, 79U, 80U, 81U, 82U, 83U, 84U,
    85U, 86U, 87U, 88U, 89U, 90U, 91U, 92U, 93U, 94U, 95U, 96U, 97U, 98U, 99U,
    100U, 101U, 102U, 103U, 104U, 105U, 106U, 107U, 108U, 109U, 110U, 111U, 112U,
    113U, 114U, 115U, 116U, 117U, 118U, 119U, 120U, 121U, 122U, 123U, 124U, 125U,
    126U, 127U, 128U, 129U, 130U, 131U, 132U, 133U, 134U, 135U, 136U, 137U, 138U,
    139U, 140U, 141U, 142U, 143U, 144U, 145U, 146U, 147U, 148U, 149U, 150U, 151U,
    152U, 153U, 154U, 155U, 156U, 157U, 158U, 159U, 160U, 161U, 162U, 163U, 164U,
    165U, 166U, 167U, 168U, 169U, 170U, 171U, 172U, 173U, 174U, 175U, 176U, 177U,
    178U, 179U, 180U, 181U, 182U, 183U, 184U, 185U, 186U, 187U, 188U, 189U, 190U,
    191U, 192U, 193U, 194U, 195U, 196U, 197U, 198U, 199U, 200U, 201U, 202U, 203U,
    204U, 205U, 206U, 207U, 208U, 209U, 210U, 211U, 212U, 213U, 214U, 215U, 216U,
    217U, 218U, 219U, 220U, 221U, 222U, 223U, 224U, 225U, 226U, 227U, 228U, 229U,
    230U, 231U, 232U, 233U, 234U, 235U, 236U, 237U, 238U, 239U, 240U, 241U, 242U,
    243U, 244U, 245U, 246U, 247U, 248U, 249U, 250U };

  int S_size_tmp;
  int S_size[1];
  static const double c[250] = { 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
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

  double d0;
  boolean_T exitg1;

  /*  */
  /*  Inputs: */
  /*  dW = data array : [4 x 30000] */
  /*  Outputs */
  /*  P = [11 x 1] Contains double size parameters */
  /*  .Index..,1....2....3....4....5....6....7..% */
  /*  2Hz High Pass: */
  /* window separation */
  /* Other var decs: */
  memset(&dWF[0], 0, 750U * sizeof(double));
  memset(&sigRMS[0], 0, 750U * sizeof(double));

  /*  average out data from "0" class  */
  /*  FILT ENTIRE SIG?: */
  i0 = dW->size[0];
  emxInit_real_T(&x, 2);
  if (i0 == 0) {
    x->size[0] = 0;
    x->size[1] = 0;
  } else {
    emxInit_real_T(&b_dW, 2);
    ix = dW->size[0];
    i0 = b_dW->size[0] * b_dW->size[1];
    b_dW->size[0] = ix;
    b_dW->size[1] = 3;
    emxEnsureCapacity_real_T(b_dW, i0);
    for (i0 = 0; i0 < 3; i0++) {
      for (ia = 0; ia < ix; ia++) {
        b_dW->data[ia + b_dW->size[0] * i0] = dW->data[ia + dW->size[0] * i0];
      }
    }

    efiltfilt(b_dW, x);
    emxFree_real_T(&b_dW);
  }

  emxInit_real_T(&FILT_FULL, 2);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    FILT_FULL->size[0] = 0;
    FILT_FULL->size[1] = 0;
  } else {
    b_efiltfilt(x, FILT_FULL);
  }

  emxFree_real_T(&x);
  for (i = 0; i < 3; i++) {
    /* select chunk of 250: */
    for (j = 0; j < 992; j++) {
      i0 = 30 * j;
      for (ia = 0; ia < 250; ia++) {
        dWF[ia + 250 * i] = FILT_FULL->data[(ia + i0) + FILT_FULL->size[0] * i];
      }

      /*  CALCULATE RMS */
      /*  Zeropad signal */
      /*  Square the samples */
      for (i0 = 0; i0 < 250; i0++) {
        y[i0] = 0.0;
        b_dWF[i0] = dWF[i0 + 250 * i];
      }

      memset(&b_dWF[250], 0, 9U * sizeof(double));
      power(b_dWF, S);
      b_index = -1;
      for (ix = 0; ix < 250; ix++) {
        b_index++;

        /*  Average and take the square root of each window */
        if (uv0[ix] > uv0[ix] + 9) {
          i0 = 0;
          ia = -1;
        } else {
          i0 = ix;
          ia = ix + 9;
        }

        S_size_tmp = ia - i0;
        S_size[0] = S_size_tmp + 1;
        for (ia = 0; ia <= S_size_tmp; ia++) {
          b_dWF[ia] = S[i0 + ia];
        }

        y[b_index] = mean(b_dWF, S_size);
        b_sqrt(&y[b_index]);
      }

      for (i0 = 0; i0 < 250; i0++) {
        sigRMS[i + 3 * i0] = y[i0];
      }

      mtmp = 0.0;
      ix = 0;
      for (b_index = 0; b_index < 250; b_index++) {
        S_size_tmp = 1 + b_index;
        for (ia = S_size_tmp; ia <= S_size_tmp; ia++) {
          mtmp += sigRMS[i + 3 * (ia - 1)] * c[ix];
        }

        ix++;
        d0 = dWF[b_index + 250 * i];
        y[b_index] = d0 * d0;
      }

      b_index = i + 3 * j;
      sigRMSIntegral[b_index] = mtmp;
      mtmp = y[0];
      for (ia = 0; ia < 249; ia++) {
        mtmp += y[ia + 1];
      }

      b_RMS[b_index] = std::sqrt(mtmp / 250.0);
      d0 = dWF[250 * i];
      if (!rtIsNaN(d0)) {
        ix = 1;
      } else {
        ix = 0;
        ia = 2;
        exitg1 = false;
        while ((!exitg1) && (ia < 251)) {
          if (!rtIsNaN(dWF[(ia + 250 * i) - 1])) {
            ix = ia;
            exitg1 = true;
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

      i0 = 30 * j;
      for (ia = 0; ia < 250; ia++) {
        y[ia] = dW->data[(ia + i0) + dW->size[0] * 3];
      }

      sort(y);
      CLASS[j] = y[0];
      ix = 1;
      mtmp = y[0];
      b_index = 1;
      for (ia = 0; ia < 249; ia++) {
        d0 = y[ia + 1];
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
    }
  }

  emxFree_real_T(&FILT_FULL);
  for (i0 = 0; i0 < 3; i0++) {
    for (ia = 0; ia < 992; ia++) {
      ix = i0 + 3 * ia;
      RMS[ia + 992 * i0] = b_RMS[ix];
      RMS[ia + 992 * (i0 + 3)] = sigRMSIntegral[ix];
      RMS[ia + 992 * (i0 + 6)] = MAX[ix];
    }
  }

  memcpy(&RMS[8928], &CLASS[0], 992U * sizeof(double));
  memcpy(&F[0], &RMS[0], 9920U * sizeof(double));
}

/* End of code generation (ctrainingRoutineKNN2.cpp) */
