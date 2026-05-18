#include<stdio.h>
#include<conio.h>

int main(){

    int No = 0,Temp = 0,Dig = 0,Rev = 0;

    while(1){

    printf("\nEnter only 4 Digit Number :");
    scanf("%d",&No);
    if( No >= 1000 && No <=9999){
            break;
    }
        printf("\nEnter a Number :");
   }
    Temp = No;
    while(Temp!=0){
        Dig = Temp % 10;
        Rev = (Rev * 10) + Dig;
        Temp = Temp / 10;
    }

    printf("\n No : %d Rev : %d",No,Rev);


   getch();
   return 0;

}
