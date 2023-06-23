/*
Write a program in C for the multiplication of two square matrices.
*/
#include <stdio.h>

int main(){
	int n, i, j, k;
	printf("Enter n: ");
	scanf("%d", &n);
	int mat_1[n][n], mat_2[n][n], ans[n][n];
	printf("Enter mat_1: \n");
	for (i = 0; i < n; ++i){
		for (j = 0; j < n; ++j){
			printf("Enter mat_1[%d][%d]: ",i, j);
			scanf("%d", &mat_1[i][j]);
		}
	}
	printf("Enter mat_2: \n");
	for (i = 0; i < n; ++i){
		for (j = 0; j < n; ++j){
			printf("Enter mat_2[%d][%d]: ",i, j);
			scanf("%d", &mat_2[i][j]);
		}
	}
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j){
			ans[i][j] = 0;
			for (k = 0; k < n; ++k)
			{
				ans[i][j] += mat_1[i][k] * mat_2[k][j];
			}
		}
	}

	printf("Ans Matrix ( Mat_1 * Mat_2 ): \n");
	for (i = 0; i < n; ++i){
		printf("[ ");
		for (j = 0; j < n; ++j){
			printf("%d ", ans[i][j]);
		}
		printf("]\n");
	}
	
	return 0;
}