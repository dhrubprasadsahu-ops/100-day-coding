//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
int n,r,i=0;
int arr[20];
printf("enter a num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

while(n>0){
r=n%2;
arr[i]=r;
i++;
n=n/2;
}

for(int j=i-1;j>=0;j--){
printf("%d",arr[j]);
}


    return 0;
}