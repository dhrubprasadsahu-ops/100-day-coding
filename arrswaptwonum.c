#include<stdio.h>
void fun(int arr[]){
int temp=arr[0];
arr[0]=arr[1];
arr[1]=temp;
return;
}
int main(){
int n;
printf("enter size of array ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("enter elements %d in an array ",i+1);
scanf("%d",&arr[i]);}

fun(arr);
printf("%d,%d",arr[0],arr[1]);
return 0;
}