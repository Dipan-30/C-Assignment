#include <stdio.h>

// Function to calculate G.C.D using recursion
int gcd(int a, int b) {
    // Base case: if b is 0, the G.C.D is a
    if (b == 0) {
        return a;
    }
    // Recursive case: call gcd with b and the remainder of a divided by b
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    // Get user input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate G.C.D using the recursive function
    int result = gcd(num1, num2);

    // Print the result
    printf("The G.C.D of %d and %d is %d.\n", num1, num2, result);

    return 0;
}
