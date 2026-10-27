//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include<stdio.h>
int main(){
int n,i;
printf("enter size of array ");
scanf("%d",&n);
int arr[n+1];
for(int i=0;i<n;i++){
printf("enter elements %d in an array ",i+1);
scanf("%d",&arr[i]);}

int t;
printf("enter target for array ");
scanf("%d",&t);

for(i=n-1;arr[i]>t;i--){
arr[i+1]=arr[i];
}
arr[i+1]=t;

for(int i=0;i<n+1;i++){
printf("%d ",arr[i]);}


return 0;
}
