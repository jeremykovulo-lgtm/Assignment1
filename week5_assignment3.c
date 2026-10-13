/*Name: Jeremy Kovulo
  Admission number:BCS-05-0070/2026
    */
#include <stdio.h>
#include <math.h>
int main(){
    float length,width,diagonal;
    printf("Enter length and width\n");
    scanf("%f%f",&length,&width);
    diagonal=sqrt(pow(length,2)+pow(width,2));
    printf("Length = %f\n",length);
    printf("Width = %f\n",width);
    printf("The diagonal is %f",diagonal);
    return 0;
}
//sqrt() is a function used to calculate the square root of numbers entered inside
