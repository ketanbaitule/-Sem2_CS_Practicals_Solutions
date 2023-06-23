/*
Find the frequency of a character in a string 
*/
#include <stdio.h>

int main(){
	int i, freq = 0;
	char s1[100], c;

	printf("Enter String: ");
	fgets(s1, sizeof(s1), stdin);

	printf("Enter char c: ");
	scanf("%c", &c);
	for (i = 0; s1[i] != '\0'; ++i){
		if(s1[i] == c){
			freq++;
		}
	}
	printf("Frequency of character(%c) in string: %d.\n", c, freq);
	return 0;
}