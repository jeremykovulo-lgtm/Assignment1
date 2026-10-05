#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;

    // Seed the random number generator
    srand(time(NULL));
    secret_number = (rand() % 20) + 1; // Random number between 1 and 20

    printf("--- Number Guessing Game (1 to 20) ---\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_number) {
            printf("Too high!\n");
        } else if (guess < secret_number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the correct number.\n");
            printf("Total attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}