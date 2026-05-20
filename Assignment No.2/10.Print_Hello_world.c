#include<stdio.h>
#include<conio.h>

int main(){

    int Number = 0,i;

    printf("\nEnter Number :");
    scanf("%d",&Number);

    for(i = 0;i < Number ;i++){
        printf("\nHello World!");
    }

    getch();
    return 0;


}
