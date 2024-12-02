#include <stdio.h>

int NumSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + NumSum(n / 10);
    }
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int results = NumSum(n);
    printf("sum of Digits of %d is: %d", n, results);

    return 0;
}
