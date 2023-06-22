/*
An electricity board charges the following rates for the use of electricity: 
   For the first 200 units: 80 P per unit
   For the next 100 units: 90 P per unit
   Beyond 300 units: Rs 1.00 per unit
   All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs. 400, then an additional surcharge of 15% of total amount is charged.
   Write a program to read the names of users and number of units consumed and print out the charges with names.
*/
#include <stdio.h>

int main(){
	int unit, to_pay = 100;
	char name[100];

	printf("Name of user: ");
	scanf("%s", &name);
	printf("Unit Consumed: ");
	scanf("%d", &unit);
	if(unit - 200 > 0){
		to_pay += 0.80 * 200;
	}else{
		to_pay += 0.80 * unit;
	}
	unit = unit - 200;
	if (unit - 100 > 0)
	{
		to_pay += 0.90 * 100;
	}else if(unit > 0){
		to_pay += 0.90 * unit;
	}
	unit = unit - 100;
	if (unit > 0)
	{
		to_pay += 1 * unit;
	}
	printf("Bill of %s: Rs %d\n", name, to_pay);
	
	return 0;
}