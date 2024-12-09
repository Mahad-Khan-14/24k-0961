#include <stdio.h>
#include <stdlib.h>

// Function to multiply two matrices
void multiplyMatrices(int **mat1, int **mat2, int **result, int m, int n, int p)
{
    // Perform multiplication mat1(m×n) * mat2(n×p) = result(m×p)
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to input matrix elements
void inputMatrix(int **matrix, int m, int n)
{
    printf("Enter the elements of the matrix (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print matrix
void printMatrix(int **matrix, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m, n, p;

    printf("Enter the dimensions of the first matrix (m x n):\n");
    scanf("%d %d", &m, &n);

    printf("Enter the number of columns of the second matrix (n x p):\n");
    scanf("%d", &p);

    // Dynamically allocate memory for matrices
    int **mat1 = (int **)malloc(m * sizeof(int *));
    int **mat2 = (int **)malloc(n * sizeof(int *));
    int **result = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        mat1[i] = (int *)malloc(n * sizeof(int));
    }
    for (int i = 0; i < n; i++)
    {
        mat2[i] = (int *)malloc(p * sizeof(int));
    }
    for (int i = 0; i < m; i++)
    {
        result[i] = (int *)malloc(p * sizeof(int));
    }

    // Input elements of both matrices
    printf("\nMatrix 1:\n");
    inputMatrix(mat1, m, n);

    printf("\nMatrix 2:\n");
    inputMatrix(mat2, n, p);

    // Perform matrix multiplication
    multiplyMatrices(mat1, mat2, result, m, n, p);

    // Print the result of the multiplication
    printf("\nResult of Matrix Multiplication (Matrix 1 * Matrix 2):\n");
    printMatrix(result, m, p);

    // Free allocated memory
    for (int i = 0; i < m; i++)
    {
        free(mat1[i]);
        free(result[i]);
    }
    for (int i = 0; i < n; i++)
    {
        free(mat2[i]);
    }
    free(mat1);
    free(mat2);
    free(result);

    return 0;
}
