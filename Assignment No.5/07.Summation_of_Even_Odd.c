#include<stdio.h>
#include<conio.h>

int main(){

    int No = 0,Temp = 0,Dig = 0,Osum=0,Esum=0;

     printf("\nEntet a Number :");
     scanf("%d",&No);

     Temp = No;
     while(Temp!=0){
     Dig = Temp % 10;
     if(Temp % 2 == 0)
  {
     Esum = Esum + Dig;
    }
    else{
        Osum = Osum + Dig;
    }

    Temp = Temp /10;

}
 int Diff = Esum - Osum;
    printf("\nDifference : %d",Diff);

    getch();
    return 0;

}
