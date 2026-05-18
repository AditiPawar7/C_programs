#include<stdio.h>
#include<conio.h>

int main(){

    int no,Dsum=0,Temp=0,Dig=0;


    printf("\nEnter a Number :");
    scanf("%d",&no);

     Temp=no;

    while(Temp>0){

        Dig = Temp % 10;
        Dsum = Dsum + Dig;
        Temp = Temp /10;

    }

    printf("\nEnter a Dsum %d => %d",no,Dsum);


   getch();
   return 0;


}
