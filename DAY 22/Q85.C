#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find string length
    while(str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    // Check palindrome
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("The string is a Palindrome.");
    else
        printf("The string is Not a Palindrome.");

    return 0;
}