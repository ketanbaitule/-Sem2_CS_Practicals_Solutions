/*
Write a program in C to read n number of values in an array and reverse  the values of array, display them.
*/
#include <stdio.h>

int main(){
	int n, temp, i;
	printf("Enter n: ");
	scanf("%d", &n);
	int array[n];
	for (i = 0; i < n; ++i)
	{
		printf("Enter Array[%d]: ", i);
		scanf("%d", &temp);
		array[i] = temp;
	}

	for (i = 0; i < n/2; ++i)
	{
		temp = array[i];
		array[i] = array[n - 1 - i];
		array[n - 1 - i] = temp;
	}

	printf("Reverse Array: ");
	for (i = 0; i < n; ++i)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
	return 0;
}