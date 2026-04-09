#include<stdio.h>
#include<conio.h>

int main(){

    float km;
    int meter;

    printf("\n\tDistance :");
    scanf("%f",&km);

    meter = 1000 * km;
    printf("\n\tDistance in meter : %d meter ",meter);

  getch();
  return 0;

}
