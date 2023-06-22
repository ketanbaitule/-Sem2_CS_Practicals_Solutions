/*
Write a program to compute and display the sum of all integers that are divisible by 6 but not divisible by 4 and lie between 0 and 100. The program should also count and display the number of such values.
*/
#include <stdio.h>

int main(){
	int sum = 0, count = 0, i = 0;
	printf("Values divisible by 6 but not divisible by 4 and lie between 0 and 100: ");
	for (i = 0; i < 100; i++){
		if (i % 6 == 0 && i % 4 != 0){
			sum+=i;
			count++;
			printf("%d, ", i);
		}
	}
	printf("\nCount of all integer divisible by 6 but not divisible by 4 and lie between 0 and 100: %d.\n", count);
	printf("\nSum of all integer divisible by 6 but not divisible by 4 and lie between 0 and 100: %d.\n", sum);

	return 0;
}