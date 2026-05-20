#include<stdio.h>
#include<conio.h>
#include"Lib.c"

int sum_Digit(int num);
int Rev_Dig(int num);
int main(){

    int No = 0,dsum = 0,Rev=0;


    printf("\nEnter a Number :");
    scanf("%d",&No);

    dsum = sum_Digit(No);
    Rev = Rev_Dig(No);

    printf("\nDisplay the given of number Dsum : %d",dsum);

    printf("\nDisplay the given of number Reverese : %d",Rev);


}
