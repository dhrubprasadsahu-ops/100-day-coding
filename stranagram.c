//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
char str[20];
printf("enter your first string ");
scanf("%[^\n]s",str);

char ntr[20];
printf("enter your second string ");
scanf(" %[^\n]s",ntr);

int strsize=strlen(str);
int ntrsize=strlen(ntr);
bool flag=true;
int count[256]={0};

if(strsize!=ntrsize) flag=false;
else{
for(int i=0;i<strsize;i++){
count[(unsigned char)str[i]]++;}
for(int i=0;i<ntrsize;i++){
count[(unsigned char)ntr[i]]--;}
for(int i=0;i<256;i++){
if(count[i]!=0){
flag=false;
break;}}}

if(flag==false) printf("not anagram");
else printf("anagram");
return 0;
}