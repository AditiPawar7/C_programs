#include<stdio.h>
#include<conio.h>

int main(){

    int S1,S2,S3,Total;
    float Percentage;

    printf("\n\tMarks in Subject 1 :");
    scanf("%d",&S1);

    printf("\n\tMarks in Subject 2 :");
    scanf("%d",&S2);

    printf("\n\tMarks in Subject 3 :");
    scanf("%d",&S3);

    Total = S1 + S2 + S3;

    printf("\n\tTotal Marks: %d ",Total);

    Percentage = Total/3.0;

    printf("\n\tPercentage: %.2f ",Percentage);





  getch();
  return 0;

}

