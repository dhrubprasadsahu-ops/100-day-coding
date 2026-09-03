/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345 */

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>
int main() {
int n;
printf("enter the num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

for(int i=1;i<=n;i++){
for(int j=1;j<=n+1-i;j++){
printf(" ");}
for(int k=n+1-i;k<=n;k++){
printf("%d",k);}
printf("\n");
}

    return 0;
}