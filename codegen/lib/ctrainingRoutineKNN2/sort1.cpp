/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort1.cpp
 *
 * Code generation for function 'sort1'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "sort1.h"
#include "sortIdx.h"

/* Function Definitions */
void sort(double x[250])
{
  int idx[250];
  double x4[4];
  unsigned char idx4[4];
  double xwork[250];
  int nNaNs;
  int ib;
  int k;
  signed char perm[4];
  int i3;
  int quartetOffset;
  int i2;
  int iwork[250];
  int i4;
  double d3;
  double d4;
  memset(&idx[0], 0, 250U * sizeof(int));
  x4[0] = 0.0;
  idx4[0] = 0U;
  x4[1] = 0.0;
  idx4[1] = 0U;
  x4[2] = 0.0;
  idx4[2] = 0U;
  x4[3] = 0.0;
  idx4[3] = 0U;
  memset(&xwork[0], 0, 250U * sizeof(double));
  nNaNs = 0;
  ib = 0;
  for (k = 0; k < 250; k++) {
    if (rtIsNaN(x[k])) {
      idx[249 - nNaNs] = k + 1;
      xwork[249 - nNaNs] = x[k];
      nNaNs++;
    } else {
      ib++;
      idx4[ib - 1] = static_cast<unsigned char>((k + 1));
      x4[ib - 1] = x[k];
      if (ib == 4) {
        quartetOffset = k - nNaNs;
        if (x4[0] <= x4[1]) {
          ib = 1;
          i2 = 2;
        } else {
          ib = 2;
          i2 = 1;
        }

        if (x4[2] <= x4[3]) {
          i3 = 3;
          i4 = 4;
        } else {
          i3 = 4;
          i4 = 3;
        }

        d3 = x4[ib - 1];
        d4 = x4[i3 - 1];
        if (d3 <= d4) {
          d3 = x4[i2 - 1];
          if (d3 <= d4) {
            perm[0] = static_cast<signed char>(ib);
            perm[1] = static_cast<signed char>(i2);
            perm[2] = static_cast<signed char>(i3);
            perm[3] = static_cast<signed char>(i4);
          } else if (d3 <= x4[i4 - 1]) {
            perm[0] = static_cast<signed char>(ib);
            perm[1] = static_cast<signed char>(i3);
            perm[2] = static_cast<signed char>(i2);
            perm[3] = static_cast<signed char>(i4);
          } else {
            perm[0] = static_cast<signed char>(ib);
            perm[1] = static_cast<signed char>(i3);
            perm[2] = static_cast<signed char>(i4);
            perm[3] = static_cast<signed char>(i2);
          }
        } else {
          d4 = x4[i4 - 1];
          if (d3 <= d4) {
            if (x4[i2 - 1] <= d4) {
              perm[0] = static_cast<signed char>(i3);
              perm[1] = static_cast<signed char>(ib);
              perm[2] = static_cast<signed char>(i2);
              perm[3] = static_cast<signed char>(i4);
            } else {
              perm[0] = static_cast<signed char>(i3);
              perm[1] = static_cast<signed char>(ib);
              perm[2] = static_cast<signed char>(i4);
              perm[3] = static_cast<signed char>(i2);
            }
          } else {
            perm[0] = static_cast<signed char>(i3);
            perm[1] = static_cast<signed char>(i4);
            perm[2] = static_cast<signed char>(ib);
            perm[3] = static_cast<signed char>(i2);
          }
        }

        i4 = perm[0] - 1;
        idx[quartetOffset - 3] = idx4[i4];
        ib = perm[1] - 1;
        idx[quartetOffset - 2] = idx4[ib];
        i2 = perm[2] - 1;
        idx[quartetOffset - 1] = idx4[i2];
        i3 = perm[3] - 1;
        idx[quartetOffset] = idx4[i3];
        x[quartetOffset - 3] = x4[i4];
        x[quartetOffset - 2] = x4[ib];
        x[quartetOffset - 1] = x4[i2];
        x[quartetOffset] = x4[i3];
        ib = 0;
      }
    }
  }

  if (ib > 0) {
    perm[1] = 0;
    perm[2] = 0;
    perm[3] = 0;
    if (ib == 1) {
      perm[0] = 1;
    } else if (ib == 2) {
      if (x4[0] <= x4[1]) {
        perm[0] = 1;
        perm[1] = 2;
      } else {
        perm[0] = 2;
        perm[1] = 1;
      }
    } else if (x4[0] <= x4[1]) {
      if (x4[1] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 2;
        perm[2] = 3;
      } else if (x4[0] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 3;
        perm[2] = 2;
      } else {
        perm[0] = 3;
        perm[1] = 1;
        perm[2] = 2;
      }
    } else if (x4[0] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 1;
      perm[2] = 3;
    } else if (x4[1] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 3;
      perm[2] = 1;
    } else {
      perm[0] = 3;
      perm[1] = 2;
      perm[2] = 1;
    }

    for (k = 0; k < ib; k++) {
      i4 = ((k - nNaNs) - ib) + 250;
      idx[i4] = idx4[perm[k] - 1];
      x[i4] = x4[perm[k] - 1];
    }
  }

  ib = (nNaNs >> 1) + 250;
  for (k = 0; k <= ib - 251; k++) {
    i3 = (k - nNaNs) + 250;
    i2 = idx[i3];
    idx[i3] = idx[249 - k];
    idx[249 - k] = i2;
    x[i3] = xwork[249 - k];
    x[249 - k] = xwork[i3];
  }

  if ((nNaNs & 1) != 0) {
    ib -= nNaNs;
    x[ib] = xwork[ib];
  }

  if (250 - nNaNs > 1) {
    memset(&iwork[0], 0, 250U * sizeof(int));
    i4 = (250 - nNaNs) >> 2;
    i2 = 4;
    while (i4 > 1) {
      if ((i4 & 1) != 0) {
        i4--;
        ib = i2 * i4;
        i3 = 250 - (nNaNs + ib);
        if (i3 > i2) {
          merge(idx, x, ib, i2, i3 - i2, iwork, xwork);
        }
      }

      ib = i2 << 1;
      i4 >>= 1;
      for (k = 0; k < i4; k++) {
        merge(idx, x, k * ib, i2, i2, iwork, xwork);
      }

      i2 = ib;
    }

    if (250 - nNaNs > i2) {
      merge(idx, x, 0, i2, 250 - (nNaNs + i2), iwork, xwork);
    }
  }
}

/* End of code generation (sort1.cpp) */
