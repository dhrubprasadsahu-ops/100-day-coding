//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.//

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
int main() {
float p;
printf("enter principal ");
scanf("%f",&p);
float r;
printf("enter rate ");
scanf("%f",&r);
float t;
printf("enter time ");
scanf("%f",&t);

float si=(p*r*t)/100;
float amount=p*pow(1+r/100,t);
float ci=amount-p;
printf("the si is %f and the ci is %f",si,ci);
    return 0;
}