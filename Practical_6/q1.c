/*
Write a program in C to read n number of values in an array and sort array elements using bubble sort. 
*/
#include <stdio.h>

int main(){
	int arr[999];
	int n, i = 0, j = 0;
	int temp;
	printf("Enter n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("Enter arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	
	// Sorting
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("Sorted Array: ");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}