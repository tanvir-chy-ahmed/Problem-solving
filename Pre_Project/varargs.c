#include <stdio.h>
#include <stdarg.h>

// Function to calculate the sum of variable arguments
int sum(int count, ...) {
    int total = 0;
    

    // Initialize the va_list
    va_list args;
    va_start(args, count);

    // Loop through all the arguments
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }

    // Clean up the va_list
    va_end(args);

    return total;
}

int main() {
    // Calling the sum function with different number of arguments
    printf("Sum of 3, 5, 7: %d\n", sum(3, 3, 5, 7));
    printf("Sum of 10, 20: %d\n", sum(2, 10, 20));
    printf("Sum of 1, 2, 3, 4, 5: %d\n", sum(5, 1, 2, 3, 4, 5));

    return 0;
}
