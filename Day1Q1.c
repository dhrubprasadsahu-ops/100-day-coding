//Q1: Write a program to input two numbers and display their sum.//

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>
int main()
{
float firstnum;
float secondnum;
printf("enter first num ");
scanf("%f",&firstnum);
printf("enter second num ");
scanf("%f",&secondnum);

float sum=firstnum+secondnum;
printf("the sum is %f",sum);
return 0;
}   