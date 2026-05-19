#include<stdio.h>
#include<conio.h>

int Factorial(int);

int main(){

    int No = 0,Ans = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Ans = Factorial(No);

    printf("\nFactorial :%d",Ans);

   return 0;
}
int Factorial( int num){

    int i = 0,fact = 1;

    for(i=1;i<=num;i++){
        fact = fact * i;
    }
    return fact;


}
