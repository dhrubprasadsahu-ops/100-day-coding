//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

int main() {
int n;
printf("enter the num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

int fact=1;

for(int i=1;i<=n;i++){
fact=fact*i;}

printf("%d",fact);

    return 0;
}