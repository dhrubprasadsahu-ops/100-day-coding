//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include<stdio.h>
int main (){
int n;
printf("enter size of array ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("enter elements %d in an array ",i+1);
scanf("%d",&arr[i]);}

int t;
printf("target ");
scanf("%d",&t);

int s=0;
int e=n-1;
int r=-1;

while(s<=e){
int mid=(s+e)/2;
if(arr[mid]==t){
r=mid;
break;}
else if(arr[mid]>t)
e=mid-1;
else
s=mid+1;}

if(r!=0)
printf("%d",r);
else
printf("-1");



return 0;
}

