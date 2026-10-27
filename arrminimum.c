#include<stdio.h>
int main(){
int n;
printf("enter size of array ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("enter elements %d in an array ",i+1);
scanf("%d",&arr[i]);}

int min=arr[0];

for(int i=1;i<n;i++){
if(arr[i]<min){
min=arr[i];}}

printf("min=%d",min);

return 0;
}