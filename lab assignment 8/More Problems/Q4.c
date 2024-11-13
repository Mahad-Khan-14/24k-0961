#include <stdio.h>
int main()
{
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] = {{9,8,7},{6,5,4},{3,2,1}};

    int multiple[3][3];

    // Multiplying the Matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            multiple[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                multiple[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Printing the Resultant Matrix

    printf("The multiplication of The Matrices is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", multiple[i][j]);
        }
        printf("\n");
    }

    return 0;
}