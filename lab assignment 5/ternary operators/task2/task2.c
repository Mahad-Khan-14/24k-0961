#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    (n > 0) ? printf("%d: n is positive", n) : ((n == 0) ? printf("%d: n is zero", n) : printf("%d: n is negative", n));
    return 0;
}