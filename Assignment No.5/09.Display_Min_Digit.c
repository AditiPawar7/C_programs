#include<stdio.h>
#include<conio.h>

int main(){

    int No = 0,Min_No,Dig =0,Temp = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Temp = No;
    Min_No = No % 10;

    while(Temp!=0){
    Dig = Temp % 10;

    if(Dig<Min_No){
    Min_No = Dig;
    }

    Temp = Temp / 10;
    }

    printf("\nThe Maximum Digit is :%d ",Min_No);



   getchar();
   return 0;


}
