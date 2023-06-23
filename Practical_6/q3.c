/*
Write a program in C to read n number of values in an array and sort array elements using selection sort.
*/
#include <stdio.h>

int main(){
	int arr[999];
	int n, i = 0, j = 0;
	int min, temp;
	printf("Enter n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("Enter arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	
	// Sorting
	for (int i = 0; i < n; i++)
	{
		min = i;
		for(j = i+1; j < n; j++){
			if (arr[j] < arr[min]){
				min = j;
			}
		}
		// Swap
		if (min != i)
		{
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}

	printf("Sorted Array: ");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}