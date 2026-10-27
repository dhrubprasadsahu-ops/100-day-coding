#include<stdio.h>
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

int minr=0;
int minc=0;
int maxr=n-1;
int maxc=m-1;
int count=0;
int tc=n*m;

while(count!=tc){
for(int j=minc;j<=maxc && count!=tc;j++){
printf("%d ",arr[minr][j]);
count++;}
minr++;
for(int i=minr;i<=maxr && count!=tc;i++){
printf("%d ",arr[i][maxc]);
count++;}
maxc--;
for(int j=maxc;j>=minc && count!=tc;j--){
printf("%d ",arr[maxr][j]);
count++;}
maxr--;
for(int i=maxr;i>=minr && count!=tc;i--){
printf("%d ",arr[i][minc]);
count++;}
minc++;
}



return 0;
}