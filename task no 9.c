#include <stdio.h>
#include <string.h>

int main() {
    int num, largest, smallest;
    char choice[10];
    int firstInput = 1; // to handle the first input separately

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (firstInput) {
            largest = smallest = num; // initialize both with the first number
            firstInput = 0;
        } else {
            if (num > largest)
                largest = num;
            if (num < smallest)
                smallest = num;
        }

        printf("Current Largest: %d\n", largest);
        printf("Current Smallest: %d\n", smallest);

        printf("Do you want to continue? (yes/no): ");
        scanf("%s", choice);

        if (strcmp(choice, "no") == 0 || strcmp(choice, "No") == 0) {
            break;
        }
    }

    printf("\n--- Final Results ---\n");
    printf("Largest number entered: %d\n", largest);
    printf("Smallest number entered: %d\n", smallest);

    return 0;
}
