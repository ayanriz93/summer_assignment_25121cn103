#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Check if lengths are equal
    if(strlen(str1) != strlen(str2))
    {
        printf("Strings are not rotations.");
        return 0;
    }

    // Concatenate first string with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if second string is a substring of temp
    if(strstr(temp, str2) != NULL)
        printf("Strings are rotations.");
    else
        printf("Strings are not rotations.");

    return 0;
}