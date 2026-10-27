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
int even=0;
int odd=0;

for(int i=0;i<n;i++){
if(i%2==0) even+=arr[i];
else odd+=arr[i];
}
int diff=even-odd;
printf("%d",diff);

return 0;}