#include <stdio.h>
#include <math.h>  // For sqrt function

int main() {
    // Declare the variables
    int X, Y;

    // Read the input values
    scanf("%d %d", &X, &Y);

    // Calculate the hypotenuse using Pythagorean theorem
    double hypotenuse = sqrt(X * X + Y * Y);

    // Print the result rounded to two decimal places
    printf("%.2f\n", hypotenuse);

    return 0;
}
