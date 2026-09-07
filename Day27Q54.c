/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *     */


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>
int main () {
int n;
printf("enter the num ");
if(scanf("%d",&n)!=1){
printf("invalid input");}

int ml=(n+1)/2;
int nsp=ml-1;
int nst=1;
for(int i=1;i<=n;i++){
for(int a=1;a<=nsp;a++){
printf(" ");}
for(int b=1;b<=nst;b++){
printf("*");}
printf("\n");
if(i<ml){
nsp--;
nst+=2;}
else{
nsp++;
nst-=2;}}



return 0;
}