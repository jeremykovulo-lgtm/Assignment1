/*Name: Jeremy Kovulo
  Admission number:BCS-05-0070/2026
  Helper program: generates results.dat (binary) for week7_assignment2.c
  Compile: gcc week7_assignment2_create.c -o create_results
  Run:     ./create_results
    */
#include <stdio.h>

/* IMPORTANT: this struct must be byte-for-byte identical to the one
   in week7_assignment2.c, otherwise the read loop will print garbage. */
struct Student {
    char name[50];
    char reg_no[30];
    float marks;
};

int main(){
    /* Sample records — padded so name/reg_no fit their fixed-size arrays */
    struct Student students[] = {
        {"Alice Wanjiku",  "BCS-05-0001/2026", 78.50},
        {"Brian Otieno",   "BCS-05-0002/2026", 64.00},
        {"Cynthia Mwangi", "BCS-05-0003/2026", 91.25},
        {"David Kiprop",   "BCS-05-0004/2026", 55.75},
        {"Esther Achieng", "BCS-05-0005/2026", 88.00}
    };
    int n = (int)(sizeof(students) / sizeof(students[0]));

    FILE *fptr = fopen("results.dat", "wb");   /* "wb" = write binary */
    if(fptr == NULL){
        printf("Error creating results.dat!\n");
        return 1;
    }

    /* fwrite writes the raw bytes of each struct, one after another */
    size_t written = fwrite(students, sizeof(struct Student), n, fptr);
    fclose(fptr);

    if(written != (size_t)n){
        printf("Warning: only %zu of %d records written.\n", written, n);
        return 1;
    }

    printf("results.dat created successfully with %d records.\n", n);
    return 0;
}