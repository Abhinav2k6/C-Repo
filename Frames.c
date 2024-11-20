#include <stdio.h>

int main() {
    // Declare the variables
    int N, M, X;

    // Read the input values
    scanf("%d %d %d", &N, &M, &X);

    // Calculate the perimeter of the rectangle
    int perimeter = 2 * (N + M);

    // Calculate the total cost
    int total_cost = perimeter * X;

    // Print the total cost
    printf("%d\n", total_cost);

    return 0;
}
