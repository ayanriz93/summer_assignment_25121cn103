#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num = num / 10;
    }

    if (originalNum == reversedNum)
        printf("%d is a palindrome number.\n", originalNum);
    else
        printf("%d is not a palindrome number.\n", originalNum);

    return 0;
}