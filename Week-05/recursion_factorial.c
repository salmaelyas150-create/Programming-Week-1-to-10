
#include <stdio.h>

// Simple recursive factorial
int factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorialRecursive(n - 1);
}

// Tail recursion helper
int factorialTailHelper(int n, int accumulator) {
    if (n <= 1) {
        return accumulator;
    }

    return factorialTailHelper(n - 1, n * accumulator);
}

// Wrapper function
int factorialTail(int n) {
    return factorialTailHelper(n, 1);
}

int main() {
    int num;

    printf("Enter a number to calculate factorial: ");

    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    if (num > 12) {
        printf("Please enter a number between 0 and 12.\n");
        return 1;
    }

    printf("\nUsing simple recursion:\n");
    printf("%d! = %d\n", num, factorialRecursive(num));

    printf("\nUsing tail recursion:\n");
    printf("%d! = %d\n", num, factorialTail(num));

    printf("\n--- Comparison ---\n");
    printf("Simple recursion: Clear and easy to understand.\n");
    printf("Tail recursion: Passes accumulated results to each call.\n");

    return 0;
}
