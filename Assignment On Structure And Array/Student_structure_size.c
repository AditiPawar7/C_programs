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

    printf("\n Size of No = %d",sizeof(int));

    printf("\n Size of Double = %d",sizeof(double));

    printf("\n Size of short Interger = %d",sizeof(short int));

    printf("\n Size of Student Structure = %d",sizeof(struct Student));


    printf("\n Size of Student Structure Object = %d",sizeof(S1));



    getch();
    return 0;

}
