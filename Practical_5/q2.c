/*
Write a program in C to find the sum of all elements of the array.
*/
#include <stdio.h>

int main(){
	int n, temp, i, sum = 0;

	// Create Array
	printf("Enter n: ");
	scanf("%d", &n);
	int array[n];
	for (i = 0; i < n; ++i)
	{
		printf("Enter Array[%d]: ", i);
		scanf("%d", &temp);
		array[i] = temp;
	}

	// Sum
	for (int i = 0; i < n; ++i)
	{
		sum+=array[i];
	}

	printf("Sum of all elements in array is %d.\n", sum);

	return 0;
}