#include<stdio.h>
#include<conio.h>

int main(){

    int No = 0,Temp = 0,digit = 0,count = 0,Dcnt = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    printf("\nEnter a Digit To count :");
    scanf("%d",&count);

    Temp = No;
    while(Temp!=0){
     digit = Temp % 10;
     if(digit == count){
            Dcnt++;
     }
     Temp = Temp / 10;

    }

    printf("The digit %d appears %d times",count,Dcnt);

    getch();
    return 0;


}
