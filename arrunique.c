#include<stdio.h>
#include<stdbool.h>

int main(){
int n;
printf("enter size of array ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("enter elements %d in an array ",i+1);
scanf("%d",&arr[i]);}

for(int i=0;i<n-1;i++){
bool flag=false;
for(int j=i+1;j<n;j++){
if(arr[i]==arr[j]) flag=true;}
if(flag==false){
printf("%d",arr[i]);
break;}}




return 0;
}