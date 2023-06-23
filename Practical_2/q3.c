/*
Write a program to read an integer input from the user and print the last two digits of that integer.
*/
#include <stdio.h>

int main(){
	int num;
	printf("Enter Integer: ");
	scanf("%d", &num);
	printf("Last 2 digit of Integer is %d.\n", num % 100);
	return 0;
}