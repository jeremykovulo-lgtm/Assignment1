#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    
    printf("Select a program:\n");
    printf("1. Bank Loan Eligibility Check\n");
    printf("2. Calculate Simple Interest\n");
    printf("3. Calculate Compound Interest\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        int age;
        float income;

        printf("Please enter your age in years: ");
        scanf("%d", &age);

        printf("Please enter your annual income (in Sh): ");
        scanf("%f", &income);

        if (age >= 21 && income >= 21000) {
            printf("Congratulations you qualify for a loan.\n");
        } else {
            printf("Unfortunately, we are unable to offer you a loan at this time.\n");
        }
    } else if (choice == 2) {
        float principal, time, rate, simple_interest;

        printf("Enter the principal amount (Sh): ");
        scanf("%f", &principal);

        printf("Enter the time period (in years): ");
        scanf("%f", &time);

        printf("Enter the annual interest rate (in %%): ");
        scanf("%f", &rate);

        simple_interest = (principal * time * rate) / 100.0;

        printf("The Simple Interest is: Sh %.2f\n", simple_interest);
    } else if (choice == 3) {
        double principal, time, rate, amount, compound_interest;

        printf("Enter the principal amount (Sh): ");
        scanf("%lf", &principal);

        printf("Enter the time period (in years): ");
        scanf("%lf", &time);

        printf("Enter the annual interest rate (in %%): ");
        scanf("%lf", &rate);

        amount = principal * pow((1 + rate / 100.0), time);
        compound_interest = amount - principal;

        printf("Total Amount after %.1f years: Sh %.2f\n", time, amount);
        printf("The Compound Interest is: Sh %.2f\n", compound_interest);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}