
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the no: of rows: ");
    scanf("%d", &rows);

    for (int i = rows - 1; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (int k = rows - 1; k >= 1; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}