#include<stdio.h>
int main(){
int n;
printf("enter num of students ");
scanf("%d",&n);
int m;
printf("enter num of subjects ");
scanf("%d",&m);
int arr[n][m];

for(int i=0;i<n;i++){
printf("enter all marks for %d students ",i+1);
for(int j=0;j<m;j++){
scanf("%d",&arr[i][j]);}}


for(int i=0;i<n;i++){
printf("marks for %d students \n",i+1);  
for(int j=0;j<m;j++){
printf("%d ",arr[i][j]);}
printf("\n");}

return 0;}