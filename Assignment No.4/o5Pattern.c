#include<stdio.h>
#include<conio.h>

int main(){

    int i,j,C,R;

    printf("\nEnter a Rows Values :");
    scanf("%d",&R);

     printf("\nEnter a Rows Values :\n");
     scanf("%d",&C);
     int No=R;
     for(i=1;i<=R;i++){
        for(j=1;j<=C;j++){
            printf("%d ",No);


        }
         No--;
        printf("\n");
     }





 getch();
 return 0;






}
