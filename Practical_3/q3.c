/*
Using Switch case block, input the names of the month from the user and display the corresponding number of days in that month. 
*/
#include <stdio.h>
int main(){
	int month;
	int days;
	printf("Enter Month No. (1 - 12): ");
	scanf("%d", &month);

	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("No of days: 31.\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("No of days: 30.\n");
			break;
		case 2:
			printf("No. of days: 28 or 29(if leap year).\n");
			break;
		default:
			printf("Invalid Month. pls input month in Title Case. eg. April, May, June... \n");
			break;
	}
	
	return 0;
}