#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){

    int No1, No2, No3;
    double result;

    printf("Enter No1 : ");
    scanf("%d", &No1);

    printf("Enter No2 : ");
    scanf("%d", &No2);

    printf("Enter No3 : ");
    scanf("%d", &No3);

    // (No1 ^ No2) ^ No3 using power
    result = pow(pow(No1, No2), No3);

    printf("\nResult = %.0lf", result);

    getch();
    return 0;
}
