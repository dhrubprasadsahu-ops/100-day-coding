//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
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

int row=0;
int col=0;
bool up=true;
for(int k=0;k<n*m;k++){
printf("%d ",arr[row][col]);

if(up){
if(col==m-1){
row++;
up=false;}
else if(row==0){
col++;
up=false;}
else{
row--;
col++;}}
else{
if(row==n-1){
col++;
up=true;}
else if(col==0){
row++;
up=true;}
else{
row++;
col--;}}
}

return 0;
}





