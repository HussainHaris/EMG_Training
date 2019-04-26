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
#include "rt_nonfinite.h"
#include "ctrainingRoutineKNN2.h"
#include "filter.h"
#include "ctrainingRoutineKNN2_emxutil.h"

/* Function Definitions */
void b_filter(double b_data[], double a_data[], const double x[18], const double
              zi_data[], double y[18], double zf_data[], int zf_size[1])
{
  double a1;
  int k;
  int naxpy;
  int j;
  int y_tmp;
  a1 = a_data[0];
  if ((!(a_data[0] == 0.0)) && (a_data[0] != 1.0)) {
    for (k = 0; k < 7; k++) {
      b_data[k] /= a1;
    }

    for (k = 0; k < 6; k++) {
      a_data[k + 1] /= a1;
    }

    a_data[0] = 1.0;
  }

  zf_size[0] = 6;
  for (k = 0; k < 6; k++) {
    zf_data[k] = 0.0;
    y[k] = zi_data[k];
  }

  memset(&y[6], 0, 12U * sizeof(double));
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

    a1 = -y[k];
    for (j = 0; j <= naxpy; j++) {
      y_tmp = (k + j) + 1;
      y[y_tmp] += a1 * a_data[j + 1];
    }
  }

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
}

void c_filter(double b_data[], int b_size[1], double a_data[], int a_size[1],
              const emxArray_real_T *x, const double zi_data[], emxArray_real_T *
              y, double zf_data[], int zf_size[1])
{
  int na;
  int nb;
  int ndbuffer;
  double a1;
  int k;
  unsigned int x_idx_0;
  int i3;
  int nx;
  int niccp;
  int naxpy;
  int j;
  na = a_size[0];
  nb = b_size[0];
  if (a_size[0] > b_size[0]) {
    ndbuffer = a_size[0] - 1;
  } else {
    ndbuffer = b_size[0] - 1;
  }

  a1 = a_data[0];
  if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] == 0.0)) &&
      (a_data[0] != 1.0)) {
    for (k = 0; k < nb; k++) {
      b_data[k] /= a1;
    }

    for (k = 2; k <= na; k++) {
      a_data[k - 1] /= a1;
    }

    a_data[0] = 1.0;
  }

  x_idx_0 = static_cast<unsigned int>(x->size[0]);
  i3 = y->size[0];
  y->size[0] = static_cast<int>(x_idx_0);
  emxEnsureCapacity_real_T(y, i3);
  nx = x->size[0];
  zf_size[0] = static_cast<signed char>(ndbuffer);
  niccp = static_cast<signed char>(ndbuffer);
  for (i3 = 0; i3 < niccp; i3++) {
    zf_data[i3] = 0.0;
  }

  niccp = x->size[0];
  if (niccp >= ndbuffer) {
    niccp = ndbuffer;
  }

  for (k = 0; k < niccp; k++) {
    y->data[k] = zi_data[k];
  }

  i3 = niccp + 1;
  for (k = i3; k <= nx; k++) {
    y->data[k - 1] = 0.0;
  }

  for (k = 0; k < nx; k++) {
    niccp = nx - k;
    if (niccp < nb) {
      naxpy = niccp;
    } else {
      naxpy = nb;
    }

    for (j = 0; j < naxpy; j++) {
      i3 = k + j;
      y->data[i3] += x->data[k] * b_data[j];
    }

    niccp--;
    naxpy = na - 1;
    if (niccp < naxpy) {
      naxpy = niccp;
    }

    a1 = -y->data[k];
    for (j = 0; j < naxpy; j++) {
      i3 = (k + j) + 1;
      y->data[i3] += a1 * a_data[j + 1];
    }
  }

  if (x->size[0] < ndbuffer) {
    niccp = ndbuffer - x->size[0];
    for (k = 0; k < niccp; k++) {
      zf_data[k] = zi_data[k + nx];
    }
  }

  if (x->size[0] >= b_size[0]) {
    ndbuffer = (x->size[0] - b_size[0]) + 1;
  } else {
    ndbuffer = 0;
  }

  i3 = x->size[0] - 1;
  for (k = ndbuffer; k <= i3; k++) {
    niccp = nx - k;
    naxpy = (nb - nx) + k;
    for (j = 0; j < naxpy; j++) {
      zf_data[j] += x->data[k] * b_data[niccp + j];
    }
  }

  if (x->size[0] >= a_size[0]) {
    ndbuffer = (x->size[0] - a_size[0]) + 1;
  } else {
    ndbuffer = 0;
  }

  i3 = x->size[0] - 1;
  for (k = ndbuffer; k <= i3; k++) {
    niccp = nx - k;
    naxpy = (na - nx) + k;
    for (j = 0; j < naxpy; j++) {
      zf_data[j] += -y->data[k] * a_data[niccp + j];
    }
  }
}

void d_filter(double b_data[], double a_data[], const emxArray_real_T *x, const
              emxArray_real_T *zi, emxArray_real_T *y, emxArray_real_T *zf)
{
  double a1;
  int k;
  int i5;
  unsigned int sx_idx_1;
  int nc_tmp;
  unsigned int size_zf_idx_1;
  int c;
  int b_c;
  double tmp_data[6];
  double dv0[18];
  int naxpy;
  int c_c;
  int j;
  double as;
  double b_b_data[7];
  double b_a_data[7];
  int b_k;
  int b_naxpy;
  int b_j;
  a1 = a_data[0];
  if ((!(a_data[0] == 0.0)) && (a_data[0] != 1.0)) {
    for (k = 0; k < 7; k++) {
      b_data[k] /= a1;
    }

    for (k = 0; k < 6; k++) {
      a_data[k + 1] /= a1;
    }

    a_data[0] = 1.0;
  }

  i5 = y->size[0] * y->size[1];
  y->size[0] = 18;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(y, i5);
  sx_idx_1 = static_cast<unsigned int>(x->size[1]);
  nc_tmp = static_cast<int>(sx_idx_1) - 1;
  size_zf_idx_1 = static_cast<unsigned int>(x->size[1]);
  i5 = zf->size[0] * zf->size[1];
  zf->size[0] = 6;
  zf->size[1] = static_cast<int>(size_zf_idx_1);
  emxEnsureCapacity_real_T(zf, i5);
  k = 6 * static_cast<int>(size_zf_idx_1);
  for (i5 = 0; i5 < k; i5++) {
    zf->data[i5] = 0.0;
  }

  if (static_cast<int>(sx_idx_1) >= 2) {

#pragma omp parallel for \
 num_threads(omp_get_max_threads()) \
 private(tmp_data,dv0,c_c,as,b_b_data,b_a_data,b_k,b_naxpy,b_j)

    for (b_c = 0; b_c <= nc_tmp; b_c++) {
      for (c_c = 0; c_c < 7; c_c++) {
        b_b_data[c_c] = b_data[c_c];
        b_a_data[c_c] = a_data[c_c];
      }

      as = a_data[0];
      if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] == 0.0))
          && (a_data[0] != 1.0)) {
        for (b_k = 0; b_k < 7; b_k++) {
          b_b_data[b_k] /= as;
        }

        for (b_k = 0; b_k < 6; b_k++) {
          b_a_data[b_k + 1] /= as;
        }

        b_a_data[0] = 1.0;
      }

      for (c_c = 0; c_c < 6; c_c++) {
        tmp_data[c_c] = 0.0;
      }

      for (b_k = 0; b_k < 6; b_k++) {
        dv0[b_k] = zi->data[b_k + 6 * b_c];
      }

      memset(&dv0[6], 0, 12U * sizeof(double));
      for (b_k = 0; b_k < 18; b_k++) {
        if (18 - b_k < 7) {
          b_naxpy = 17 - b_k;
        } else {
          b_naxpy = 6;
        }

        for (b_j = 0; b_j <= b_naxpy; b_j++) {
          c_c = b_k + b_j;
          dv0[c_c] += x->data[b_k + 18 * b_c] * b_b_data[b_j];
        }

        if (17 - b_k < 6) {
          b_naxpy = 16 - b_k;
        } else {
          b_naxpy = 5;
        }

        as = -dv0[b_k];
        for (b_j = 0; b_j <= b_naxpy; b_j++) {
          c_c = (b_k + b_j) + 1;
          dv0[c_c] += as * b_a_data[b_j + 1];
        }
      }

      for (b_k = 0; b_k < 6; b_k++) {
        for (b_j = 0; b_j <= b_k; b_j++) {
          tmp_data[b_j] += x->data[(b_k + 18 * b_c) + 12] * b_b_data[(b_j - b_k)
            + 6];
        }
      }

      for (b_k = 0; b_k < 6; b_k++) {
        for (b_j = 0; b_j <= b_k; b_j++) {
          tmp_data[b_j] += -dv0[b_k + 12] * b_a_data[(b_j - b_k) + 6];
        }
      }

      for (c_c = 0; c_c < 18; c_c++) {
        y->data[c_c + 18 * b_c] = dv0[c_c];
      }

      for (c_c = 0; c_c < 6; c_c++) {
        zf->data[c_c + 6 * b_c] = tmp_data[c_c];
      }
    }
  } else {
    for (c = 0; c <= nc_tmp; c++) {
      for (k = 0; k < 6; k++) {
        y->data[k] = zi->data[k];
      }

      for (k = 0; k < 12; k++) {
        y->data[k + 6] = 0.0;
      }
    }

    for (c = 0; c <= nc_tmp; c++) {
      for (k = 0; k < 18; k++) {
        if (18 - k < 7) {
          naxpy = 17 - k;
        } else {
          naxpy = 6;
        }

        for (j = 0; j <= naxpy; j++) {
          i5 = k + j;
          y->data[i5] += x->data[k] * b_data[j];
        }

        if (17 - k < 6) {
          naxpy = 16 - k;
        } else {
          naxpy = 5;
        }

        a1 = -y->data[k];
        for (j = 0; j <= naxpy; j++) {
          i5 = (k + j) + 1;
          y->data[i5] += a1 * a_data[j + 1];
        }
      }

      for (k = 0; k < 6; k++) {
        for (j = 0; j <= k; j++) {
          zf->data[j] += x->data[k + 12] * b_data[(j - k) + 6];
        }
      }

      for (k = 0; k < 6; k++) {
        for (j = 0; j <= k; j++) {
          zf->data[j] += -y->data[k + 12] * a_data[(j - k) + 6];
        }
      }
    }
  }
}

void e_filter(double b_data[], int b_size[1], double a_data[], int a_size[1],
              const emxArray_real_T *x, const emxArray_real_T *zi,
              emxArray_real_T *y, emxArray_real_T *zf)
{
  int na;
  int nb;
  int ndbuffer;
  double a1;
  int k;
  unsigned int sx_idx_0;
  unsigned int sx_idx_1;
  int i6;
  int nx;
  int nc_tmp;
  int size_zf_idx_1;
  int c;
  emxArray_real_T *r1;
  int b_c;
  double tmp_data[6];
  int b_na;
  int naxpy;
  int lb;
  int j;
  double b_b_data[7];
  double b_a_data[7];
  int i7;
  int u1;
  int b_ndbuffer;
  double as;
  int b_k;
  int i8;
  int i9;
  int b_naxpy;
  int b_j;
  int b_lb;
  na = a_size[0];
  nb = b_size[0];
  if (a_size[0] > b_size[0]) {
    ndbuffer = a_size[0] - 1;
  } else {
    ndbuffer = b_size[0] - 1;
  }

  a1 = a_data[0];
  if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] == 0.0)) &&
      (a_data[0] != 1.0)) {
    for (k = 0; k < nb; k++) {
      b_data[k] /= a1;
    }

    for (k = 2; k <= na; k++) {
      a_data[k - 1] /= a1;
    }

    a_data[0] = 1.0;
  }

  sx_idx_0 = static_cast<unsigned int>(x->size[0]);
  sx_idx_1 = static_cast<unsigned int>(x->size[1]);
  i6 = y->size[0] * y->size[1];
  y->size[0] = static_cast<int>(sx_idx_0);
  y->size[1] = static_cast<int>(sx_idx_1);
  emxEnsureCapacity_real_T(y, i6);
  nx = x->size[0];
  sx_idx_1 = static_cast<unsigned int>(x->size[1]);
  nc_tmp = static_cast<int>(sx_idx_1) - 1;
  size_zf_idx_1 = x->size[1];
  i6 = zf->size[0] * zf->size[1];
  zf->size[0] = ndbuffer;
  zf->size[1] = size_zf_idx_1;
  emxEnsureCapacity_real_T(zf, i6);
  size_zf_idx_1 *= ndbuffer;
  for (i6 = 0; i6 < size_zf_idx_1; i6++) {
    zf->data[i6] = 0.0;
  }

  if (static_cast<int>(sx_idx_1) >= 2) {

#pragma omp parallel \
 num_threads(omp_get_max_threads()) \
 private(r1,tmp_data,b_na,b_b_data,b_a_data,i7,u1,b_ndbuffer,as,b_k,i8,i9,b_naxpy,b_j,b_lb)

    {
      emxInit_real_T(&r1, 1);

#pragma omp for nowait

      for (c = 0; c <= nc_tmp; c++) {
        if (0 <= b_size[0] - 1) {
          memcpy(&b_b_data[0], &b_data[0], (unsigned int)(b_size[0] *
                  static_cast<int>(sizeof(double))));
        }

        if (0 <= a_size[0] - 1) {
          memcpy(&b_a_data[0], &a_data[0], (unsigned int)(a_size[0] *
                  static_cast<int>(sizeof(double))));
        }

        i7 = a_size[0];
        b_na = a_size[0] - 1;
        u1 = b_size[0];
        if (a_size[0] > b_size[0]) {
          b_ndbuffer = a_size[0] - 1;
        } else {
          b_ndbuffer = b_size[0] - 1;
        }

        as = a_data[0];
        if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] ==
              0.0)) && (a_data[0] != 1.0)) {
          for (b_k = 0; b_k < u1; b_k++) {
            b_b_data[b_k] /= as;
          }

          for (b_k = 2; b_k <= b_na + 1; b_k++) {
            b_a_data[b_k - 1] /= as;
          }

          b_a_data[0] = 1.0;
        }

        i8 = x->size[0];
        i9 = r1->size[0];
        r1->size[0] = i8;
        emxEnsureCapacity_real_T(r1, i9);
        i8 = x->size[0];
        b_na = static_cast<signed char>(b_ndbuffer);
        if (0 <= b_na - 1) {
          memset(&tmp_data[0], 0, (unsigned int)(b_na * static_cast<int>(sizeof
                   (double))));
        }

        i9 = x->size[0];
        if (i9 < b_ndbuffer) {
          b_na = x->size[0];
        } else {
          b_na = b_ndbuffer;
        }

        for (b_k = 0; b_k < b_na; b_k++) {
          r1->data[b_k] = zi->data[b_k + zi->size[0] * c];
        }

        i9 = b_na - 1;
        for (b_k = i9 + 2; b_k <= i8; b_k++) {
          r1->data[b_k - 1] = 0.0;
        }

        for (b_k = 0; b_k < i8; b_k++) {
          b_na = i8 - b_k;
          if (b_na < u1) {
            b_naxpy = b_na;
          } else {
            b_naxpy = u1;
          }

          for (b_j = 0; b_j < b_naxpy; b_j++) {
            i9 = b_k + b_j;
            r1->data[i9] += x->data[b_k + x->size[0] * c] * b_b_data[b_j];
          }

          b_na--;
          b_naxpy = i7 - 1;
          if (b_na < b_naxpy) {
            b_naxpy = b_na;
          }

          as = -r1->data[b_k];
          for (b_j = 0; b_j < b_naxpy; b_j++) {
            i9 = (b_k + b_j) + 1;
            r1->data[i9] += as * b_a_data[b_j + 1];
          }
        }

        i9 = x->size[0];
        if (i9 < b_ndbuffer) {
          i9 = x->size[0];
          b_na = b_ndbuffer - i9;
          for (b_k = 0; b_k < b_na; b_k++) {
            tmp_data[b_k] = zi->data[(b_k + i8) + zi->size[0] * c];
          }
        }

        i9 = x->size[0];
        if (i9 >= b_size[0]) {
          i9 = x->size[0];
          b_lb = i9 - b_size[0];
        } else {
          b_lb = -1;
        }

        i9 = x->size[0];
        for (b_k = b_lb + 1; b_k < i9; b_k++) {
          b_na = i8 - b_k;
          b_naxpy = (u1 - i8) + b_k;
          for (b_j = 0; b_j < b_naxpy; b_j++) {
            tmp_data[b_j] += x->data[b_k + x->size[0] * c] * b_b_data[b_na + b_j];
          }
        }

        i9 = x->size[0];
        if (i9 >= a_size[0]) {
          i9 = x->size[0];
          b_lb = i9 - a_size[0];
        } else {
          b_lb = -1;
        }

        i9 = x->size[0];
        for (b_k = b_lb + 1; b_k < i9; b_k++) {
          b_na = i8 - b_k;
          b_naxpy = ((i7 - i8) + b_k) - 1;
          for (b_j = 0; b_j <= b_naxpy; b_j++) {
            tmp_data[b_j] += -r1->data[b_k] * b_a_data[b_na + b_j];
          }
        }

        b_na = r1->size[0];
        for (i7 = 0; i7 < b_na; i7++) {
          y->data[i7 + y->size[0] * c] = r1->data[i7];
        }

        b_na = static_cast<signed char>(b_ndbuffer);
        for (i7 = 0; i7 < b_na; i7++) {
          zf->data[i7 + zf->size[0] * c] = tmp_data[i7];
        }
      }

      emxFree_real_T(&r1);
    }
  } else {
    size_zf_idx_1 = x->size[0];
    if (size_zf_idx_1 >= ndbuffer) {
      size_zf_idx_1 = ndbuffer;
    }

    for (b_c = 0; b_c <= nc_tmp; b_c++) {
      for (k = 0; k < size_zf_idx_1; k++) {
        y->data[k] = zi->data[k];
      }

      i6 = size_zf_idx_1 + 1;
      for (k = i6; k <= nx; k++) {
        y->data[k - 1] = 0.0;
      }
    }

    for (b_c = 0; b_c <= nc_tmp; b_c++) {
      for (k = 0; k < nx; k++) {
        size_zf_idx_1 = nx - k;
        if (size_zf_idx_1 < nb) {
          naxpy = size_zf_idx_1;
        } else {
          naxpy = nb;
        }

        for (j = 0; j < naxpy; j++) {
          i6 = k + j;
          y->data[i6] += x->data[k] * b_data[j];
        }

        size_zf_idx_1--;
        naxpy = na - 1;
        if (size_zf_idx_1 < naxpy) {
          naxpy = size_zf_idx_1;
        }

        a1 = -y->data[k];
        for (j = 0; j < naxpy; j++) {
          i6 = (k + j) + 1;
          y->data[i6] += a1 * a_data[j + 1];
        }
      }

      if (nx < ndbuffer) {
        size_zf_idx_1 = ndbuffer - nx;
        for (k = 0; k < size_zf_idx_1; k++) {
          zf->data[k] = zi->data[k + nx];
        }
      }

      if (nx >= nb) {
        lb = (nx - nb) + 1;
      } else {
        lb = 0;
      }

      i6 = nx - 1;
      for (k = lb; k <= i6; k++) {
        size_zf_idx_1 = nx - k;
        naxpy = (nb - nx) + k;
        for (j = 0; j < naxpy; j++) {
          zf->data[j] += x->data[k] * b_data[size_zf_idx_1 + j];
        }
      }

      if (nx >= na) {
        lb = (nx - na) + 1;
      } else {
        lb = 0;
      }

      i6 = nx - 1;
      for (k = lb; k <= i6; k++) {
        size_zf_idx_1 = nx - k;
        naxpy = (na - nx) + k;
        for (j = 0; j < naxpy; j++) {
          zf->data[j] += -y->data[k] * a_data[size_zf_idx_1 + j];
        }
      }
    }
  }
}

void f_filter(double b_data[], double a_data[], const emxArray_real_T *x, const
              emxArray_real_T *zi, emxArray_real_T *y)
{
  double a1;
  int k;
  int i10;
  unsigned int sx_idx_1;
  int nc_tmp;
  int c;
  int b_c;
  int c_c;
  int naxpy;
  int j;
  double as;
  double b_b_data[7];
  double b_a_data[7];
  int b_k;
  int b_naxpy;
  int b_j;
  a1 = a_data[0];
  if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] == 0.0)) &&
      (a_data[0] != 1.0)) {
    for (k = 0; k < 7; k++) {
      b_data[k] /= a1;
    }

    for (k = 0; k < 6; k++) {
      a_data[k + 1] /= a1;
    }

    a_data[0] = 1.0;
  }

  i10 = y->size[0] * y->size[1];
  y->size[0] = 18;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(y, i10);
  sx_idx_1 = static_cast<unsigned int>(x->size[1]);
  nc_tmp = static_cast<int>(sx_idx_1) - 1;
  if (static_cast<int>(sx_idx_1) >= 2) {

#pragma omp parallel for \
 num_threads(omp_get_max_threads()) \
 private(c_c,as,b_b_data,b_a_data,b_k,b_naxpy,b_j)

    for (b_c = 0; b_c <= nc_tmp; b_c++) {
      for (c_c = 0; c_c < 7; c_c++) {
        b_b_data[c_c] = b_data[c_c];
        b_a_data[c_c] = a_data[c_c];
      }

      as = a_data[0];
      if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] == 0.0))
          && (a_data[0] != 1.0)) {
        for (b_k = 0; b_k < 7; b_k++) {
          b_b_data[b_k] /= as;
        }

        for (b_k = 0; b_k < 6; b_k++) {
          b_a_data[b_k + 1] /= as;
        }

        b_a_data[0] = 1.0;
      }

      for (b_k = 0; b_k < 6; b_k++) {
        y->data[b_k + 18 * b_c] = zi->data[b_k + 6 * b_c];
      }

      for (b_k = 0; b_k < 12; b_k++) {
        y->data[(b_k + 18 * b_c) + 6] = 0.0;
      }

      for (b_k = 0; b_k < 18; b_k++) {
        if (18 - b_k < 7) {
          b_naxpy = 17 - b_k;
        } else {
          b_naxpy = 6;
        }

        for (b_j = 0; b_j <= b_naxpy; b_j++) {
          c_c = (b_k + b_j) + 18 * b_c;
          y->data[c_c] += x->data[b_k + 18 * b_c] * b_b_data[b_j];
        }

        if (17 - b_k < 6) {
          b_naxpy = 16 - b_k;
        } else {
          b_naxpy = 5;
        }

        as = -y->data[b_k + 18 * b_c];
        for (b_j = 0; b_j <= b_naxpy; b_j++) {
          c_c = ((b_k + b_j) + 18 * b_c) + 1;
          y->data[c_c] += as * b_a_data[b_j + 1];
        }
      }
    }
  } else {
    for (c = 0; c <= nc_tmp; c++) {
      for (k = 0; k < 6; k++) {
        y->data[k] = zi->data[k];
      }

      for (k = 0; k < 12; k++) {
        y->data[k + 6] = 0.0;
      }
    }

    for (c = 0; c <= nc_tmp; c++) {
      for (k = 0; k < 18; k++) {
        if (18 - k < 7) {
          naxpy = 17 - k;
        } else {
          naxpy = 6;
        }

        for (j = 0; j <= naxpy; j++) {
          i10 = k + j;
          y->data[i10] += x->data[k] * b_data[j];
        }

        if (17 - k < 6) {
          naxpy = 16 - k;
        } else {
          naxpy = 5;
        }

        a1 = -y->data[k];
        for (j = 0; j <= naxpy; j++) {
          i10 = (k + j) + 1;
          y->data[i10] += a1 * a_data[j + 1];
        }
      }
    }
  }
}

void filter(double b_data[], int b_size[1], double a_data[], int a_size[1],
            const emxArray_real_T *x, const double zi_data[], const int zi_size
            [1], emxArray_real_T *y)
{
  int na;
  int nb;
  int ndbuffer;
  double a1;
  int k;
  unsigned int x_idx_0;
  int i2;
  int nx;
  int niccp;
  int b_zi_size;
  int naxpy;
  na = a_size[0];
  nb = b_size[0];
  if (a_size[0] > b_size[0]) {
    ndbuffer = a_size[0] - 1;
  } else {
    ndbuffer = b_size[0] - 1;
  }

  a1 = a_data[0];
  if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] == 0.0)) &&
      (a_data[0] != 1.0)) {
    for (k = 0; k < nb; k++) {
      b_data[k] /= a1;
    }

    for (k = 2; k <= na; k++) {
      a_data[k - 1] /= a1;
    }

    a_data[0] = 1.0;
  }

  x_idx_0 = static_cast<unsigned int>(x->size[0]);
  i2 = y->size[0];
  y->size[0] = static_cast<int>(x_idx_0);
  emxEnsureCapacity_real_T(y, i2);
  nx = x->size[0];
  niccp = x->size[0];
  if (niccp >= ndbuffer) {
    niccp = ndbuffer;
  }

  if (zi_size[0] == ndbuffer) {
    b_zi_size = 1;
  } else {
    b_zi_size = 2;
  }

  if (b_zi_size == 2) {
    for (k = 0; k < niccp; k++) {
      y->data[k] = zi_data[k];
    }

    i2 = niccp + 1;
    for (k = i2; k <= nx; k++) {
      y->data[k - 1] = 0.0;
    }
  } else {
    for (k = 0; k < niccp; k++) {
      y->data[k] = zi_data[k];
    }

    i2 = niccp + 1;
    for (k = i2; k <= nx; k++) {
      y->data[k - 1] = 0.0;
    }
  }

  for (k = 0; k < nx; k++) {
    niccp = nx - k;
    if (niccp < nb) {
      naxpy = niccp;
    } else {
      naxpy = nb;
    }

    for (ndbuffer = 0; ndbuffer < naxpy; ndbuffer++) {
      i2 = k + ndbuffer;
      y->data[i2] += x->data[k] * b_data[ndbuffer];
    }

    niccp--;
    naxpy = na - 1;
    if (niccp < naxpy) {
      naxpy = niccp;
    }

    a1 = -y->data[k];
    for (ndbuffer = 0; ndbuffer < naxpy; ndbuffer++) {
      i2 = (k + ndbuffer) + 1;
      y->data[i2] += a1 * a_data[ndbuffer + 1];
    }
  }
}

void g_filter(double b_data[], int b_size[1], double a_data[], int a_size[1],
              const emxArray_real_T *x, const emxArray_real_T *zi,
              emxArray_real_T *y)
{
  int na;
  int nb;
  double a1;
  int k;
  unsigned int sx_idx_0;
  unsigned int sx_idx_1;
  int u0;
  int nx;
  int nc_tmp;
  int c;
  int niccp;
  int u1;
  emxArray_real_T *r2;
  int b_c;
  int b_niccp;
  double b_b_data[7];
  int naxpy;
  double b_a_data[7];
  int i11;
  int b_u1;
  int c_u1;
  double as;
  int b_k;
  int i12;
  int i13;
  int b_naxpy;
  na = a_size[0];
  nb = b_size[0];
  a1 = a_data[0];
  if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] == 0.0)) &&
      (a_data[0] != 1.0)) {
    for (k = 0; k < nb; k++) {
      b_data[k] /= a1;
    }

    for (k = 2; k <= na; k++) {
      a_data[k - 1] /= a1;
    }

    a_data[0] = 1.0;
  }

  sx_idx_0 = static_cast<unsigned int>(x->size[0]);
  sx_idx_1 = static_cast<unsigned int>(x->size[1]);
  u0 = y->size[0] * y->size[1];
  y->size[0] = static_cast<int>(sx_idx_0);
  y->size[1] = static_cast<int>(sx_idx_1);
  emxEnsureCapacity_real_T(y, u0);
  nx = x->size[0];
  sx_idx_1 = static_cast<unsigned int>(x->size[1]);
  nc_tmp = static_cast<int>(sx_idx_1) - 1;
  if (static_cast<int>(sx_idx_1) >= 2) {

#pragma omp parallel \
 num_threads(omp_get_max_threads()) \
 private(r2,b_niccp,b_b_data,b_a_data,i11,b_u1,c_u1,as,b_k,i12,i13,b_naxpy)

    {
      emxInit_real_T(&r2, 1);

#pragma omp for nowait

      for (c = 0; c <= nc_tmp; c++) {
        if (0 <= b_size[0] - 1) {
          memcpy(&b_b_data[0], &b_data[0], (unsigned int)(b_size[0] *
                  static_cast<int>(sizeof(double))));
        }

        if (0 <= a_size[0] - 1) {
          memcpy(&b_a_data[0], &a_data[0], (unsigned int)(a_size[0] *
                  static_cast<int>(sizeof(double))));
        }

        i11 = a_size[0];
        b_u1 = b_size[0];
        b_niccp = a_size[0];
        c_u1 = b_size[0];
        if (b_niccp > c_u1) {
          c_u1 = b_niccp;
        }

        as = a_data[0];
        if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] ==
              0.0)) && (a_data[0] != 1.0)) {
          for (b_k = 0; b_k < b_u1; b_k++) {
            b_b_data[b_k] /= as;
          }

          for (b_k = 2; b_k <= i11; b_k++) {
            b_a_data[b_k - 1] /= as;
          }

          b_a_data[0] = 1.0;
        }

        i12 = x->size[0];
        i13 = r2->size[0];
        r2->size[0] = i12;
        emxEnsureCapacity_real_T(r2, i13);
        i12 = x->size[0];
        i13 = x->size[0];
        if (i13 < c_u1 - 1) {
          b_niccp = x->size[0] - 1;
        } else {
          b_niccp = c_u1 - 2;
        }

        for (b_k = 0; b_k <= b_niccp; b_k++) {
          r2->data[b_k] = zi->data[b_k + zi->size[0] * c];
        }

        for (b_k = b_niccp + 2; b_k <= i12; b_k++) {
          r2->data[b_k - 1] = 0.0;
        }

        for (b_k = 0; b_k < i12; b_k++) {
          b_niccp = i12 - b_k;
          if (b_niccp < b_u1) {
            b_naxpy = b_niccp;
          } else {
            b_naxpy = b_u1;
          }

          for (c_u1 = 0; c_u1 < b_naxpy; c_u1++) {
            i13 = b_k + c_u1;
            r2->data[i13] += x->data[b_k + x->size[0] * c] * b_b_data[c_u1];
          }

          b_niccp--;
          b_naxpy = i11 - 1;
          if (b_niccp < b_naxpy) {
            b_naxpy = b_niccp;
          }

          as = -r2->data[b_k];
          for (c_u1 = 0; c_u1 < b_naxpy; c_u1++) {
            i13 = (b_k + c_u1) + 1;
            r2->data[i13] += as * b_a_data[c_u1 + 1];
          }
        }

        b_niccp = r2->size[0];
        for (i11 = 0; i11 < b_niccp; i11++) {
          y->data[i11 + y->size[0] * c] = r2->data[i11];
        }
      }

      emxFree_real_T(&r2);
    }
  } else {
    u0 = x->size[0];
    niccp = a_size[0];
    u1 = b_size[0];
    if (niccp > u1) {
      u1 = niccp;
    }

    niccp = u1 - 1;
    if (u0 < niccp) {
      niccp = u0;
    }

    for (b_c = 0; b_c <= nc_tmp; b_c++) {
      for (k = 0; k < niccp; k++) {
        y->data[k] = zi->data[k];
      }

      u0 = niccp + 1;
      for (k = u0; k <= nx; k++) {
        y->data[k - 1] = 0.0;
      }
    }

    for (b_c = 0; b_c <= nc_tmp; b_c++) {
      for (k = 0; k < nx; k++) {
        u1 = nx - k;
        if (u1 < nb) {
          naxpy = u1;
        } else {
          naxpy = nb;
        }

        for (niccp = 0; niccp < naxpy; niccp++) {
          u0 = k + niccp;
          y->data[u0] += x->data[k] * b_data[niccp];
        }

        u0 = u1 - 1;
        naxpy = na - 1;
        if (u0 < naxpy) {
          naxpy = u0;
        }

        a1 = -y->data[k];
        for (niccp = 0; niccp < naxpy; niccp++) {
          u0 = (k + niccp) + 1;
          y->data[u0] += a1 * a_data[niccp + 1];
        }
      }
    }
  }
}

void h_filter(double b_data[], double a_data[], const double x[9], const double
              zi_data[], double y[9], double zf_data[], int zf_size[1])
{
  int k;
  int naxpy;
  int j;
  int y_tmp;
  double as;
  if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] == 0.0)) &&
      (a_data[0] != 1.0)) {
    b_data[0] /= a_data[0];
    b_data[1] /= a_data[0];
    b_data[2] /= a_data[0];
    b_data[3] /= a_data[0];
    a_data[1] /= a_data[0];
    a_data[2] /= a_data[0];
    a_data[3] /= a_data[0];
    a_data[0] = 1.0;
  }

  zf_size[0] = 3;
  zf_data[0] = 0.0;
  y[0] = zi_data[0];
  zf_data[1] = 0.0;
  y[1] = zi_data[1];
  zf_data[2] = 0.0;
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
      y_tmp = k + j;
      y[y_tmp] += x[k] * b_data[j];
    }

    if (8 - k < 3) {
      naxpy = 7 - k;
    } else {
      naxpy = 2;
    }

    as = -y[k];
    for (j = 0; j <= naxpy; j++) {
      y_tmp = (k + j) + 1;
      y[y_tmp] += as * a_data[j + 1];
    }
  }

  for (k = 0; k < 3; k++) {
    for (j = 0; j <= k; j++) {
      zf_data[j] += x[k + 6] * b_data[(j - k) + 3];
    }
  }

  for (k = 0; k < 3; k++) {
    for (j = 0; j <= k; j++) {
      zf_data[j] += -y[k + 6] * a_data[(j - k) + 3];
    }
  }
}

void i_filter(double b_data[], double a_data[], const double x[9], const double
              zi_data[], double y[9])
{
  int k;
  int naxpy;
  int j;
  int y_tmp;
  double as;
  if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] == 0.0)) &&
      (a_data[0] != 1.0)) {
    b_data[0] /= a_data[0];
    b_data[1] /= a_data[0];
    b_data[2] /= a_data[0];
    b_data[3] /= a_data[0];
    a_data[1] /= a_data[0];
    a_data[2] /= a_data[0];
    a_data[3] /= a_data[0];
    a_data[0] = 1.0;
  }

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
      y_tmp = k + j;
      y[y_tmp] += x[k] * b_data[j];
    }

    if (8 - k < 3) {
      naxpy = 7 - k;
    } else {
      naxpy = 2;
    }

    as = -y[k];
    for (j = 0; j <= naxpy; j++) {
      y_tmp = (k + j) + 1;
      y[y_tmp] += as * a_data[j + 1];
    }
  }
}

void j_filter(double b_data[], double a_data[], const emxArray_real_T *x, const
              emxArray_real_T *zi, emxArray_real_T *y, emxArray_real_T *zf)
{
  int i18;
  unsigned int sx_idx_1;
  int nc_tmp;
  unsigned int size_zf_idx_1;
  int loop_ub;
  int c;
  int k;
  double tmp_data[3];
  int tmp_size[1];
  double dv1[9];
  int naxpy;
  int j;
  int b_c;
  double zi_data[3];
  double as;
  int zi_data_tmp;
  double b_b_data[4];
  double b_a_data[4];
  int i19;
  if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] == 0.0)) &&
      (a_data[0] != 1.0)) {
    b_data[0] /= a_data[0];
    b_data[1] /= a_data[0];
    b_data[2] /= a_data[0];
    b_data[3] /= a_data[0];
    a_data[1] /= a_data[0];
    a_data[2] /= a_data[0];
    a_data[3] /= a_data[0];
    a_data[0] = 1.0;
  }

  i18 = y->size[0] * y->size[1];
  y->size[0] = 9;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(y, i18);
  sx_idx_1 = static_cast<unsigned int>(x->size[1]);
  nc_tmp = static_cast<int>(sx_idx_1) - 1;
  size_zf_idx_1 = static_cast<unsigned int>(x->size[1]);
  i18 = zf->size[0] * zf->size[1];
  zf->size[0] = 3;
  zf->size[1] = static_cast<int>(size_zf_idx_1);
  emxEnsureCapacity_real_T(zf, i18);
  loop_ub = 3 * static_cast<int>(size_zf_idx_1);
  for (i18 = 0; i18 < loop_ub; i18++) {
    zf->data[i18] = 0.0;
  }

  if (static_cast<int>(sx_idx_1) >= 2) {

#pragma omp parallel for \
 num_threads(omp_get_max_threads()) \
 private(tmp_data,tmp_size,dv1,b_c,zi_data,zi_data_tmp,b_b_data,b_a_data,i19)

    for (c = 0; c <= nc_tmp; c++) {
      zi_data[0] = zi->data[3 * c];
      b_c = 1 + 3 * c;
      zi_data[1] = zi->data[b_c];
      zi_data_tmp = 2 + 3 * c;
      zi_data[2] = zi->data[zi_data_tmp];
      b_b_data[0] = b_data[0];
      b_a_data[0] = a_data[0];
      b_b_data[1] = b_data[1];
      b_a_data[1] = a_data[1];
      b_b_data[2] = b_data[2];
      b_a_data[2] = a_data[2];
      b_b_data[3] = b_data[3];
      b_a_data[3] = a_data[3];
      h_filter(b_b_data, b_a_data, *(double (*)[9])&x->data[9 * c], zi_data, dv1,
               tmp_data, tmp_size);
      for (i19 = 0; i19 < 9; i19++) {
        y->data[i19 + 9 * c] = dv1[i19];
      }

      zf->data[3 * c] = tmp_data[0];
      zf->data[b_c] = tmp_data[1];
      zf->data[zi_data_tmp] = tmp_data[2];
    }
  } else {
    for (loop_ub = 0; loop_ub <= nc_tmp; loop_ub++) {
      y->data[0] = zi->data[0];
      y->data[1] = zi->data[1];
      y->data[2] = zi->data[2];
      for (k = 0; k < 6; k++) {
        y->data[k + 3] = 0.0;
      }
    }

    for (loop_ub = 0; loop_ub <= nc_tmp; loop_ub++) {
      for (k = 0; k < 9; k++) {
        if (9 - k < 4) {
          naxpy = 8 - k;
        } else {
          naxpy = 3;
        }

        for (j = 0; j <= naxpy; j++) {
          i18 = k + j;
          y->data[i18] += x->data[k] * b_data[j];
        }

        if (8 - k < 3) {
          naxpy = 7 - k;
        } else {
          naxpy = 2;
        }

        as = -y->data[k];
        for (j = 0; j <= naxpy; j++) {
          i18 = (k + j) + 1;
          y->data[i18] += as * a_data[j + 1];
        }
      }

      for (k = 0; k < 3; k++) {
        for (j = 0; j <= k; j++) {
          zf->data[j] += x->data[k + 6] * b_data[(j - k) + 3];
        }
      }

      for (k = 0; k < 3; k++) {
        for (j = 0; j <= k; j++) {
          zf->data[j] += -y->data[k + 6] * a_data[(j - k) + 3];
        }
      }
    }
  }
}

void k_filter(double b_data[], double a_data[], const emxArray_real_T *x, const
              emxArray_real_T *zi, emxArray_real_T *y)
{
  int i20;
  unsigned int sx_idx_1;
  int nc_tmp;
  int c;
  int b_c;
  int k;
  int naxpy;
  double zi_data[3];
  int j;
  double b_b_data[4];
  double b_a_data[4];
  double as;
  if ((!rtIsInf(a_data[0])) && (!rtIsNaN(a_data[0])) && (!(a_data[0] == 0.0)) &&
      (a_data[0] != 1.0)) {
    b_data[0] /= a_data[0];
    b_data[1] /= a_data[0];
    b_data[2] /= a_data[0];
    b_data[3] /= a_data[0];
    a_data[1] /= a_data[0];
    a_data[2] /= a_data[0];
    a_data[3] /= a_data[0];
    a_data[0] = 1.0;
  }

  i20 = y->size[0] * y->size[1];
  y->size[0] = 9;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(y, i20);
  sx_idx_1 = static_cast<unsigned int>(x->size[1]);
  nc_tmp = static_cast<int>(sx_idx_1) - 1;
  if (static_cast<int>(sx_idx_1) >= 2) {

#pragma omp parallel for \
 num_threads(omp_get_max_threads()) \
 private(zi_data,b_b_data,b_a_data)

    for (b_c = 0; b_c <= nc_tmp; b_c++) {
      zi_data[0] = zi->data[3 * b_c];
      zi_data[1] = zi->data[1 + 3 * b_c];
      zi_data[2] = zi->data[2 + 3 * b_c];
      b_b_data[0] = b_data[0];
      b_a_data[0] = a_data[0];
      b_b_data[1] = b_data[1];
      b_a_data[1] = a_data[1];
      b_b_data[2] = b_data[2];
      b_a_data[2] = a_data[2];
      b_b_data[3] = b_data[3];
      b_a_data[3] = a_data[3];
      i_filter(b_b_data, b_a_data, *(double (*)[9])&x->data[9 * b_c], zi_data,
               *(double (*)[9])&y->data[9 * b_c]);
    }
  } else {
    for (c = 0; c <= nc_tmp; c++) {
      y->data[0] = zi->data[0];
      y->data[1] = zi->data[1];
      y->data[2] = zi->data[2];
      for (k = 0; k < 6; k++) {
        y->data[k + 3] = 0.0;
      }
    }

    for (c = 0; c <= nc_tmp; c++) {
      for (k = 0; k < 9; k++) {
        if (9 - k < 4) {
          naxpy = 8 - k;
        } else {
          naxpy = 3;
        }

        for (j = 0; j <= naxpy; j++) {
          i20 = k + j;
          y->data[i20] += x->data[k] * b_data[j];
        }

        if (8 - k < 3) {
          naxpy = 7 - k;
        } else {
          naxpy = 2;
        }

        as = -y->data[k];
        for (j = 0; j <= naxpy; j++) {
          i20 = (k + j) + 1;
          y->data[i20] += as * a_data[j + 1];
        }
      }
    }
  }
}

/* End of code generation (filter.cpp) */
