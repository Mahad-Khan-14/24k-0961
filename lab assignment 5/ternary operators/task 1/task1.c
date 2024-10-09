#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number (a): ");
    scanf("%d", &a);
    printf("Enter a number (b): ");
    scanf("%d", &b);
    // printf("a = %d, b = %d", a, b);

    (a > b) ? printf("a is greater than b\n") : printf("b is greater than a\n");

    return 0;
}