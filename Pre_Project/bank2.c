#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store user details
struct User {
    char name[50];
    int age;
    char coin[20];
};

int main() {
    struct User *users = NULL; // Pointer to hold the dynamically allocated array of users
    int userCount = 0;         // Tracks the number of users
    int choice;                // Menu choice

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add User\n");
        printf("2. View User by ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Add a new user
            userCount++;
            users = realloc(users, userCount * sizeof(struct User)); // Reallocate memory for the new user

            if (users == NULL) {
                printf("Memory allocation failed!\n");
                exit(1);
            }

            printf("Enter details for user %d:\n", userCount);
            printf("Enter Your Name: ");
            scanf("%s", users[userCount - 1].name);

            printf("Enter Your Age: ");
            scanf("%d", &users[userCount - 1].age);

            printf("Enter Your Coin: ");
            scanf("%s", users[userCount - 1].coin);

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
            free(users); // Free the dynamically allocated memory
            break;
        } else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
