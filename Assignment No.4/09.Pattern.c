#include<stdio.h>
#include<conio.h>

int main(){

    int i = 0, j= 0,C = 0,R = 0;

    char ch ;

    printf("\nEnter a Row of Value :");
    scanf("%d",&R);


    printf("\nEnter a Column of Value :");
    scanf("%d",&C);

    for(i = 0;i<=R;i++){
            ch = 'A';
        for(j = 0;j<=C;j++){
             printf("%c ", ch);
               ch++;
        }
        printf("\n");
    }



  getch();
  return 0 ;



}



