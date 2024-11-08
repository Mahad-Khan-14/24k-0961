#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the last number: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d\t", j + 1);
        }
        printf("\n");
    }
    return 0;
}