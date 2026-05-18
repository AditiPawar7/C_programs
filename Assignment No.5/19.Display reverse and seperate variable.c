
#include<stdio.h>
#include<conio.h>

int main(){

    int No = 0,Temp = 0,Dig = 0;

    printf("\nEnter Digit Number :");
    scanf("%d",&No);


    Temp = No;

    printf("Reverse Number = ");

    while(Temp!=0){
        Dig = Temp % 10;
        printf("%d", Dig);
        Temp = Temp / 10;
    }


   getch();
   return 0;

}
