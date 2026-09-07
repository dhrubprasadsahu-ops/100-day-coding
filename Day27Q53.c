#include <stdio.h>
int main () {
int n;
printf("enter the num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
printf("*");}
printf("\n");}
for(int i=2;i<=n;i++){
for(int j=1;j<=n+1-i;j++){
printf("*");}
printf("\n");}

return 0;
}