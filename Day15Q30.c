//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main() {

int n,r=0;
printf("enter a num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

while(n>0){
r=r*10;   
r=r+(n%10);
n=n/10;
}
printf("%d ",r);
    return 0;
}