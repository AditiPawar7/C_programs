#include<stdio.h>
#include<conio.h>

int main(){

    int N1,N2 = 0;

    printf("\nEnter a Number :");
    scanf("%d",&N1);

    printf("\nEnter a Number :");
    scanf("%d",&N2);

    if(N1 > N2) {
      printf("\n The Greater number is %d ",N1);
    }
    else{
      printf("\n The Greater number is %d ",N2);

    }


    getch();
    return 0;


}
