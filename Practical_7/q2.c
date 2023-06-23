/*
Write a program in C to find the sum of the right diagonals of a matrix.
*/
#include <stdio.h>

int main(){
	int n, i, j, sum = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	int mat[n][n];
	printf("Enter mat: \n");
	for (i = 0; i < n; ++i){
		for (j = 0; j < n; ++j){
			printf("Enter mat[%d][%d]: ",i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	for (i = 0; i < n; ++i)
	{
		sum += mat[i][n-i-1];
	}

	printf("Sum of right diagonals of matrix: %d.\n", sum);
	
	return 0;
}