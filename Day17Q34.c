//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
#include <stdbool.h>
int main() {
int n;
printf("enter a num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

bool flag=true;

for(int i=2;i<=n-1;i++){
if(n%i==0){
flag=false;
break;}}

if(n==1){
printf("neither prime nor composite");}
else if(flag==true){
printf("prime");}
else{
printf("composite");}


    return 0;
}

