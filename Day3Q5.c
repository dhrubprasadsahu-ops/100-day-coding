//Q5: Write a program to convert temperature from Celsius to Fahrenheit.//

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

int main() {
float x;
printf("enter Celsius ");
scanf("%f",&x);

float y =x*1.8+32;
printf("the conversion of temperature from Celsius to Fahrenheit is %f",y);

    return 0;
}