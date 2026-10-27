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

int brr[n];
for(int i=0;i<n;i++){
brr[i]=arr[n-1-i];
}
for(int i=0;i<n;i++){
printf("%d ",brr[i]);
}

return 0;}