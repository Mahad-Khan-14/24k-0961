#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARS 100

struct Car
{
    char make[20];
    char model[20];
    int year;
    float price;
    float mileage;
};

void addCars(struct Car *Cars, int *count);
void DisplayCars(const struct Car *Cars, int count);
void searchCars(const struct Car *Cars, int count);

int main()
{
    struct Car cars[MAX_CARS];
    int carCount = 0;
    int choice;

    while (1)
    {
        printf("\n<-----Car Management System----->\n");
        printf("<Enter 1: To add Cars>\n");
        printf("<Enter 2: To display all Cars>\n");
        printf("<Enter 3: To Search a Car>\n");
        printf("<Enter 4: To Exit>\n");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            addCars(cars, &carCount);
            break;

        case 2:
            DisplayCars(cars, carCount);
            break;

        case 3:
            searchCars(cars, carCount);
            break;

        case 4:
            printf("\nGood Bye, Exiting The Program....\n");
            return 0;

        default:
            printf("\nInvalid Choice, enter a valid number\n");
        }
    }

    return 0;
}

void addCars(struct Car *cars, int *count)
{
    if (*count >= MAX_CARS)
    {
        printf("Space for Car is full...");
        return;
    }

    printf("Enter Details For Car %d\n", *count + 1);
    printf("Make: ");
    fgets(cars[*count].make, 20, stdin);
    strtok(cars[*count].make, "\n");
    printf("Model: ");
    fgets(cars[*count].model, 20, stdin);
    strtok(cars[*count].model, "\n");
    printf("Year: ");
    scanf("%d", &cars[*count].year);
    getchar();
    printf("Price: ");
    scanf("%f", &cars[*count].price);
    getchar();
    printf("Mileage: ");
    scanf("%f", &cars[*count].mileage);
    getchar();

    (*count)++;

    printf("Car added Successfully!!\n");
}

void DisplayCars(const struct Car *Cars, int count)
{
    if (count == 0)
    {
        printf("No cars Availabe to show!!\n");
        return;
    }
    printf("<-----List of Available Cars----->\n");
    for (int i = 0; i < count; i++)
    {
        printf("Details For Car %d\n", i + 1);

        printf("Make: %s\n", Cars[i].make);

        printf("Model: %s\n", Cars[i].model);

        printf("Year: %d\n", Cars[i].year);

        printf("Price: %.2f$\n", Cars[i].price);

        printf("Mileage: %.2fKm\n", Cars[i].mileage);

        printf("----------------------------------\n");
    }
}

void searchCars(const struct Car *Cars, int count)
{
    char search[25];
    int found = 0;
    if (count == 0)
    {
        printf("No cars Availabe to search For!!\n");
        return;
    }

    printf("Enter Make or Model to search For the Car!!\n");
    fgets(search, 20, stdin);
    strtok(search, "\n");

    printf("Search Results: \n");
    for (int i = 0; i < count; i++)
    {
        if (strcmp(search, Cars[i].make) == 0 || (strcmp(search, Cars[i].model) == 0))
        {
            printf("Details For Car %d\n", i + 1);
            printf("Make: %s\n", Cars[i].make);

            printf("Model: %s\n", Cars[i].model);

            printf("Year: %d\n", Cars[i].year);

            printf("Price: %.2f$\n", Cars[i].price);

            printf("Mileage: %.2fKm\n", Cars[i].mileage);
            printf("----------------------------------");
            found = 1;
        }
    }
    if (!found)
    {
        printf("Car not found for Search %s\n", search);
    }
}