#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int rollno;
    float marks;
};


int main(){
    struct student s1 = {"chandu", 10, 78.2};
    struct student s2, s3;
    strcpy(s2.name, "abhi");
    s2.rollno = 20;
    s2.marks = 98.10;

    printf("\nEnter Details: \n");
    printf("\nEnter Name: ");
    gets(s3.name);
    printf("\nEnter RollNo: ");
    scanf("%d",&s3.rollno);
    printf("\nEnter Marks: ");
    scanf("%f",&s3.marks);
    printf("\nYou enetered: %s   %d   %.2f",s3.name, s3.rollno, s3.marks);    
    return 0;
}
