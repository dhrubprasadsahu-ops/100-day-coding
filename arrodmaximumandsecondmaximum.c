#include<stdio.h>
#include<limits.h>


int main(){
int n;
printf("enter size of array ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("enter elements %d in an array ",i+1);
scanf("%d",&arr[i]);}

int max=INT_MIN;
int smax=INT_MIN;

for(int i=0;i<n;i++){
if(arr[i]>max){
smax=max;
max=arr[i];}

else if(smax<arr[i] && arr[i]!=max){
smax=arr[i];
}}

printf("max=%d,second max=%d",max,smax);

return 0;
}