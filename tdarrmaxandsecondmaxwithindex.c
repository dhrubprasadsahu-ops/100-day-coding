#include<stdio.h>
#include<limits.h>
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

int max=INT_MIN;
int smax=INT_MIN;
int row=0;
int coloum=0;

for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(arr[i][j]>max){
smax=max;
max=arr[i][j];
row=i;
coloum=j;
}
else if(arr[i][j]>smax && arr[i][j]!=max)
smax=arr[i][j];}}

printf("max=%d and row&coloum=(%d,%d) and second max=%d",max,row,coloum,smax);

return 0;
}