// Write a C program to find the saddle point(s) in a given 3x3 matrix. A saddle point is an element
// that is the smallest in its row and the largest in its column.

#include <stdio.h>
int main()
{
    int mat[3][3] = {{4, 5, 6}, {3, 6, 9}, {3, 8, 12}};
    int saddlePointFound = 0;

    printf("Matrix is:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // For finding Saddle Points
    for (int i = 0; i < 3; i++)
    {
        int rowMin = mat[i][0];
        int colIndex = 0;

        for (int j = 1; j < 3; j++)
        {
            if (mat[i][j] < rowMin)
            {
                rowMin = mat[i][j];
                colIndex = j;
            }
        }

        int saddlePoint = 1;

        for (int k = 0; k < 3; k++)
        {
            if (mat[k][colIndex] > rowMin)
            {
                saddlePoint = 0;
                break;
            }
        }
        if (saddlePoint)
        {
            printf("Saddle point found at (%d,%d) with the value : %d.\n", i + 1, colIndex + 1, rowMin);
            saddlePointFound = 1;
        }
    }

    if (!saddlePointFound)
    {
        printf("No Saddle point Found");
    }

    printf("\n");

    return 0;
}