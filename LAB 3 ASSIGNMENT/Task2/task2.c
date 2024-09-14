#include <stdio.h>
int main()
{
    int a, b;
    printf("enter two numbers :\n");
    scanf("%d%d", &a, &b);
    printf("you entered a = %d and b = %d\n", a, b);
    int c = a;
    a = b;
    b = c;
    printf("now, a = %d and b = %d\n", a, b);
    return 0;
};