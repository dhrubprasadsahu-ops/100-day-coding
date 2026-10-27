//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main () {
int n;
printf("enter size of array ");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
printf("enter %d element of array ",i+1);
scanf("%d",&arr[i]);}

int d;
printf("enter delete element of array ");
scanf("%d",&d);

for(int i=d;i<n-1;i++){
arr[i]=arr[i+1];
}
n--;

for(int i=0;i<n;i++){
printf("%d ",arr[i]);}


return 0;}









