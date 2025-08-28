#include <stdio.h>
#include <string.h>

// Define a structure to store user details
struct User {
    char name[50]; // Array to store name
    int age;       // Integer to store age
    char coin[20]; // Array to store type of coin
};

int main() {
    struct User users[100]; // Array to store up to 100 users
    int userCount = 0;      // Keeps track of the number of users
    int choice;             // User's choice for menu options

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add User\n");
        printf("2. View User by ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Add a new user
            if (userCount >= 100) {
                printf("User list is full!\n");
                continue;
            }
            printf("Enter details for user %d:\n", userCount + 1);

            printf("Enter Your Name: ");
            scanf("%s", users[userCount].name);

            printf("Enter Your Age: ");
            scanf("%d", &users[userCount].age);

            printf("Enter Your Coin: ");
            scanf("%s", users[userCount].coin);

            userCount++;
            printf("User added successfully!\n");
        } else if (choice == 2) {
            // View user by ID
            int id;
            printf("Enter the User ID (1 to %d): ", userCount);
            scanf("%d", &id);

            if (id < 1 || id > userCount) {
                printf("Invalid User ID!\n");
            } else {
                printf("Details for User %d:\n", id);
                printf("Name: %s\n", users[id - 1].name);
                printf("Age: %d\n", users[id - 1].age);
                printf("Coin: %s\n", users[id - 1].coin);
            }
        } else if (choice == 3) {
            // Exit the program
            printf("Exiting the program. Goodbye!\n");
            break;
        } else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
