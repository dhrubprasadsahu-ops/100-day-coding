//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
int main () {
int n;
printf("enter size of array ");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
printf("enter %d element of array ",i+1);
scanf("%d",&arr[i]);}

int p;
printf("enter point at array ");
scanf("%d",&p);

int t;
printf("enter new element for array ");
scanf("%d",&t);

for(int i=n-1;i>=p;i--){
arr[i+1]=arr[i];
}
arr[p]=t;

for(int i=0;i<n+1;i++){
printf("%d ",arr[i]);}
return 0;
}