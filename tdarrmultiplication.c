#include<stdio.h>
int main(){
int n;
printf("enter row size for 1st matrix ");
scanf("%d",&n);
int m;
printf("enter coloum size for 1st matrix ");
scanf("%d",&m);
int a[n][m];
printf("enter all elements for 1st matrix ");
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d",&a[i][j]);}}

int x;
printf("enter row size for 2nd matrix ");
scanf("%d",&x);
int y;
printf("enter coloum size for 2nd matrix ");
scanf("%d",&y);
int b[x][y];
printf("enter all elements for 2nd matrix ");
for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
scanf("%d",&b[i][j]);}}

if(m!=x) printf("matrix multiplication cannot be formed");
else{
int r[n][y];
for(int i=0;i<n;i++){
for(int j=0;j<y;j++){
r[i][j]=0;
for(int k=0;k<m;k++){
r[i][j]+=a[i][k]*b[k][j];}}}

printf("the resultant matrix is \n");
for(int i=0;i<n;i++){
for(int j=0;j<y;j++){
printf("%d ",r[i][j]);}
printf("\n");}
}




return 0;
}