//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

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
printf("enter all elements for the 1st matrix ");
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d",&arr[i][j]);}}

int x;
printf("enter row size ");
scanf("%d",&x);
int y;
printf("enter column size ");
scanf("%d",&y);
int brr[x][y];
printf("enter all elements for the 2nd matrix ");
for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
scanf("%d",&brr[i][j]);}}

int rrr[n][m];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
rrr[i][j]=arr[i][j]+brr[i][j];}}


for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
printf("%d ",rrr[i][j]);}
printf("\n");}


return 0;}