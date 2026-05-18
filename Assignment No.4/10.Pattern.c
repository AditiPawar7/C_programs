#include<stdio.h>
#include<conio.h>

int main(){
    int i = 0,j = 0,R = 0,C = 0;
    char ch = 'A';

    printf("\nEnter a Row :");
    scanf("%d",&R);


    printf("\nEnter a Column :");
    scanf("%d",&C);

    for(i = 0;i<=R;i++){
            ch = 'A' + i;

        for(j= 0;j<=C;j++){
            printf("%c",ch);
            printf(" ");
        }
        printf("\n");
    }



 getch();
 return 0;





}
