/*
Input the value of 4 variables a, b, c and d and compute the resultant value of following expressions: 
   (a +b) *(c/d)
   (a +b) * c/d
   a + (b *c) /d
*/
#include <stdio.h>

int main(){
	int a, b,c, d;
	printf("Enter a, b, c, d: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("(a +b) *(c/d) = %d.\n", (a +b) *(c/d));
	printf("(a +b) * c/d = %d\n", (a +b) * c / d);
	printf("a + (b *c) /d = %d\n", a + (b *c) /d);
	return 0;
}