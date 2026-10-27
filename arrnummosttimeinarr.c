//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include<stdio.h>
int main () {
int num,digit;
printf("enter a num ");
scanf("%d",&num);

int arr[10]={0};

for(int i=1;num>0;i++){
digit=num%10;
arr[digit]++;
num=num/10;
}

int max=0;
int count=0;

for(int i=0;i<10;i++){
if(arr[i]>count){
count=arr[i];
max=i;}}

printf("max=%d & count=%d",max,count);







return 0;
}