/*
Value of 4 variables a, b, c and d  are as a=10, b=15, c=20, d=30,  compute the resultant value of following expressions: a ! = b && ! (a < c) || b >d 
*/
#include <stdio.h>

int main(){
	int a = 10, b = 15, c = 20, d = 30;
	int res = a != b && !(a < c) || b > d;
	printf("The resultant value is %d.\n", res);
	return 0;
}