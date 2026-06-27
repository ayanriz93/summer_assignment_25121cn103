#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate sum
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}