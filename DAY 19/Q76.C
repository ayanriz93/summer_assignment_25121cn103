#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;
    int diagonalSum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate diagonal sum
    for(i = 0; i < n; i++)
    {
        diagonalSum += a[i][i];
    }

    printf("Sum of Principal Diagonal = %d", diagonalSum);

    return 0;
}