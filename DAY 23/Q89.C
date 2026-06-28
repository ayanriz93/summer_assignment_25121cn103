#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;

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

        if(count == 1)
        {
            printf("First Non-Repeating Character = %c", str[i]);
            return 0;
        }
    }

    printf("No Non-Repeating Character Found");

    return 0;
}