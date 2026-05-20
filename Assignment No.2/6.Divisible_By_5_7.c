
#include<stdio.h>
#include<conio.h>

int main(){
    int No ;

    printf("\n\tEnter Number :");
    scanf("%d",&No);

    if(No % 5 ==0 || No % 7 == 0 ){
      printf("\n\t%d is Divisible By 5 and 7",No);
    }
    else{
       printf("\n\t%d is not Divisible By 5 and 7",No);
    }


  getch();
  return 0;

}

