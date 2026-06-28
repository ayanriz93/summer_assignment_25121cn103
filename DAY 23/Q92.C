#include <stdio.h>

int main()
{
    char str[100];
    int i, j, maxCount = 0, count;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        count = 0;

        for(j = 0; str[j] != '\0' && str[j] != '\n'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Maximum Occurring Character = %c\n", maxChar);
    printf("Frequency = %d", maxCount);

    return 0;
}