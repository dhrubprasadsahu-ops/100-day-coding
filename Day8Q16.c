//Q16: Write a program to input three numbers and find the largest among them using if–else.//

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>

int main() {
int a;
printf("enter 1st num ");
scanf("%d",&a);
int b;
printf("enter 2nd num ");
scanf("%d",&b);
int c;
printf("enter 3rd num ");
scanf("%d",&c);

if(a>b && a>c){
printf("1st num is greatest");}
else if(b>a && b>c){
printf("2nd num is greatest");}
else{
printf("3rd num is greatest");}


    return 0;
}