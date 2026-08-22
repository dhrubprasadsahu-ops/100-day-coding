//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main() {
char ch;
printf("enter a operator ");
scanf("%c",&ch);

int x;
printf("enter first num ");
if(scanf("%d",&x)!=1){
printf("invalid input");
return 1;}
int y;
printf("enter second num ");
if(scanf("%d",&y)!=1){
printf("invalid input");
return 1;}

switch(ch){
case '+':
printf("the output is %d",x+y);
break;
case '-':
printf("the output is %d",x-y);
break;
case '*':
printf("the output is %d",x*y);
break;
case '/':
printf("the output is %d",x/y);
break;
case '%':
printf("the output is %d",x%y);
break;
default:
printf("invalid");
break;
}








    return 0;
}