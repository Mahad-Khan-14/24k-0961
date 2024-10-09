
// Develop a program that uses logical operators to determine if a person is eligible for a loan based on age, income, and credit score.

#include <stdio.h>
int main()
{
    int age, income, credit_scr;

    printf("Enter your Age: ");
    scanf("%d", &age);
    if (age <= 0)
    {
        printf("Invalid age, Age must be positive\n");
        return 1;
    }

    printf("Enter your income(Yearly): ");
    scanf("%d", &income);
    if (income <= 0)
    {
        printf("Invalid income, income must be positive\n");
        return 1;
    }

    printf("Enter your Credit score: ");
    scanf("%d", &credit_scr);
    if (credit_scr < 0 || credit_scr > 850)
    {
        printf("Invalid credit score, credit score must be between 0 and 850\n");
        return 1;
    }

    if (age >= 18 && income >= 2000000 && credit_scr >= 650)
    {
        printf("Congrats, You are Eligible for loan.");
    }
    else
    {
        printf("Unfortunately, You are not Eligible for loan.");
    }
    return 0;
}
