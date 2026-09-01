/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
***** */

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>

int main() {
int n;
printf("enter a num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

for(int i=1;i<=n;i++){
for(int i=1;i<=n;i++){
printf("*");}
printf("\n");}


    return 0;
}
