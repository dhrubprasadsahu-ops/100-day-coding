//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <string.h>

int main() {
char num[10];
printf("enter a num ");
if(scanf("%s",&num)!=1){
printf("invalid input");}

int len=strlen(num);

int temp=num[0];
num[0]=num[len-1];
num[len-1]=temp;

printf("%s",num);

    return 0;
}

