
#include<stdio.h>
#include<conio.h>

struct Student{
    int Roll_no;
    char Name[8];
    char City[7];
    int Mobile_No;
};

int main(){

    struct Student S1;

    printf("\nDisplay All Students Details :");

    printf("\n Student Roll_no = %d",S1.Roll_no);

    printf("\n Student Name = %s",S1.Name);

    printf("\n Student City = %s",S1.City);

    printf("\n Student Mobile_no =%d",S1.Mobile_No);


    getch();
    return 0;

}
