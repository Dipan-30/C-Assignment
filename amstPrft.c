#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Compute the sum of the nth power of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the result is equal to the original number
    if (result == num)
        return 1;
    else
        return 0;
}

// Function to check if a number is a Perfect number
int isPerfect(int num) {
    int sum = 0;

    // Find the sum of divisors
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors is equal to the number
    if (sum == num)
        return 1;
    else
        return 0;
}

int main() {
    int number;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is an Armstrong number
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    // Check if the number is a Perfect number
    if (isPerfect(number)) {
        printf("%d is a Perfect number.\n", number);
    } else {
        printf("%d is not a Perfect number.\n", number);
    }

    return 0;
}
