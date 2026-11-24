
#include <stdio.h>

// Function demonstrating pass-by-value
void swapByValue(int a, int b) {

    printf("Inside function - Before swap: a = %d, b = %d\n", a, b);

    // Temporary variable
    int temp = a;

    // Swap the copied values
    a = b;
    b = temp;

    printf("Inside function - After swap: a = %d, b = %d\n", a, b);
}

// Function demonstrating swapping using pointers
void swapByPointer(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int x = 10;
    int y = 20;

    // Display original values
    printf("Before calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call pass-by-value function
    swapByValue(x, y);

    // Display original values again
    printf("\nAfter calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    // Swap using pointers
    swapByPointer(&x, &y);

    printf("\nAfter calling swapByPointer:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
