#include <stdio.h>

// Function prototype
int isPerfect(int num);

int main() {
    int number;

    // Get input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Guard clause for invalid input
    if (number <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; 
    }

    // Call the function and print the result
    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}

/**
 * Function: isPerfect
 * Purpose: Checks if a number is a perfect number.
 * Returns: 1 if perfect, 0 otherwise.
 */
int isPerfect(int num) {
    int sum = 0;

    // A number cannot have a proper divisor greater than num / 2
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Add the divisor to the running total
        }
    }

    // If the sum of divisors matches the original number, it is perfect
    return (sum == num);
}
