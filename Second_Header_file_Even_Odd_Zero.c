#include<stdio.h>
#include<conio.h>
#include"Lib1.c";

int Even(int);
int Odd(int);

int main(){

    int No;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    int DEven = Even(No);
    int DOdd = Odd(No);


    getch();
    return 0;



}
