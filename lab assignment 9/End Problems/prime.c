#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    printf("enter a number: \n");
    scanf("%d", &num);

    if (isPrime(num))
    {
        printf("%d is a Prime Number: \n", num);
    }
    else
    {
        printf("%d is not a Prime Number: \n", num);
    }

    return 0;
}