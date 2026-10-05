/*Name: Jeremy Kovulo
  Admission number:BCS-05-0070/2026
    */
#include <stdio.h>

int main() {
    double balance, withdrawal;

    printf("--- ATM Withdrawal System ---\n");
    printf("Enter initial account balance (KES): ");
    scanf("%lf", &balance);

    while (balance > 0) {
        printf("Current balance: %.2f KES\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%lf", &withdrawal);

        if (withdrawal <= 0) {
            printf("Invalid withdrawal amount! Please enter a positive value.\n\n");
            continue;
        }

        balance -= withdrawal;

        if (balance > 0) {
            printf("Withdrawal successful. Remaining balance: %.2f KES\n\n", balance);
        } else {
            printf("Withdrawal successful. Balance is now %.2f KES (Zero or negative).\n", balance);
        }
    }

    printf("Session ended. Account balance is no longer greater than 0.\n");
    return 0;
}
