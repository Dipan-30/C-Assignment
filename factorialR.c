#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

int main() {
    int number;

    // Get user input
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    // Ensure the number is non-negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and print the factorial
        printf("The factorial of %d is %d.\n", number, factorial(number));
    }

    return 0;
}
