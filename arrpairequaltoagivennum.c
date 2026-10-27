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

for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++){
if(arr[i]+arr[j]==gn){
printf("(%d,%d)\n",arr[i],arr[j]);
count++;}}}

printf("%d",count);

return 0;}