#include <stdio.h>
int main()
{
    int n;

    while (n)
    {
        printf("Enter a Number: ");
        scanf("%d", &n);

        if (n >= 10 || n <= -10)
        {
            printf("%d is a multiple digit number\n", n);
        }
        else
        {
            printf("%d is not a multiple digit number\n", n);
        }
    }

    return 0;
}
