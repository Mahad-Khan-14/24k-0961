#include <stdio.h>

#define MAX_TEMP 30 // Maximum allowable temperature in Celsius

// Function to check temperature and count limit exceedances
void checkTemperature(int temp)
{
    static int exceedCount = 0; // Static variable to count exceedances

    if (temp > MAX_TEMP)
    {
        exceedCount++;
        printf("Temperature %d°C exceeds the maximum allowable temperature (%d°C)!\n", temp, MAX_TEMP);
    }
    else
    {
        printf("Temperature %d°C is within the safe range.\n", temp);
    }

    printf("Times the limit was exceeded so far: %d\n", exceedCount);
}

int main()
{
    int temp;

    printf("Enter temperatures (-1 to stop):\n");

    while (1)
    {
        printf("Enter temperature: ");
        scanf("%d", &temp);

        if (temp == -1)
        {
            break; // Exit loop if -1 is entered
        }

        checkTemperature(temp);
    }

    printf("\nProgram terminated.\n");
    return 0;
}
