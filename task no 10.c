#include <stdio.h>
#include <string.h>

int main() {
    float number, sum = 0;
    char choice[10];

    while (1) {
        printf("Enter a number: ");
        scanf("%f", &number);

        sum += number; // add number to running total
        printf("Running total: %.2f\n", sum);

        printf("Do you want to enter another number? (yes/no): ");
        scanf("%s", choice);

        if (strcmp(choice, "no") == 0 || strcmp(choice, "No") == 0) {
            break; // stop the loop
        }
    }

    printf("\n--- Final Result ---\n");
    printf("Total sum of all numbers entered: %.2f\n", sum);

    return 0;
}

