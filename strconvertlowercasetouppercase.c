//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include<stdio.h>
#include<string.h>
int main (){
char str[20];
printf("enter your word ");
scanf("%[^\n]s",str);

int size=strlen(str);

for(int i=0;i<size;i++){
if(str[i]>='a' && str[i]<='z'){
str[i]=str[i]-32;}}

printf("%s",str);




return 0;
}