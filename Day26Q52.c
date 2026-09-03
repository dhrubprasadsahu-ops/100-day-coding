/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main() {
int n;
printf("enter the num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

printf("*\n\n");
for(int i=1;i<=3;i++){
printf("*\n");}
printf("\n");
for(int i=1;i<=5;i++){
printf("*\n");}
printf("\n");
for(int i=1;i<=3;i++){
printf("*\n");}
printf("\n");
printf("*\n\n");
    return 0;
}