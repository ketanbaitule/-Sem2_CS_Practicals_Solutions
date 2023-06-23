/*
Find the sum of natural numbers making recursion function
*/
#include <stdio.h>

int sum(int num){
	if (num > 0)
		return num + sum(num - 1);
	return num;
}

int main(){
	int n, ans;
	printf("Enter n: ");
	scanf("%d", &n);
	ans = sum(n);
	printf("Sum of %d natural no.: %d.\n", n, ans);
	return 0;
}