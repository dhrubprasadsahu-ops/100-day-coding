//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.//

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{
float length;
float breadth;

printf("enter length ");
scanf("%f",&length);
printf("enter breadth ");
scanf("%f",&breadth);

float area=length*breadth;
float perimeter=2*(length+breadth);

printf("the area is %f and perimeter is %f",area,perimeter);

    return 0;
}