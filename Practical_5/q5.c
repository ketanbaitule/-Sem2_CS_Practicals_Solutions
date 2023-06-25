/*
Write a program in C to read n number of values in an array and search an element in that array using binary search. Number is given by user. 
*/
#include <stdio.h>

int main(){
	int n, temp, i, search, low, high, middle, isFound = 0;

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
	low = 0;
	high = n;
	do{
		middle = (low + high)/2;
		if (array[middle] < search )
		{
			low = middle;
		}else if (array[middle] > search )
		{
			high = middle;
		}else{
			isFound = 1;
			break;
		}
	}while(low<high);

	if (isFound == 1)
	{
		printf("Search Element is found at Index %d.\n", middle);
	}else{
		printf("Search Element is not found.\n");
	}

	return 0;
}
