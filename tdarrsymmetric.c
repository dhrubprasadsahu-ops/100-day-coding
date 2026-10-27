//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include<stdio.h>
#include<stdbool.h>
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

bool flag=true;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(arr[i][j]!=arr[j][i]){
flag=false;
break;}}}

if(flag==true) printf("symmetric");
else printf("not symmetric");



return 0;
}