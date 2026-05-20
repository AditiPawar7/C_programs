#include<stdio.h>
#include<conio.h>

int main(){

    int N1,N2,N3 = 0;

    printf("\nEnter a Number :");
    scanf("\n\n%d%d%d",&N1,&N2,&N3);


    if(N1 > N2) {
      printf("\n The Greater number is %d ",N1);
    }
    else if(N1>N3){
      printf("\n The Greater number is %d ",N2);
    }
    else{
      printf("\n The Greater number is %d ",N3);
    }


    getch();
    return 0;


}
