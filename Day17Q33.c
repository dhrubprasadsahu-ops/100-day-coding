//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main() {
int n,s,o,t=0;
printf("enter a num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

o=n;

while(n>0){
s=n%10;
t=t+s*s*s;
n=n/10;}

if(o==t){
printf("arm strong");}
else{
printf("not a arm strong");}





    return 0;
}
