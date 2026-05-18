
#include<stdio.h>
#include<conio.h>

int main(){

    int No = 0,Temp = 0,Dig = 0,Rev = 0;

    printf("\nEnter Digit Number :");
    scanf("%d",&No);


    Temp = No;
    while(Temp!=0){
        Dig = Temp % 10;
        Rev = (Rev * 10) + Dig;
        Temp = Temp / 10;
    }
    if(Rev == No){
        printf("\nThe number is a Palindrome..");
    }
    else{
        printf("\nThe number is not a Palindrome..");
    }




   getch();
   return 0;

}
