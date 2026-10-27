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

int sum=0;
for(int i=0;i<=1;i++){
for(int j=1;j<=3;j++){
sum+=arr[i][j];}}

printf("%d",sum);

return 0;
}