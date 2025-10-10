#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;  // use 'unsigned long long' for large results

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for valid input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;   // factorial = factorial * i
        }

        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
