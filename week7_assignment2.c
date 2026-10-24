/*Name: Jeremy Kovulo
  Admission number:BCS-05-0070/2026
    */
#include <stdio.h>

struct Student {
    char name[50];
    char reg_no[30];
    float marks;
};

int main(){
    FILE *fptr;
    struct Student s;

    fptr = fopen("results.dat", "rb");
    if(fptr == NULL){
        printf("Error opening results.dat file!\n");
        return 1;
    }

    printf("Student Examination Results:\n");
    while(fread(&s, sizeof(struct Student), 1, fptr) == 1){
        printf("Name: %s | Marks: %.2f\n", s.name, s.marks);
    }

    fclose(fptr);

    return 0;
}