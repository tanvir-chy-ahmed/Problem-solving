#include <stdio.h>

typedef int** IntPtrPtr;  // Typedef for pointer to pointer to int

int main() {
    int x = 5;
    int* ptr = &x;
    IntPtrPtr ptrPtr = &ptr;  // Pointer to pointer to int
    
    printf("Value of x: %d\n", **ptrPtr);  // Dereference twice to get x
    
    return 0;
}
