#include <stdio.h>

int main() {
    float num1, num2, sum, difference, product, quotient;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    
    // Handle division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Exit the program with an error code
    }

    // Print results
    printf("\nResults:\n");
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}
