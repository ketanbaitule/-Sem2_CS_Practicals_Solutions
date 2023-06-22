/*
Write a program that will read the value of x and evaluate the following function:
   y = 1 => x > 0
   y = 0 => x = 0
   y = -1 => x < 0
   using 
   (c) Conditional Operator
*/
#include <stdio.h>

int main(){
   int x, y;
   printf("Enter x: ");
   scanf("%d", &x);

   y = (x > 0) ? 1 : ((x==0) ? 0 : -1);
   
   printf("Value of y: %d.\n", y);
   return 0;
}