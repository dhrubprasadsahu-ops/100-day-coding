#include <stdio.h>
#include <stdbool.h>
int main () {
int n;
printf("enter size of array ");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
printf("enter %d element of array ",i+1);
scanf("%d",&arr[i]);}

bool flag;

for(int i=0,j=n-1;i<j;i++,j--){
if(arr[i]==arr[j]){
flag=true;}
else{
flag=false;
break;}}

if(flag==true) printf("palendrome");
else printf("not a palendrome");


return 0;}