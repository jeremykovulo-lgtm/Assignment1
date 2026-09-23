#include <stdio.h>
int main(){
    int bookID;
    int dueDate;
    int returnDate;
    int fineRate;
    float charge;
    int daysDue;
    printf("Enter BookID:\t");
    scanf("%d",&bookID);
    printf("Enter due date:\t");
    scanf("%d",&dueDate );
    printf("Enter return date:\t");
    scanf("%d",&returnDate);
    if (returnDate>dueDate){
        int daysDue=returnDate-dueDate;
        if(daysDue<=7){
            fineRate=20;
            charge=daysDue*fineRate;
        }
        else if(daysDue>=8 && daysDue<=14){
            fineRate=50;
            charge=daysDue*fineRate;
        }
        else if(daysDue>=15){
            fineRate=100;
            charge=daysDue*fineRate;
        }
        else{
            fineRate=0;
            charge=0;
        }
    }
        else{
            fineRate=0;
            charge=0;
            daysDue=returnDate-dueDate;
        }
    
    printf("Book ID: %d\n",bookID);
    printf("Due date: %d\n",dueDate);
    printf("Return date: %d\n",returnDate);
    printf("Days overdue: %d\n",daysDue);
    printf("fineRate: %d\n",fineRate);
    printf("fineAmount: %f",charge);
}