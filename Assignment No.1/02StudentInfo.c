#include<stdio.h>
#include<conio.h>

int main(){
    char Name[10];
    int Roll_No;
    char Course[9];
    char City[7];

    printf("\n\tEnter Student Name :");
    scanf("%s",&Name);

    printf("\n\tEnter Roll number :");
    scanf("%d",&Roll_No);

    printf("\n\tEnter Course :");
    scanf("%s",&Course);

    printf("\n\tCity  :");
    scanf("%s",&City);

    printf("\n\tStudent Name :%s \n\tRoll Number :%d\n\tCourse : %s\n\tCity :%s",Name,Roll_No,Course,City);

  getch();
  return 0;

}

