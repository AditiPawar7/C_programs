#include<stdio.h>
#include<conio.h>

int main(){

      int No = 0,Temp = 0,Dig = 0,cnt = 0;
      int E = 0,O = 0,Z = 0;

      printf("\nEnter a Number :");
      scanf("%d",&No);

      Temp = No;


      while(Temp!=0){

      Dig = Temp % 10;
      if(Dig == 0){
        Z++;
      }
      else if( Dig % 2 ==0 ){
        E++;
      }
      else{
        O++;
      }
      Temp = Temp /10;
    }

    printf("\nEven Digits Count = %d", E);
    printf("\nOdd Digits Count  = %d", O);
    printf("\nZero Digits Count = %d", Z);




      getch();
      return 0;



}
