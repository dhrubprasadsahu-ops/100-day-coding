//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main(){
int n;
printf("enter row size ");
scanf("%d",&n);
int m;
printf("enter column size ");
scanf("%d",&m);
int arr[n][m];
printf("enter all elements for the matrix ");
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d",&arr[i][j]);}}

int rs[n];

for(int i=0;i<n;i++){
int sum=0;
for(int j=0;j<m;j++){
sum+=arr[i][j];
rs[i]=sum;}}

for(int i=0;i<n;i++){
printf("%d ",rs[i]);}

printf("\n");

int rownum=0;
int ms=rs[0];
for(int i=0;i<n;i++){
if(ms<rs[i]){
ms=rs[i];
rownum=i;}}
printf("max sum=%d and row num for max sum=%d\n",ms,rownum);


return 0;
}