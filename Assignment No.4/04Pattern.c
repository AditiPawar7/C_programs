#include<stdio.h>
#include<conio.h>

int main(){

    int i,j,C,R=0;

    printf("\nEnter a Rows Values :");
    scanf("%d",&R);

     printf("\nEnter a Rows Values :\n");
     scanf("%d",&C);

     for(i=1;i<=R;i++){
         int no=C;
        for(j=1;j<=C;j++){
            printf("%d ",no);
             no--;


        }
        printf("\n");
     }





 getch();
 return 0;






}
