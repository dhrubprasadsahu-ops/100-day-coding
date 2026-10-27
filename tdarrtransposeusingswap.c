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

for(int i=0;i<n;i++){
for(int j=i;j<m;j++){
int temp=arr[i][j];
arr[i][j]=arr[j][i];
arr[j][i]=temp;}}

for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
printf("%d ",arr[i][j]);}
printf("\n");}


return 0;
}