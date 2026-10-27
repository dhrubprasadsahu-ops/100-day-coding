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

int maxcount=0;
int row=0;

for(int i=0;i<n;i++){
int count=0;
for(int j=0;j<m;j++){
if(arr[i][j]==1){
count++;}}

if(count>maxcount){
maxcount=count;
row=i;}}

printf("max count=%d and row= %d",maxcount,row);


return 0;
}