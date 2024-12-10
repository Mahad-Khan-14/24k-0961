#include <stdio.h>

#define METERS_TO_KILOMETERS 0.001

void convertToKilometers(float meters);

int main()
{
    float meters;
    char choice;

    do
    {
        printf("Enter distance in meters: ");
        scanf("%f", &meters);

        convertToKilometers(meters);

        printf("\nDo you want to convert another distance? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the program!\n");
    return 0;
}

void convertToKilometers(float meters)
{
    static int callCount = 0;

    float kilometers = meters * METERS_TO_KILOMETERS;
    callCount++;

    printf("Distance: %.2f meters = %.2f kilometers\n", meters, kilometers);
    printf("This function has been called %d time(s).\n", callCount);
}
