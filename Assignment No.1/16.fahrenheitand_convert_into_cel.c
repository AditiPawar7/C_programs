#include<stdio.h>
#include<conio.h>

int main(){
    float F,C;

    printf("\n\tTemperature : ");
    scanf("%f",&F);

    C = (F -32)*(5.0/9.0);

    printf("\n\tTemperature in celsius %.2f c",C);

  getch();
  return 0;

}
