// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>
int main(){
int n;
printf("enter size of 1st array ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("enter elements %d in 1st array ",i+1);
scanf("%d",&arr[i]);}

int m;
printf("enter size of 2nd array ");
scanf("%d",&m);
int brr[m];
for(int i=0;i<m;i++){
printf("enter elements %d in 2st array ",i+1);
scanf("%d",&brr[i]);}

int final[n+m];
for(int i=0;i<n;i++){
final[i]=arr[i];}

for(int i=0;i<m;i++){
final[n+i]=brr[i];}

for(int i=0;i<n+m;i++){
printf("%d ",final[i]);
}
return 0;
}