/*
Check Armstrong number by making functions
*/
#include <stdio.h>

int get_no_digit(int num){
	int digits = 0;
	while(num > 0){
		digits++;
		num = num / 10;
	}
	return digits;
}

int power(int num, int pow){
	int i, ans = 1;
	for(i = pow; i > 0; i--)
		ans = ans * num;
	return ans;
}

int isArmstrongNo(int num){
	int digits, arm = 0, orig_num = num;
	digits = get_no_digit(num);
	while(num > 0){
		arm += power(num % 10, digits);
		num = num / 10;
	}

	if (orig_num == arm){
		return 1;
	}else{
		return 0;
	}
}

int main()
{
	int num;
	printf("Enter num: ");
	scanf("%d", &num);
	if (isArmstrongNo(num))
	{
		printf("It is an Armstrong No.\n");
	}else{
		printf("It is not an Armstrong No.\n");
	}
	return 0;
}