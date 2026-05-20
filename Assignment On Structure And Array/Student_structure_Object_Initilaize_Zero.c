
#include<stdio.h>
#include<conio.h>

struct Student{
    int Roll_no;
    char Name[20];
    char City[20];
    double Mobile_No;
};

int main(){

    struct Student S1 = {1,"Aryan","Karad",6767579363};

    struct Student S2 = {0,"","",0};

    struct Student S3 = {};

    printf("\n\nDisplay First Students Details :");


    printf("\n Student Roll_no = %d",S1.Roll_no);

    printf("\n Student Name = %s",S1.Name);

    printf("\n Student City = %s",S1.City);

    printf("\n Student Mobile_no =%.lf",S1.Mobile_No);


    printf("\n\nDisplay Second Students Details :");


    printf("\n Student Roll_no = %d",S2.Roll_no);

    printf("\n Student Name = %s",S2.Name);

    printf("\n Student City = %s",S2.City);

    printf("\n Student Mobile_no =%.lf",S2.Mobile_No);


    printf("\n\nDisplay Third Students Details :");


    printf("\n Student Roll_no = %d",S3.Roll_no);

    printf("\n Student Name = %s",S3.Name);

    printf("\n Student City = %s",S3.City);

    printf("\n Student Mobile_no =%.lf",S3.Mobile_No);




    getch();
    return 0;

}


