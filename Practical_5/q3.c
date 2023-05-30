/*
Write a program in C to find the maximum and minimum elements in an array.
*/
#include <stdio.h>

int main(){
	int n, temp, i, max, min;

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

	max = array[0];
	min = array[0];
	for (int i = 0; i < n; ++i)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
		if (array[i] < min)
		{
			min = array[i];
		}
	}

	printf("Max element of the array is %d.\n", max);
	printf("Min element of the array is %d.\n", min);
	return 0;
}