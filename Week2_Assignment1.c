/*Name: Jeremy Kovulo
  Admission number:BCS-05-0070/2026
    */
#include <stdio.h>
#include <math.h>
float pie=3.142;
float radius;
float height;
int main(){
 printf("Enter radius of the cylinder:\t");
 scanf("%f",&radius);
 printf("Enter height of the cylinder:\t");
 scanf("%f",&height);
 float Volume=pie*pow(radius,2)*height;
 float Surface_area=(pie*pow(radius,2))+(2*pie*radius*height);
 printf("Volume =\t%f\n",Volume);
 printf("Surface area =\t%f",Surface_area);
}
