//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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

bool flag=true;
for(int i=0;i<n;i++){
for(int j=i+1;j<m;j++){
if(arr[i][i]==arr[j][j]){
printf("%d-%d\n",arr[i][i],arr[j][j]);
flag=false;
break;}}}

if(flag==false) printf("not unique");
else printf("unique");




return 0;
}