//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
int n,r,pro=1;
printf("enter a num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

while(n>0){
r=n%10;
if(r%2!=0){
pro=pro*r;}
n=n/10;}

printf("the product is %d",pro);

    return 0;
}
