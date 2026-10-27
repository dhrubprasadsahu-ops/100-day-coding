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

int brr[m][n];
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
brr[i][j]=arr[j][i];}}

for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
printf("%d ",brr[i][j]);}
printf("\n");}


return 0;
}