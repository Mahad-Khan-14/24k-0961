#include <stdio.h>

void swapIntegers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: \n");

    printf("Num 1: ");
    scanf("%d", &num1);
    printf("Num 2: ");
    scanf("%d", &num2);

    printf("Before Swaping: \n");
    printf("a is %d\n", num1);
    printf("b is %d\n", num2);

    swapIntegers(&num1, &num2);

    printf("Swapped Result: \n");
    printf("a is %d\n", num1);
    printf("b is %d\n", num2);

    return 0;
}