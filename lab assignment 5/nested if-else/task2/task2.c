#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        if (n % 2 == 0)
        {
            printf("Number is positive and even");
        }
        else
        {
            printf("Number is positive and odd");
        }
    }
    else if (n < 0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is zero");
    }
}