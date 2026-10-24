/*Name: Jeremy Kovulo
  Admission number:BCS-05-0070/2026
    */
#include <stdio.h>

float calculateFare(float distance){
    return distance * 50.0;
}

int main(){
    float distance, fare;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    fare = calculateFare(distance);
    printf("Total fare = KSh. %.2f\n", fare);

    return 0;
}