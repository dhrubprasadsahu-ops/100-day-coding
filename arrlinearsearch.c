#include <stdio.h>
int main () {
int n;
printf("enter size of array ");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
printf("enter %d element of array ",i+1);
scanf("%d",&arr[i]);}

int realsum=(n*(n+1))/2;
int fakesum=0;

for(int i=0;i<n;i++){
fakesum+=arr[i];}

int missing=realsum-fakesum;

printf("%d",missing);




return 0;}