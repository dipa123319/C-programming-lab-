#include<stdio.h>
int main() {
    float balance = 5000.0, transaction;
    int deposits = 0, withdrawals = 0;

    printf("Initial Balance: $%.2f\n", balance);
    printf("Enter your transactions (positive for deposit, negative for withdrawal, 0 to stop):\n");

    while (1) {
        printf("Enter transaction amount: ");
        scanf("%f", &transaction);

        if (transaction == 0) {
            break; // stop when user enters 0
        }

        balance += transaction; // update balance

        if (transaction > 0) {
            deposits++;
            printf("Deposit of $%.2f made.\n", transaction);
        } else {
            withdrawals++;
            printf("Withdrawal of $%.2f made.\n", -transaction);
        }

        printf("Updated Balance: $%.2f\n\n", balance);
    }

    printf("\n--- Monthly Summary ---\n");
    printf("Final Balance: $%.2f\n", balance);
    printf("Total Deposits: %d\n", deposits);
    printf("Total Withdrawals: %d\n", withdrawals);

    return 0;
}
        

 

