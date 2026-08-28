//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() {
int n,max;
printf("enter first num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}
int m;
printf("enter second num ");
if(scanf("%d",&m)!=1){
printf("invalid input");}

if(n>m) max=n;
else max=m;

while(1){
if(max%n==0 && max%m==0){
printf("%d",max);
break;}
else max++;}




    return 0;
}
