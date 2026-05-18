#include<stdio.h>
#include<conio.h>

int main(){

    long long int No = 0,Temp = 0,Dig = 0,cnt = 0;

    printf("\nEnter a Number :");
    scanf("%lld",&No);

    Temp = No;

    while(Temp!=0){
            if(Temp % 2 == 0){
              cnt++;
            }
            else{
                break;
            }
        Dig = Temp % 10;

        Temp = Temp /10;
    }

    printf("\Enter a Digit Of Counts %lld => %lld" ,No,cnt);


      getch();
      return 0;



}
