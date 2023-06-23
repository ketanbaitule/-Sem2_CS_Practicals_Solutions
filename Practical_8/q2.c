/*
Remove all characters in a string except alphabets
*/
#include <stdio.h>
#include <string.h>

int main(){
	char s1[100];
	int i, j;
	printf("Enter s1: ");
	scanf("%[^\n]", s1);
	for (i = 0; s1[i] != '\0' ; ++i){
		if (!((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z'))){
			for (j = i; s1[j] != '\0'; ++j){
				s1[j]=s1[j+1];
			}
			i--;
		}
	}
	printf("Updated String s1: %s.\n", s1);
	return 0;
}