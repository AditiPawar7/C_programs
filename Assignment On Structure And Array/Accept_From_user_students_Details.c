#include<stdio.h>
#include<conio.h>

struct Student{

    int Roll_no;
    char Name[20];
    char City[20];
    int Mobile_No;
};

int main(){

    struct Student S1, S2, S3;

    printf("\nAccepting All Students Details :");

    // First Student
    printf("\nEnter First Student Roll_no : ");
    scanf("%d",&S1.Roll_no);

    printf("\nEnter First Student Name : ");
    scanf("%s",S1.Name);

    printf("\nEnter First Student City : ");
    scanf("%s",S1.City);

    printf("\nEnter First Student Mobile_no : ");
    scanf("%d",&S1.Mobile_No);

    // Second Student
    printf("\nEnter Second Student Roll_no : ");
    scanf("%d",&S2.Roll_no);

    printf("\nEnter Second Student Name : ");
    scanf("%s",S2.Name);

    printf("\nEnter Second Student City : ");
    scanf("%s",S2.City);

    printf("\nEnter Second Student Mobile_no : ");
    scanf("%d",&S2.Mobile_No);

    // Third Student
    printf("\nEnter Third Student Roll_no : ");
    scanf("%d",&S3.Roll_no);

    printf("\nEnter Third Student Name : ");
    scanf("%s",S3.Name);

    printf("\nEnter Third Student City : ");
    scanf("%s",S3.City);

    printf("\nEnter Third Student Mobile_no : ");
    scanf("%d",&S3.Mobile_No);

    // Display
    printf("\n\nDisplay First Student Details");
    printf("\nRoll_no = %d",S1.Roll_no);
    printf("\nName = %s",S1.Name);
    printf("\nCity = %s",S1.City);
    printf("\nMobile_no = %d",S1.Mobile_No);

    printf("\n\nDisplay Second Student Details");
    printf("\nRoll_no = %d",S2.Roll_no);
    printf("\nName = %s",S2.Name);
    printf("\nCity = %s",S2.City);
    printf("\nMobile_no = %d",S2.Mobile_No);

    printf("\n\nDisplay Third Student Details");
    printf("\nRoll_no = %d",S3.Roll_no);
    printf("\nName = %s",S3.Name);
    printf("\nCity = %s",S3.City);
    printf("\nMobile_no = %d",S3.Mobile_No);

    getch();
    return 0;
}
