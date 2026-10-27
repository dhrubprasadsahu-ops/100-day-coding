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

for(int j=0;j<m;j++){
if(j%2==0){
for(int i=n-1;i>=0;i--){
printf("%d ",arr[i][j]);}}
else{
for(int i=0;i<n;i++){
printf("%d ",arr[i][j]);}}
printf("\n");
}





return 0;
}