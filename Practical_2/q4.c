/*
Write a ‘C’ program to take as input 3 floating point numbers. The program then outputs the number with largest magnitude (Largest magnitude number is the largest number obtained after ignoring the sign)
*/
#include <stdio.h>

int main(){
	float a,b,c, largest;
	printf("Enter a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	a = (a > 0) ? a : -a;
	b = (b > 0) ? b : -b;
	c = (c > 0) ? c : -c;
	if (a < b)
	{
		largest = (b < c)? c : b;
	}else{
		largest = (a < c)? c : a;
	}

	printf("Largest Magnitude of number is %f.\n", largest);
	return 0;
}