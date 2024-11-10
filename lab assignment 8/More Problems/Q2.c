/* Generate a pattern of odd numbers in decreasing order starting from a user-specified number
using nested loops.*/

#include <stdio.h>
int main()
{
    int n;
    int i, j;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        n -= 1;
    }

    for (i = 1; i <= (n + 1) / 2; i++)
    {
        int num = n;
        for (j = 0; j < i; j++)
        {
            printf("%d\t", num);
            num -= 2;
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}