#include <stdio.h>
#include <math.h>

int calculateTotal(int s1r,int s2,int s3){

    return(s1+s2+s3);
}
float calculateAverage(float total){
    return(total/3);
}
void displayResult(float average_mark){
if (average_mark>=50){
    printf("Student has Passed");
}
else {
    printf("Student has Failed");
}

}
void main(){
    int s1,s2,s3;
    printf("Enter marks for three subjects:\n");
    printf("Enter marks for s1,s2 and s3:\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    int total=calculateTotal(s1,s2,s3);
    printf("Total is %d\n",total);
    float average=calculateAverage(total);
    printf("Average is %f\n",average);
    displayResult(average);


}
