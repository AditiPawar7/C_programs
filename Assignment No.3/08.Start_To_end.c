#include<stdio.h>
#include<conio.h>

int main(){
     int i;
    char s,e ='\0';

    printf("\nEnter a Start letter :");
    scanf("%c",&s);

    printf("\nEnter a End letter :");
    scanf(" %c",&e);

    for(i=s;i<=e;i++){
        printf("%c ",i);
    }

getch();
return 0;


}

