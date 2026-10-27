#include <stdio.h>
void fun(int arr[],int x,int y){
for(int i=x,j=y;i<j;i++,j--){
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;}
return;
}
int main () {
int n;
printf("enter size of array ");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
printf("enter %d element of array ",i+1);
scanf("%d",&arr[i]);
}

int rv;
printf("enter value for rotation ");
scanf("%d",&rv);

rv=rv%n;

fun(arr,0,n-1);
fun(arr,0,rv-1);
fun(arr,rv,n-1);

for(int i=0;i<n;i++){
printf("%d ",arr[i]);}



return 0;}