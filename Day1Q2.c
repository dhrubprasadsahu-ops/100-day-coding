//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.//

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

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
float diff=firstnum-secondnum;
float product=firstnum*secondnum;
float quotient=firstnum/secondnum;
printf("the sum is %f,the diff is %f,the product is %f,the quotient is %f",sum,diff,product,quotient);
return 0;
}     