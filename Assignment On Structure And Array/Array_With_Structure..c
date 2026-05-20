#include<stdio.h>
#include<conio.h>

struct Student{

    int Roll_No;
    char Name[20];
    char City[10];
    int Mobile_no;
};

int main(){

    struct Student S_arr[3];
    int i;

    // Accept Details
    for(i = 0; i < 3; i++){

        printf("\nEnter %d Student Roll_No : ", i+1);
        scanf("%d",&S_arr[i].Roll_No);

        printf("Enter %d Student Name : ", i+1);
        scanf("%s",S_arr[i].Name);

        printf("Enter %d Student City : ", i+1);
        scanf("%s",S_arr[i].City);

        printf("Enter %d Student Mobile_No : ", i+1);
        scanf("%d",&S_arr[i].Mobile_no);
    }

    // Display Details
    printf("\n\nDisplay Student Details\n");

    for(i = 0; i < 3; i++){

        printf("\n%d Student Details =>", i+1);

        printf("\nRoll_No = %d", S_arr[i].Roll_No);

        printf("\nName = %s", S_arr[i].Name);

        printf("\nCity = %s", S_arr[i].City);

        printf("\nMobile_No = %d\n", S_arr[i].Mobile_no);
    }

    getch();
    return 0;
}
