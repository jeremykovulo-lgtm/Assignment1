/*Name: Jeremy Kovulo
  Admission number:BCS-05-0070/2026
    */
#include <stdio.h>

int main(){
    FILE *fptr;
    char title[100];

    fptr = fopen("borrowed_books.txt", "a");
    if(fptr == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title: ");
    scanf(" %[^\n]", title);

    fprintf(fptr, "%s\n", title);
    fclose(fptr);

    printf("Book title successfully stored.\n");

    return 0;
}