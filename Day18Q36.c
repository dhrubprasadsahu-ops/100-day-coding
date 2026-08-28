//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main() {
int n,r;
printf("enter first num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}
int m;
printf("enter second num ");
if(scanf("%d",&m)!=1){
printf("invalid input");}

while(m!=0){
r=n%m;
n=m;
m=r;
}
printf("hcf is %d",n);

    return 0;
}
