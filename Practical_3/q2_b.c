/*
Write a program that will read the value of x and evaluate the following function:
   y = 1 => x > 0
   y = 0 => x = 0
   y = -1 => x < 0
   using 
   (b) Else if statement
*/
#include <stdio.h>

int main(){
   int x, y;
   printf("Enter x: ");
   scanf("%d", &x);

   if (x > 0){
      y = 1;
   }else if (x == 0){
      y = 0;
   }else{
      y = -1;
   }
   
   printf("Value of y: %d.\n", y);
   return 0;
}