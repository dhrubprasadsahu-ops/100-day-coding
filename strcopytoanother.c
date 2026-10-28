#include <stdio.h>
#include<string.h>


int main() {
/* char str[]="god is with you";
int size=0;
for(int i=0;str[i]!='\0';i++){
size++;}

char ntr[size+1];
for(int i=0;i<size+1;i++){
ntr[i]=str[i];}

2nd method to find length
int size=strlen(str);

ntr[size+1]='\0';

printf("%s",ntr); */

/* char *str="hello man";
char *ntr=str;
printf("%s\n",str);
printf("%s",ntr); */

char str[11]="hello babu";
char ntr[11];
strcpy(ntr,str);
printf("%s",ntr);
    return 0;
}