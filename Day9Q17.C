//Q17: Write a program to find the roots of a quadratic equation and categorize them.//

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h> // Required for sqrt()

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // 1. Get coefficients from the user
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if it is a valid quadratic equation
    if (a == 0) {
        printf("The value of 'a' cannot be zero for a quadratic equation.\n");
        return 1;
    }

    // 2. Calculate the discriminant
    discriminant = (b * b) - (4 * a * c);

    // 3. Categorize and calculate roots based on the discriminant
    if (discriminant > 0) {
        // Case 1: Real and Distinct Roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Category: Roots are Real and Distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } 
    else if (discriminant == 0) {
        // Case 2: Real and Equal Roots
        root1 = root2 = -b / (2 * a);
        
        printf("Category: Roots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } 
    else {
        // Case 3: Complex / Imaginary Roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("Category: Roots are Complex (Imaginary) and Distinct.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
