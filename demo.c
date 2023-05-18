#include <stdio.h>
#include <linalg.h>


int
main() {
	int i, j;
	float A[][NUM_ROWS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	// float B[][NUM_ROWS] = {{5, 2, 8}, {1, 6, 7}, {9, 3, 4}};
	float B[][NUM_ROWS] = {{1, 0, 0}, {0, 2, 0}, {1, 2, 0}};
	float C[NUM_COLS][NUM_ROWS];

	float D[] = {1, 0, 3};
	float E[] = {0, 1, 2};
	float F[NUM_COLS];
	vector_add(D, E, F, NUM_COLS);
	printf("Vector Addition:\n");
	for (i = 0; i < NUM_COLS; i++) {
		printf("%.2f ", F[i]);
	}

	vector_scale(F, (1.0/2.0), NUM_COLS);
	printf("\n\nVector Scale:\n");
	for (i = 0; i < NUM_COLS; i++) {
		printf("%.2f ", F[i]);
	}

	zero_matrix(C, NUM_COLS, NUM_ROWS);

	printf("\n\nMatrix Multiplication:\n");
	add_print(A, B, C, NUM_COLS, NUM_ROWS);

	printf("\nMatrix Scaling:\n");
	matrix_print(A, NUM_COLS, NUM_ROWS);
	printf("(1/3)                *\n");
	scale(A, (1.0/3.0), NUM_COLS, NUM_ROWS);
	printf("------------------------\n");
	matrix_print(A, NUM_COLS, NUM_ROWS);
	return 0;
}
