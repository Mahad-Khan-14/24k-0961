#include <stdio.h>
int main()
{
    int age;
    char citizenship_status;
    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter citizenship-status (Y/N) : ");
    scanf(" %c", &citizenship_status);

    if (age >= 18 && citizenship_status == 'Y')
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("You are not eligible to vote.");
    }
    return 0;
}