/*
C Program to Copy a String
*/
#include <stdio.h>
#include <string.h>

int main(){
	char s1[100], s2[100];
	printf("Enter s1: ");
	scanf("%[^\n]", s1);

	strcpy(s2, s1);
	printf("String s1 is %s.\n", s1);
	printf("String s2 copied from s1 is %s.\n", s2);
	return 0;
}