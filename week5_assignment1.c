#include <stdio.h>

float calculateElectricBill(int units) {
    float bill = 0.0;

    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = (100 * 10.0) + ((units - 100) * 15.0);
    } else {
        bill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }

    return bill;
}

int main() {
    int units;
    
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float total_bill = calculateElectricBill(units);
    printf("Total bill amount: KSh. %.2f\n", total_bill);

    return 0;
}