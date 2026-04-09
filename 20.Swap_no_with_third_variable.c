#include<stdio.h>
#include<conio.h>

int main(){
    int A,B,T;

    printf("\n\t Input A =");
    scanf("%d",&A);

    printf("\n\t Input B =");
    scanf("%d",&B);

    T = A;
    A = B;
    B = T;

    printf("\n\tAfter Swapping : A =%d,B = %d",A,B);

  getch();
  return 0;

}
