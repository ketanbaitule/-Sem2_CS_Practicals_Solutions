/*
Find the length of a string without using library function.
*/
#include <stdio.h>

int main(){
	int i;
	char s1[100];
	printf("Enter s1: ");
	scanf("%[^\n]", s1);
	for (i = 0; s1[i] != '\0' ; i++);
	printf("Length of string s1: %d.\n", i);
	return 0;
}