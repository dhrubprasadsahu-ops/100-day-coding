//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include<stdio.h>
#include<string.h>
int main (){
char str[20];
printf("enter your word ");
scanf("%[^\n]s",str);

int size=strlen(str);

int space=0;
int digit=0;
int special=0;

for(int i=0;i<size;i++){
if(str[i]==' ') space++;
else if(str[i]>='0' &&str[i]<='9') digit++;
else if(str[i]>='!' && str[i]<='+') special++;
}

printf("space=%d,digit=%d,special=%d",space,digit,special);




return 0;
}