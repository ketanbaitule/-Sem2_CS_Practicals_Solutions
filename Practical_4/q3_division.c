/*
Write a program to find greatest common divisor (GCD) or highest common factor (HCF) of given two numbers.
*/
#include <stdio.h>

int main(){
	int num_1, num_2, gcd, divident, temp;
	printf("Enter 2 number: ");
	scanf("%d %d", &num_1, &num_2);
	if (num_1 > num_2)
	{
		num_1 = num_1 + num_2;
		num_2 = num_1 - num_2;
		num_1 = num_1 - num_2;
	}
	gcd = num_1;
	divident = num_2;
	while(divident % gcd != 0){
		temp = gcd;
		gcd = divident % gcd;
		divident = temp;
	}
	printf("HCF of %d and %d is %d.\n", num_1, num_2, gcd);
	return 0;
}