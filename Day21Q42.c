//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main() {
int n,sum=0;
printf("enter a num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

for(int i=1;i<=n/2;i++){
if(n%i==0) sum=sum+i;}

if(sum==n) printf("perfect number");
else printf("not a perfect number");

    return 0;
}
