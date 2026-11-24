
#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter a positive number (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
