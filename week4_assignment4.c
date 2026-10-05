#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    const char correct_password[] = "1234";

    printf("--- Password Login System ---\n");

    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, correct_password) != 0) {
            printf("Incorrect password. Try again.\n");
        }
    } while (strcmp(password, correct_password) != 0);

    printf("Access Granted\n");

    return 0;
}