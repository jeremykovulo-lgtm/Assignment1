#include <stdio.h>

int main(void) {
    float attendance, average;

    printf("Enter attendance percentage: ");
    if (scanf("%f", &attendance) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter average marks: ");
    if (scanf("%f", &average) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (attendance >= 75.0f && average >= 40.0f) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}