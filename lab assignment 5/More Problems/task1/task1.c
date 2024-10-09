#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter number1 (a): ");
    scanf("%d", &a);
    printf("Enter number2 (b): ");
    scanf("%d", &b);
    printf("Enter number3 (c): ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a:%d is greater than b and c", a);
    }
    else if (b > a && b > c)
    {
        printf("b:%d is greater than a and c", b);
    }
    else
    {
        printf("c:%d is greater than a and b", c);
    }

    return 0;
}