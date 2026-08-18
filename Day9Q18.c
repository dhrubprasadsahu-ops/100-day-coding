/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>

int main() {
int n;
printf("enter your percentage ");
scanf("%d",&n);

if(n>=90 && n<=100){
printf("A grade");}
else if(n>=80 && n<=89){
printf("B grade");}
else if(n>=70 && n<=79){
printf("C grade");}
else if(n>=60 && n<=69){
printf("D grade");}
else{printf("F grade");}
    return 0;
}
