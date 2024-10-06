
// 1, 2, 2, 4, 8, 32, 256, 8192, 2097152,

#include <stdio.h>
int main()
{
    float a, b, c;

    a = 1;
    b = 2;
    printf("%.f, %.f", a, b);
    for (int i = 0; i <= 8; i++)
    {
        c = a * b;
        printf(", %.f", c);
        a = b;
        b = c;
    }
    return 0;
}