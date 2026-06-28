#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find string length
    while(str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    // Reverse the string
    for(i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed String = %s", str);

    return 0;
}