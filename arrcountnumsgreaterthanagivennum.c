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
int count=0;
int gn=4;
for(int i=0;i<n;i++){
if(arr[i]>gn) count++;
}

printf("%d",count);



return 0;}