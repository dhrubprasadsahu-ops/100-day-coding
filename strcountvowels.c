//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
#include<string.h>
int main (){
char str[20];
printf("enter your word ");
scanf("%[^\n]s",str);

int size=strlen(str);

int v=0;
int c=0;
for(int i=0;i<size;i++){
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
v++;
else
c++;
}
printf("vowel=%d and consonants=%d",v,c);


return 0;
}