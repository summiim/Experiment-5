/*
EXP 5 TASK 1
Aim: Write an algorithm to find the factorial of a number
using iterative function
NAME:MIRZA SUMAIYA SHAKIL AHMED
UIN:241A014
ROLL NO:14
BRANCH: AI&DS*/
#include<stdio.h>

int factorialRecursive(int num){
    if(num<=1){
        return 1;
        }
return num * factorialRecursive(num-1);
}
int main(){
 int num;
printf("\t\t*** Recursive Factorial Function ***\n\n");
  printf("Enter Number:");
   scanf("%d",&num);
   printf("Factorial of %d is %d",num , factorialRecursive(num));
    return 0;
}
