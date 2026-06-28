#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], difference[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Subtraction
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            difference[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of the matrices:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}