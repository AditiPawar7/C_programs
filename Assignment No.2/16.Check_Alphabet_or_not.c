#include<stdio.h>
#include<conio.h>

int main(){

    char ch ='\0';

    printf("\nEnter a character :");
    scanf("%c",&ch);

    if((ch >= 'A' && ch <= 'Z' ))
        {

        printf("\nTrue",ch);

        }
    else if((ch>='a' && ch<='z' ))
        {

        printf("\nOutput :True.");

        }
    else

        {

        printf("\nFalse.");

        }


     getch();
     return 0;

}


