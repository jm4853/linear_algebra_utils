#ifndef _LINALG_H_
#define _LINALG_H_

#define NUM_COLS 3
#define NUM_ROWS 3

void matrix_print(float (*A)[], int cols, int rows);
void zero_matrix(float (*m)[], int, int);
void add(float (*A)[], float (*B)[], float (*sum)[], int cols, int rows);
void add_print(float (*A)[], float (*B)[], float(*sum)[], int cols, int rows);
void mult(float (*A)[], float (*B)[], float (*prod)[], int cols_B, int AB_shared, int rows_A);
void scale(float (*A)[], float scalar, int cols, int rows);
void vector_add(float *A, float *B, float *C, int cols);
void vector_scale(float *A, float s, int cols);

#endif

