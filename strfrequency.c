//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>


int main() {
char str[20];
printf("enter your string ");
scanf("%[^\n]s",str);

char chr;
printf("enter your character ");
scanf(" %c",&chr);

int size=strlen(str);

int count=0;

for(int i=0;i<size;i++){
if(str[i]==chr) count++;
}

printf("%d",count);



    return 0;
}