#include <stdio.h>

void CheckNum(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is Even", n);
    }
    else
    {
        printf("%d is Odd", n);
    }
    printf("\n");
}

int main()
{
    int num1;
    printf("Enter num\n");
    scanf("%d", &num1);

    CheckNum(num1);

    return 0;
}
