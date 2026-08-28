//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
int n,r=0;
printf("enter a num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

int o=n;

while(n>0){
r=r*10;    
r=r+n%10;
n=n/10;}
if(o==r){
printf("Palindrome");}
else{
printf("Not a Palindrome");}   



    return 0;
}
