#include<stdio.h>
#include<conio.h>

int main(){
    int No = 0,Digit = 0 ,sum = 0,Temp =0;

    printf("\nEnter a % Digit Number :");
    scanf("%d",&No);

    if( No >=10000 && No <=99999 ){
        Temp = No;


    while(Temp!=0){
        Digit = No % 10;
        sum = sum + Digit;
        Temp = Temp / 10;
     }
       printf("Sum of digits = %d", sum);
    }
    else{
        printf("\nInvalid Input....");
    }

  getch();
  return 0;

}

