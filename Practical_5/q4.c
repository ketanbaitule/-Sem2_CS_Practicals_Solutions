/*
Write a program in C to read n number of values in an array and search an element in that array using linear search. Number is given by user.
*/
#include <stdio.h>

int main(){
	int n, temp, i, search, isFound = 0;

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

	printf("Enter Search Element: ");
	scanf("%d", &search);

	for (int i = 0; i < n; ++i)
	{
		if (array[i] == search)
		{
			isFound = 1;
			printf("Search Element is found at index: %d\n", i);
		}
	}
	if (isFound == 0)
	{
		printf("Cannot find Search Element in array.\n");
	}

	return 0;
}