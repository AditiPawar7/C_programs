#include<stdio.h>
#include<conio.h>

int main(){

    int No=0,Mult=1,Temp=0,Dig=0;

    printf("\nEnter a Number :");
    scanf("%d",&No);
     Temp = No;
    while(Temp!=0){

        Dig = Temp % 10;
        Mult = Mult * Dig;
        Temp = Temp /10;

    }

   printf("\nEnter a Multiplication %d=>%d",No,Mult);


   getch();
   return 0;


}
