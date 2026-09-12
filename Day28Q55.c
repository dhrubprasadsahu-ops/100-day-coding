/*Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int main () {
int n,i,j;
printf("enter the num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

for(i=2;i<=n;i++){
for(j=2;j<=n-1;j++){
if(i%j==0) break;}
if(i==j) printf("%d ",i);}





return 0;
}