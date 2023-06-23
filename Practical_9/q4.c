/*
Calculate the factorial of a number making recursion function
*/
#include <stdio.h>

int fact(int num){
	if (num > 1)
		return num * fact(num - 1);
	return 1;
}

int main(){
	int n, ans;
	printf("Enter n: ");
	scanf("%d", &n);
	ans = fact(n);
	printf("Factorial of %d.: %d.\n", n, ans);
	return 0;
}