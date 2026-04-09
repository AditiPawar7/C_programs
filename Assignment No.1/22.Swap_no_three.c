#include<stdio.h>
#include<conio.h>

int main(){
    int A,B,C,Temp;

    printf("\n\t Input A =");
    scanf("%d",&A);

    printf("\n\t Input B =");
    scanf("%d",&B);

    printf("\n\t Input C =");
    scanf("%d",&C);

    Temp =A ;
    A =  C;
    C =  B;
    B = Temp;

    printf("\n\tAfter Swapping : A =%d,B = %d,c = %d",A,B,C);

  getch();
  return 0;

}
