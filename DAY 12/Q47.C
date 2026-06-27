#include <stdio.h>

int main() {
    int terms;
    unsigned long long first = 0, second = 1, next;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    if (scanf("%d", &terms) != 1 || terms <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (int i = 1; i <= terms; i++) {
        if (i == 1) {
            printf("%llu", first);
            continue;
        }
        if (i == 2) {
            printf(", %llu", second);
            continue;
        }
        
        // Calculate the next term
        next = first + second;
        printf(", %llu", next);
        
        // Update variables for the next loop iteration
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
