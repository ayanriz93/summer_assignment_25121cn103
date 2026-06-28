#include <stdio.h>

int main() {
    float balance = 1000.00; // Initial balance
    int choice;
    float amount;
    int pin = 1234, entered_pin;

    printf("Welcome to the ATM Simulation\n");
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &entered_pin);

    if (entered_pin != pin) {
        printf("Invalid PIN. Access Denied.\n");
        return 0;
    }

    while (1) {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Cash\n");
        printf("3. Withdraw Cash\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("$%.2f deposited successfully.\n", amount);
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else if (amount <= 0) {
                    printf("Invalid amount.\n");
                } else {
                    balance -= amount;
                    printf("$%.2f withdrawn successfully.\n", amount);
                }
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
