#include <stdio.h>

int main()
{
    int totalSeats = 50;
    int booked;

    printf("Total Seats Available: %d\n", totalSeats);

    printf("Enter number of seats to book: ");
    scanf("%d", &booked);

    if(booked <= totalSeats)
    {
        totalSeats -= booked;
        printf("Booking Successful!\n");
        printf("Remaining Seats: %d\n", totalSeats);
    }
    else
    {
        printf("Not enough seats available.\n");
    }

    return 0;
}