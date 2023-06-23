/*
Write a program in C to read n number of values in an array and sort array elements using insertion sort. 
*/
#include <stdio.h>

int main(){
	int arr[999];
	int n, i = 0, j = 0;
	int key;
	printf("Enter n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("Enter arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	
	// Sorting
	for (int i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while(j>=0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}

	printf("Sorted Array: ");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}