/*
Write a program to read two characters and determine if the first character is capital or small form of the second character.
*/
#include <stdio.h>

int main(){
	char c1, c2;
	printf("Enter c1 and c2: ");
	scanf("%c %c", &c1, &c2);
	if (c2 - c1 == 32 || c2 - c1 == -32){
		printf("The first character is capital or small form of the second character.");
	}else{
		printf("The first character is not a capital or small form of the second character.");
	}
	return 0;
}