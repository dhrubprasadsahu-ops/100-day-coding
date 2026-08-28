//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main() {
int n,r,sum=0;
printf("enter a num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

while(n>0){
r=n%10;
sum=sum+r;
n=n/10;}

printf("sum of num is %d",sum);

    return 0;
}
