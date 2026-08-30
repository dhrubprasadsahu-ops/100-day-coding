//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
int n,r,sum=0,on;
printf("enter a num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

int arr[]={1,1,2,6,24,120,720,5040,40320,362880};
on=n;
while(n>0){
r=n%10;
sum=sum+arr[r];
n=n/10;}

if(on==sum) printf("strong number");
else printf("not a strong number");

    return 0;
}

