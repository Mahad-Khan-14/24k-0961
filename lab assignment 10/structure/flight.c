#include <stdio.h>
#include <string.h>

struct Flight
{
    int flightNumber;
    char departureCity[50];
    char destinationCity[50];
    char date[15];
    int availableSeats;
};

// Function to book a seat.
void bookSeat(struct Flight *flight)
{
    if (flight->availableSeats > 0)
    {
        flight->availableSeats--;
        printf("Seat booked successfully! Remaining seats: %d\n", flight->availableSeats);
    }
    else
    {
        printf("No seats available for booking.\n");
    }
}

void displayFlightDetails(struct Flight flight)
{
    printf("\nFlight Details:\n");
    printf("Flight Number: %d\n", flight.flightNumber);
    printf("Departure City: %s\n", flight.departureCity);
    printf("Destination City: %s\n", flight.destinationCity);
    printf("Date: %s\n", flight.date);
    printf("Available Seats: %d\n", flight.availableSeats);
}

int main()
{

    struct Flight flight1 = {101, "New York", "London", "2024-12-15", 10};

    displayFlightDetails(flight1);

    char choice;
    printf("\nDo you want to book a seat? (y/n): ");
    scanf(" %c", &choice);
    
    if (choice == 'y' || choice == 'Y')
    {
        bookSeat(&flight1);
    }
    else
    {
        printf("No seat booked.\n");
    }

    displayFlightDetails(flight1);

    return 0;
}
