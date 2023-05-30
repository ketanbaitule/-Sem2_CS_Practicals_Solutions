/*
Write a program to determine whether or not an integer x is a prime. Use break statement in code.
*/
#include <stdio.h>

int main(){
	int x, is_prime = 1;
	printf("Enter a number: ");
	scanf("%d", &x);
	for (int i = 2; i < x; ++i)
	{
		if (x % i == 0)
		{
			is_prime = 0;
			break;
		}
	}
	if (is_prime == 1)
	{
		printf("Integer %d is a prime number.\n", x);
	}else{
		printf("Integer %d is not a prime number.\n", x);
	}
	return 0;
}