#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a car
typedef struct {
    char make[50];
    char model[50];
    int year;
    double price;
    int mileage;
} Car;

// Global variables
#define MAX_CARS 100
Car cars[MAX_CARS];
int car_count = 0;

// Function to add a new car
void addCar() {
    if (car_count >= MAX_CARS) {
        printf("Error: Maximum car limit reached.\n");
        return;
    }

    printf("Enter car make: ");
    scanf("%s", cars[car_count].make);

    printf("Enter car model: ");
    scanf("%s", cars[car_count].model);

    printf("Enter car year: ");
    scanf("%d", &cars[car_count].year);

    printf("Enter car price: ");
    scanf("%lf", &cars[car_count].price);

    printf("Enter car mileage: ");
    scanf("%d", &cars[car_count].mileage);

    car_count++;
    printf("Car added successfully.\n");
}

// Function to display all available cars
void displayCars() {
    if (car_count == 0) {
        printf("No cars available.\n");
        return;
    }

    printf("\nAvailable Cars:\n");
    for (int i = 0; i < car_count; i++) {
        printf("Car %d:\n", i + 1);
        printf("  Make: %s\n", cars[i].make);
        printf("  Model: %s\n", cars[i].model);
        printf("  Year: %d\n", cars[i].year);
        printf("  Price: $%.2lf\n", cars[i].price);
        printf("  Mileage: %d miles\n", cars[i].mileage);
    }
}

// Function to search for cars by make or model
void searchCars() {
    char query[50];
    printf("Enter make or model to search: ");
    scanf("%s", query);

    int found = 0;
    printf("\nSearch Results:\n");
    for (int i = 0; i < car_count; i++) {
        if (strstr(cars[i].make, query) || strstr(cars[i].model, query)) {
            found = 1;
            printf("Car %d:\n", i + 1);
            printf("  Make: %s\n", cars[i].make);
            printf("  Model: %s\n", cars[i].model);
            printf("  Year: %d\n", cars[i].year);
            printf("  Price: $%.2lf\n", cars[i].price);
            printf("  Mileage: %d miles\n", cars[i].mileage);
        }
    }

    if (!found) {
        printf("No cars found matching the query.\n");
    }
}

// Main menu
int main() {
    int choice;
    do {
        printf("\nCar Dealership System\n");
        printf("1. Add New Car\n");
        printf("2. Display All Cars\n");
        printf("3. Search Cars by Make or Model\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addCar();
                break;
            case 2:
                displayCars();
                break;
            case 3:
                searchCars();
                break;
            case 4:
                printf("Exiting the system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    return 0;
}
