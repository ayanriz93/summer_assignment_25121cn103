#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, k, found;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common characters: ");

    for(i = 0; str1[i] != '\0'; i++)
    {
        found = 0;

        // Check if character is already printed
        for(k = 0; k < i; k++)
        {
            if(str1[k] == str1[i])
            {
                found = 1;
                break;
            }
        }

        if(found)
            continue;

        // Check if character exists in second string
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}