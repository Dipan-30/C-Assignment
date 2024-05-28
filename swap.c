#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;  // Store the value of a in temp
    *a = *b;        // Assign the value of b to a
    *b = temp;      // Assign the value of temp (original a) to b
}

int main() {
    int num1, num2;

    // Get user input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Print original values
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the numbers by passing their addresses to the swap function
    swap(&num1, &num2);

    // Print swapped values
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
