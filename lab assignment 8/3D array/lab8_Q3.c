#include <stdio.h>
int main()
{
    int arr[2][3][3] = {{{4, 8, 10}, {2, 3, 1}, {7, 3, 8}}, {{10, 24, 14}, {4, 14, 44}, {7, 14, 2}}};

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum1+= arr[0][i][j];
            sum2+= arr[1][i][j];
        }
    }

    printf("The sum of Page1 is: %d\n", sum1);
    printf("The sum of Page2 is: %d\n", sum2);

    return 0;
}