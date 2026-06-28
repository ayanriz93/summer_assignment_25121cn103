#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int n1, n2, i, j, k;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Common elements are:\n");

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                // Check if already printed
                int printed = 0;
                for(k = 0; k < i; k++)
                {
                    if(arr1[k] == arr1[i])
                    {
                        printed = 1;
                        break;
                    }
                }

                if(!printed)
                {
                    printf("%d ", arr1[i]);
                }
                break;
            }
        }
    }

    return 0;
}