/*Name: Jeremy Kovulo
  Admission number:BCS-05-0070/2026
    */
#include <stdio.h>
float height;
double bank_balance;
char phone_number[15];

int main(){
   printf("Enter your height in metres:\t");
   scanf("%f",&height);
   printf("Enter your bank balance in Kenyan shillings:\t");
   scanf("%lf",&bank_balance);
   printf("Enter your phone number:\t");
   scanf("%s",phone_number);

   printf("Your height is %f",height);
   printf("Your bank balance is %lf",bank_balance);
   printf("Your phone number is %s",phone_number);
   return 0;
}
