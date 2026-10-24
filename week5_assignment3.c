/*Name: Jeremy Kovulo
  Admission number:BCS-05-0070/2026
    */
#include <stdio.h>

float convertToCelsius(float fahrenheit){
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

int main(){
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius = %.2f\n", celsius);

    return 0;
}