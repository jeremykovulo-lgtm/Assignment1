#include <stdio.h>

int main(void) {
    double units, total_bill = 0.0;

    printf("Enter water units consumed: ");
    if (scanf("%lf", &units) != 1 || units < 0) {
        printf("Invalid units entered.\n");
        return 1;
    }

    if (units <= 30) {
        total_bill = units * 20.0;
    } else if (units <= 60) {
        total_bill = (30.0 * 20.0) + ((units - 30.0) * 25.0);
    } else {
        total_bill = (30.0 * 20.0) + (30.0 * 25.0) + ((units - 60.0) * 30.0);
    }

    printf("Total water bill: %.2f KES\n", total_bill);

    return 0;
}