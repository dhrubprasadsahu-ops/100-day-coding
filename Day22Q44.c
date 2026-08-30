//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
float n,num,den,sum=0;
printf("enter a num ");
if(scanf("%f",&n)!=1){
printf("invalid input");}

if(n>=1) sum=sum+1;

for(int i=2;i<=n;i++){
num=2*i-1;
den=2*i;
sum=sum+(num/den);}

printf("%f",sum);



return 0;
}