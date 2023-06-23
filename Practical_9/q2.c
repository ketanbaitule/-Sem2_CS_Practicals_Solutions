/*
Check prime number making function
*/
#include <stdio.h>

int isPrimeNo(int num){
	int i, isPrime = 1;
	for (i = 2; i < num; ++i){
		if (num % i == 0){
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}

int main(){
	int num;
	printf("Enter num: ");
	scanf("%d", &num);
	if (isPrimeNo(num) == 1)
	{
		printf("It is Prime No.\n");
	}else{
		printf("It is not a Prime no.\n");
	}
	return 0;
}