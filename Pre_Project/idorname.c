#include <stdio.h>
#include <stdlib.h>

typedef struct myData {
    int id;
    char name[50];
} todo;

int main() {
    todo *add;

    // Allocate memory for one todo object
    add = (todo *)calloc(1, sizeof(todo));

    if (add == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize data
    add->id = 1;
    snprintf(add->name, sizeof(add->name), "Example Task");

    // Print data
    printf("ID: %d, Name: %s\n", add->id, add->name);

    // Free allocated memory
    free(add);

    return 0;
}
