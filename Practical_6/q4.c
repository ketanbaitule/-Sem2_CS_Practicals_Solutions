/*
Write a program in C for the subtraction of two matrices.
*/
#include <stdio.h>

int main(){
	int row, col, i, j;
	printf("Enter no of rows: ");
	scanf("%d", &row);
	printf("Enter no of cols: ");
	scanf("%d", &col);
	int mat_1[row][col], mat_2[row][col], ans[row][col];
	printf("Enter Mat_1: \n");
	for (i = 0; i < row; ++i){
		for (j = 0; j < col; ++j){
			printf("Enter mat_1[%d][%d]: ",i, j);
			scanf("%d", &mat_1[i][j]);
		}
	}
	printf("Enter Mat_2: \n");
	for (i = 0; i < row; ++i){
		for (j = 0; j < col; ++j){
			printf("Enter mat_2[%d][%d]: ",i, j);
			scanf("%d", &mat_2[i][j]);
		}
	}
	
	for (i = 0; i < row; ++i){
		for (j = 0; j < col; ++j){
			ans[i][j] = mat_2[i][j] - mat_1[i][j];
		}
	}

	printf("Ans Matrix: \n");
	for (i = 0; i < row; ++i){
		printf("[ ");
		for (j = 0; j < col; ++j){
			printf("%d ", ans[i][j]);
		}
		printf("]\n");
	}
	return 0;
}