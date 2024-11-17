/*
EXP 5 TASK 1
Aim: Write an algorithm to find the factorial of a number
using iterative function
NAME:MIRZA SUMAIYA SHAKIL AHMED
UIN:241A014
ROLL NO:14
BRANCH: AI&DS*/
#include<stdio.h>

int factorialIterative(int num){
  int prod = 1;
   for(int i =1;i<=num;i++){
    prod*=i;
   }

   return prod;
}

int main(){
   int num;

   printf("\t\t***Iterative Factorial Function ***\n\n");

   printf("Enter Number:");
   scanf("%d",&num);

   printf("Factorial of %d is %d",num , factorialIterative(num));
    return 0;
}
