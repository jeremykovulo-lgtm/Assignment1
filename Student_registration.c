/*Name: Jeremy Kovulo
  Admission number:BCS-05-0070/2026
    */
#include <stdio.h>
#include <stdlib.h>

void saveStudent(){
    FILE *fp;
    char admission_number[30];
    char full_name[30];
    char course[20];
    fp=fopen("C:\\Users\\user\\OneDrive\\Desktop\\C\\Classwork\\students.txt","w");
    printf("Enter your admission number:  \n");
    fgets(admission_number,sizeof(admission_number),stdin);
    printf("Enter your full name:  \n");
    fgets(full_name,sizeof(full_name),stdin);
    printf("Enter your course:  \n");
    fgets(course,sizeof(course),stdin);
    fprintf(fp,"admission number:%sfull name:%scourse:%s",admission_number,full_name,course);
    fclose(fp);

}
void displayStudents(){
    FILE *fp;
    int ch;
    fp=fopen("C:\\Users\\user\\OneDrive\\Desktop\\C\\Classwork\\students.txt","r");
    while ((ch=getc(fp))!=EOF){
        putchar(ch);
    }
    fclose(fp);
}
void addStudent(){
    FILE *fp;
    char admission_number[30];
    char full_name[30];
    char course[20];
    fp=fopen("C:\\Users\\user\\OneDrive\\Desktop\\C\\Classwork\\students.txt","a");
    printf("Enter your admission number:  \n");
    fgets(admission_number,sizeof(admission_number),stdin);
    printf("Enter your full name:  \n");
    fgets(full_name,sizeof(full_name),stdin);
    printf("Enter your course:  \n");
    fgets(course,sizeof(course),stdin);
    fprintf(fp,"admission number:%sfull name:%scourse:%s",admission_number,full_name,course);
    fclose(fp);

}
int main(){
    saveStudent();
    displayStudents();
    addStudent();
    displayStudents();
}
