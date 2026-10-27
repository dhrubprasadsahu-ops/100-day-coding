#include<stdio.h>
int main(){
int n;
printf("enter row size ");
scanf("%d",&n);
int m;
printf("enter column size ");
scanf("%d",&m);
int arr[n][m];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
arr[i][j]=10;}}


for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
printf("%d ",arr[i][j]);}
printf("\n");}

return 0;}