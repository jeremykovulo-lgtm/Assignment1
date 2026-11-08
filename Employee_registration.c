#include <stdio.h>
#include <stdlib.h>

void writeEmployee(){
    FILE *fp;
    char identification_number[30];
    char full_name[30];
    char department[20];
    fp=fopen("C:\\Users\\user\\OneDrive\\Desktop\\C\\Classwork\\employees.txt","w");
    printf("Enter your identification number:  \n");
    fgets(identification_number,sizeof(identification_number),stdin);
    printf("Enter your full name:  \n");
    fgets(full_name,sizeof(full_name),stdin);
    printf("Enter your department:  \n");
    fgets(department,sizeof(department),stdin);
    fprintf(fp,"admission number:%sfull name:%scourse:%s",identification_number,full_name,department);
    fclose(fp);

}
void readEmployee(){
    FILE *fp;
    int ch;
    fp=fopen("C:\\Users\\user\\OneDrive\\Desktop\\C\\Classwork\\employees.txt","r");
    while ((ch=getc(fp))!=EOF){
        putchar(ch);
    }
    fclose(fp);
}
void appendEmployee(){
     FILE *fp;
    char identification_number[30];
    char full_name[30];
    char department[20];
    fp=fopen("C:\\Users\\user\\OneDrive\\Desktop\\C\\Classwork\\employees.txt","a");
    printf("...\nAdditional employees Registry!\n");
    printf("Enter your identification number:  \n");
    fgets(identification_number,sizeof(identification_number),stdin);
    printf("Enter your full name:  \n");
    fgets(full_name,sizeof(full_name),stdin);
    printf("Enter your department:  \n");
    fgets(department,sizeof(department),stdin);
    fprintf(fp,"identification number:%sfull name:%sDepartment:%s",identification_number,full_name,department);
    fclose(fp);

}
int main(){
    writeEmployee();
    readEmployee();
    appendEmployee();
    readEmployee();
}
