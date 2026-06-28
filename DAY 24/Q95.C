#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i = 0, j = 0;
    int maxLen = 0, currentLen = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            currentLen++;
        }
        else
        {
            if(currentLen > maxLen)
            {
                maxLen = currentLen;

                for(j = 0; j < currentLen; j++)
                {
                    longest[j] = str[start + j];
                }
                longest[j] = '\0';
            }

            currentLen = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Longest Word = %s\n", longest);
    printf("Length = %d", maxLen);

    return 0;
}