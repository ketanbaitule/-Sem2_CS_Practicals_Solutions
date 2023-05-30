/*
Take 10 integers from keyboard using loop and print their average value on the screen.  
    c. Use for loop 
*/
#include <stdio.h>

int main(){
	int num, i=1;
	long int sum = 0;
	float average;
	for (i = 1; i <= 10; ++i)
	{
		printf("Enter num %d: ", i);
		scanf("%d", &num);
		sum += num;
	}
	average = sum / 10;
	printf("Average of 10 integers: %f \n", average);
	return 0;
}