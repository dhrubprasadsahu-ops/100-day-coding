#include <stdio.h>
int main () {
int n;
printf("enter size of array ");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
printf("enter %d element of array ",i+1);
scanf("%d",&arr[i]);}


for(int i=0,j=n-1;i<j;i++,j--){
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}

for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}

return 0;}
