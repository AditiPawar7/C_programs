#include<stdio.h>
#include<conio.h>

int main(){

    int i,j,C,R ;



    printf("\nEnter a Rows Values :");
    scanf("%d",&R);

     printf("\nEnter a Rows Values :");
     scanf("%d",&C);


     for(i=1;i<=R;i++){
            char ch = 'A';
        for(j=1;j<=C;j++){

            printf(" %c",ch);
            ch++;



        }


        printf("\n");
     }





 getch();
 return 0;






}
