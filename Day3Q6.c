//Q6: Write a program to swap two numbers using a third variable.//

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>

int main() {
float x;
float y;
float temp;
printf("enter first num ");
scanf("%f",&x);
printf("enter second num ");
scanf("%f",&y);

temp=x;
x=y;
y=temp;

printf("the first num is %f and second num is %f",x,y);

    return 0;
}
