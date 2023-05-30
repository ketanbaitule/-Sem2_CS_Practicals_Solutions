/*
Write a program to find greatest common divisor (GCD) or highest common factor (HCF) of given two numbers.
*/
#include <stdio.h>

int main(){
	int num_1, num_2, gcd = 1;
	printf("Enter 2 number: ");
	scanf("%d %d", &num_1, &num_2);
	for (int i = 2; i <= num_1 && i <= num_2 ; ++i)
	{
		if ((num_1 % i == 0) && (num_2 % i == 0))
		{
			gcd = i;
		}
	}
	printf("HCF of %d and %d is %d.\n", num_1, num_2, gcd);
	return 0;
}