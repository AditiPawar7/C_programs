#include<stdio.h>
#include<conio.h>

int main(){

    char ch ='\0';

    printf("\nEnter a character :");
    scanf("%c",&ch);

    if((ch >= 'A' && ch <= 'Z' ))
        {

        printf("\nThe character %c is a Uppercase.",ch);

        }
    else if((ch>='a' && ch<='z' ))
        {

        printf("\nThe character %c is a Lowercase.",ch);

        }
    else if((ch>='0' && ch<='9' ))

        {

        printf("\nThe character %c is a Digit.",ch);

        }
    else

       {

         printf("\nThe character %c is a Special Symbol.",ch);

       }

     getch();
     return 0;

}

