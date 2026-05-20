#include<stdio.h>
#include<conio.h>

int main(){
    int No ;

    printf("\n\tEnter Number :");
    scanf("%d",&No);
    //Ternary Operator
    (No % 2==0 )? printf("\n\t%d is even number",No): printf("\n\t%d is odd number",No);


  getch();
  return 0;

}
