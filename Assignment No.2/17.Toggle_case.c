#include<stdio.h>
#include<conio.h>

int main(){

    char ch = '\0';

    printf("\nEnter a character : ");
    scanf("%c",&ch);

    // Uppercase to Lowercase
    if(ch >= 'A' && ch <= 'Z')
    {

        ch = ch + 32;

        printf("\nLowercase Character = %c", ch);

    }

    // Lowercase to Uppercase
    else if(ch >= 'a' && ch <= 'z')
    {

        ch = ch - 32;

        printf("\nUppercase Character = %c", ch);

    }

    else
    {

        printf("\nInvalid Character");
    }

    getch();
    return 0;
}
