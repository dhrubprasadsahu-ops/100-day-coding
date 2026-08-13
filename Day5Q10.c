//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.//

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main() {
int x;
printf("enter time in sec ");
scanf("%d",&x);

int h=x/3600;
int m=(x%3600)/60;
int s=x%60;

printf("conversion to hours:minutes:seconds is %d.%d.%d",h,m,s);

    return 0;
}