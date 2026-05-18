#include<stdio.h>
#include<conio.h>

int main(){

    int No = 0,Max_No = 0,Dig =0,Temp = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Temp = No;
    while(Temp!=0){
        Dig = Temp % 10;

    if(Dig>Max_No){
        Max_No = Dig;
    }

    Temp = Temp / 10;
    }

    printf("\nThe Maximum Digit is :%d ",Max_No);



   getch();
   return 0;


}
