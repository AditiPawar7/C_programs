#include<stdio.h>
#include<conio.h>

int main(){
    int A,B,C;

    printf("\n\t Input A =");
    scanf("%d",&A);

    printf("\n\t Input B =");
    scanf("%d",&B);

    printf("\n\t Input C =");
    scanf("%d",&C);

    B = A + C;
    C = A - B;
    A = B - C;

    printf("\n\tAfter Swapping : A =%d,B = %d",A,B,C);

  getch();
  return 0;

}
