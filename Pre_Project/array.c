#include <stdlib.h>
#include <stdio.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int)); // Allocate memory for 5 integers

    for (int i = 0; i < 5; i++) {
        arr[i] = i+2 ;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // Free allocated memory
    return 0;
}
