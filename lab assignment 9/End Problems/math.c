#include <stdio.h>

double calculate(double n1, double n2, char operator)
{
    switch (operator)
    {
    case '+':
        return n1 + n2;

    case '-':
        return n1 - n2;

    case '*':
        return n1 * n2;

    case '/':
        if (n2 != 0)
        {
            return n1 / n2;
        }
        else
        {
            printf("Error: denominator cant be zero");
            return 0;
        }

    default:
        printf("Error: Invalid operator");

        return 0;
    }
}

int main()
{
    double a, b;
    char operator[2];

    printf("Enter num 1: \n");
    scanf("%lf", &a);

    getchar();

    printf("Enter the operator( '+' | '-' | '*' | '/' ): ");
    fgets(operator, sizeof(operator), stdin);

    if (operator[0] == '\n')
    {
        operator[0] == '\0';
    }

    printf("Enter num 2: \n");
    scanf("%lf", &b);

    double result = calculate(a, b, operator[0]);

    if (operator[0] == '+' || operator[0] == '-' || operator[0] == '*' ||(operator[0] == '/' && b != 0))
    {
        printf("\nResult: %.2f %c %.2f = %.2f\n", a, operator[0], b, result);
    }
    else
    {
        printf("\nInvalid Operation or Divisible by Zero");
    }

    return 0;
}