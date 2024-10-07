#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 1 && age <= 10)
    {
        printf("Child: %d", age);
    }
    else if (age > 10 && age <= 18)
    {
        printf("Teenager: %d", age);
    }
    else if (age > 18 && age <= 50)
    {
        printf("Adult: %d", age);
    }
    else if (age > 50)
    {
        printf("Senior: %d", age);
    }
    else
    {
        printf("Invalid age: %d", age);
    }
    return 0;
}