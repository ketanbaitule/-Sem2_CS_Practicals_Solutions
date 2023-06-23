/*
Calculate the power of a number making function
*/
#include <stdio.h>

int power(int num, int pow){
	int i, ans = 1;
	for(i = pow; i > 0; i--)
		ans = ans * num;
	return ans;
}

int main(){
	int n, pow, ans;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter pow: ");
	scanf("%d", &pow);
	ans = power(n, pow);
	printf("%d ^ %d = %d.\n", n, pow, ans);
	return 0;
}