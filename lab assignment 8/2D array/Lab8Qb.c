#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter the no. of rows: ");
    scanf("%d", &rows);
    printf("Enter the no. of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols], transpose[cols][rows];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter value at matrix[%d][%d]: \n", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // taking transpose
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("The transposed matrix is: \n");

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}