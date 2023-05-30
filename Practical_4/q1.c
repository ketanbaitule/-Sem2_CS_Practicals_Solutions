/*
Program to calculate the sum of10 numbers.  If the user enters a negative number, it's not added to the result. Use continue statement in code.
*/
#include <stdio.h>

int main()
{
	int num, sum = 0;
	for (int i = 1; i <= 10; ++i)
	{
		printf("Enter num %d: ", i);
		scanf("%d", &num);
		if (num < 0)
			continue;
		else{
			sum += num;
		}
	}
	printf("Sum of 10 num entered by user ignoring negative number is %d. \n", sum);
	return 0;
}