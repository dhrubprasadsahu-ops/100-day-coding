#include<stdio.h>
#include<stdbool.h>

int main(){
int n;
printf("enter row size ");
scanf("%d",&n);
int m;
printf("enter column size ");
scanf("%d",&m);
int arr[n][m];
printf("enter all elements for the matrix ");
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d",&arr[i][j]);}}

bool flag=true;
for(int i=0;i<n && flag;i++){
for(int j=0;j<m && flag;j++){
for(int k=0;k<n && flag;k++){
for(int l=0;l<m && flag;l++){
if(i==k && j==l) continue;
else if(arr[i][j]==arr[k][l]){
flag=false;
printf("%d-%d at (%d,%d)\n",arr[i][j],arr[k][l],k,l);
break;}}}}}

if(flag==true) printf("unique");
else printf("not unique");

return 0;
}