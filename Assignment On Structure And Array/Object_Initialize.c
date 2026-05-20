
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

    printf("\nDisplay All Students Details :");

    printf("\n Student Roll_no = %d",S1.Roll_no);

    printf("\n Student Name = %s",S1.Name);

    printf("\n Student City = %s",S1.City);

    printf("\n Student Mobile_no =%.lf",S1.Mobile_No);


    getch();
    return 0;

}

