/*Name: Jeremy Kovulo
  Admission number:BCS-05-0070/2026
    */
#include <stdio.h>

int main(){
    FILE *fptr;
    float amount, totalSales = 0.0;

    fptr = fopen("sales.txt", "r");
    if(fptr == NULL){
        printf("Error opening sales.txt file!\n");
        return 1;
    }

    while(fscanf(fptr, "%f", &amount) == 1){
        totalSales += amount;
    }

    fclose(fptr);

    printf("Total sales for the day: KSh. %.2f\n", totalSales);

    return 0;
}