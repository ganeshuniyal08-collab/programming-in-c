// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int rowSums[m];
    for (int i = 0; i < m; i++)
    {
        rowSums[i] = 0;
        for (int j = 0; j < n; j++)
        {
            rowSums[i] += matrix[i][j];
        }
    }
    printf("Sum of each row:\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", rowSums[i]);
    }
    printf("\n");
    return 0;
}