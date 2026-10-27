#include <stdio.h>
int main () {
int n;
printf("enter size of array ");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
printf("enter %d element of array ",i+1);
scanf("%d",&arr[i]);
}

int gn=12;
int count=0;
for(int i=0;i<n-2;i++){
for(int j=i+1;j<n-1;j++){
for(int k=j+1;k<n;k++){
if(arr[i]+arr[j]+arr[k]==gn){
printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
count++;}}}}

printf("\n%d",count);

return 0;}