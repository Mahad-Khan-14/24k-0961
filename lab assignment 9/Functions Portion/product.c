#include <stdio.h>

int product(int a, int b)
{
    int result = a * b;
    return result;
}

int main()
{
    int num1, num2;
    printf("Enter no. 1\n");
    scanf("%d", &num1);
    printf("Enter no. 2\n");
    scanf("%d", &num2);

    int multiply = product(num1, num2);
    printf("%d", multiply);

    return 0;
}
