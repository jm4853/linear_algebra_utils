#include <stdio.h>
#include <stdlib.h>
#include "linalg.h"


#define EMPTY -999


void
zero_matrix(float (*matrix)[NUM_COLS], int cols, int rows) {
	float (*p)[NUM_COLS];
        int i, j;
	p = matrix;
	for (i = 0; i < NUM_COLS; i++) {
		for (j = 0; j < NUM_ROWS; j++) {
			if ((i < cols) && (j < rows)) {
				p[i][j] = 0;
			}
			else {
				p[i][j] = EMPTY;
			}
		}
	}
}

void
add(float (*A)[NUM_COLS], float (*B)[NUM_COLS], float (*C)[NUM_COLS], int cols, int rows) {
	float (*p)[NUM_COLS];
	int i, j;
	p = C;
	for (i = 0; i < cols; i++) for (j = 0; j < rows; j++) p[i][j] = A[i][j] + B[i][j];
}

void
vector_add(float *A, float *B, float *C, int cols) {
	float (*p);
	int i, j;
	p = C;
	for (i = 0; i < cols; i++) p[i] = A[i] + B[i];
}
void
vector_scale(float *A, float s, int cols) {
	float (*p);
	int i, j;
	p = A;
	for (i = 0; i < cols; i++) p[i] = A[i] * s;
}


void
scale(float (*A)[NUM_COLS], float s, int cols, int rows) {
	float (*p)[NUM_COLS];
	int i, j;
	p = A;
	for (i = 0; i < cols; i++) for (j = 0; j < rows; j++) p[i][j] = A[i][j] * s;	
}


void
mult(float (*A)[NUM_COLS], float (*B)[NUM_COLS], float (*C)[NUM_COLS], int cols_B, int AB_shared, int rows_A) {
	int i, j;
	float (*p)[NUM_COLS];

	for (j = 0; j < cols_B; j++) {
		for (i = 0; i < AB_shared; i++) {
			
		}
	}
}


static void
print_aligned_num(float x) {
	if (x < 0) {
		if (x > -10) printf("%.2f  ", x);
		else printf("%.2f ", x);
	}
	else {
		if (x < 10) printf(" %.2f  ", x);
		else printf(" %.2f ", x);
	}
}

void
matrix_print(float (*A)[NUM_COLS], int cols, int rows) {
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) 
			print_aligned_num(A[j][i]);
		printf("\n");
	}
		
}

void
add_print(float (*A)[NUM_COLS], float (*B)[NUM_COLS], float (*C)[NUM_COLS], int cols, int rows) {
	int i, j;
	add(A, B, C, rows, cols);
	for (i = 0; i < rows; i++) {
		printf("|");
		for (j = 0; j < cols; j++) 
			print_aligned_num(A[j][i]);
		if (i == rows/2) 
			printf("  +  ");
		else
			printf("     ");
		for (j = 0; j < cols; j++) 
			print_aligned_num(B[j][i]);
		if (i == rows/2) 
			printf("  =  ");
		else
			printf("     ");
		for (j = 0; j < cols; j++) 
			print_aligned_num(C[j][i]);
		printf("\n");
		
	}
}
