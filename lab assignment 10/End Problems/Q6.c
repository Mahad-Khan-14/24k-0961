#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PACKAGES 100

struct TravelPackage
{
    char name[50];
    char destination[50];
    int duration;
    float cost;
    int seats;
};

void addPackage(struct TravelPackage *packages, int *count);
void displayPackages(const struct TravelPackage *packages, int count);
void bookPackage(struct TravelPackage *packages, int count);

int main()
{
    struct TravelPackage packages[MAX_PACKAGES];
    int packageCount = 0, choice;

    while (1)
    {
        printf("\n<---- Travel Package Management System ---->\n");
        printf("1. Add New Package\n");
        printf("2. Display Available Packages\n");
        printf("3. Book a Travel Package\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            addPackage(packages, &packageCount);
            break;
        case 2:
            displayPackages(packages, packageCount);
            break;
        case 3:
            bookPackage(packages, packageCount);
            break;
        case 4:
            printf("Thank you for using the system. Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to Add New Travel Packages
void addPackage(struct TravelPackage *packages, int *count)
{
    if (*count >= MAX_PACKAGES)
    {
        printf("Package storage is full!\n");
        return;
    }

    printf("Enter Details for Package %d\n", *count + 1);
    printf("Package Name: ");
    fgets(packages[*count].name, 50, stdin);
    strtok(packages[*count].name, "\n");

    printf("Destination: ");
    fgets(packages[*count].destination, 50, stdin);
    strtok(packages[*count].destination, "\n");

    printf("Duration (days): ");
    scanf("%d", &packages[*count].duration);
    getchar();

    printf("Cost ($): ");
    scanf("%f", &packages[*count].cost);
    getchar();

    printf("Available Seats: ");
    scanf("%d", &packages[*count].seats);
    getchar();

    (*count)++;
    printf("Package added successfully!\n");
}

// Function to Display All Available Packages
void displayPackages(const struct TravelPackage *packages, int count)
{
    if (count == 0)
    {
        printf("No packages available!\n");
        return;
    }

    printf("\n<---- Available Travel Packages ---->\n");
    for (int i = 0; i < count; i++)
    {
        printf("Package %d:\n", i + 1);
        printf("Name: %s\n", packages[i].name);
        printf("Destination: %s\n", packages[i].destination);
        printf("Duration: %d days\n", packages[i].duration);
        printf("Cost: $%.2f\n", packages[i].cost);
        printf("Available Seats: %d\n", packages[i].seats);
        printf("-------------------------------\n");
    }
}

// Function to Book a Travel Package
void bookPackage(struct TravelPackage *packages, int count)
{
    char searchName[50];
    int found = 0;

    if (count == 0)
    {
        printf("No packages available to book!\n");
        return;
    }

    printf("Enter the name of the travel package to book: ");
    fgets(searchName, 50, stdin);
    strtok(searchName, "\n");

    for (int i = 0; i < count; i++)
    {
        if (strcmp(searchName, packages[i].name) == 0)
        {
            found = 1;
            if (packages[i].seats > 0)
            {
                packages[i].seats--;
                printf("Package booked successfully!\n");
                printf("Remaining Seats: %d\n", packages[i].seats);
            }
            else
            {
                printf("Sorry, no seats available for this package.\n");
            }
            break;
        }
    }

    if (!found)
    {
        printf("Package '%s' not found!\n", searchName);
    }
}
