
#include<stdio.h>
#include<conio.h>

int main(){

    char ch ='\0';

    printf("\nEnter a character :");
    scanf("%c",&ch);

    if(ch == 'a'||ch == 'e'|| ch == 'i'|| ch == 'o' || ch == 'u' || ch == 'A'||ch == 'E'|| ch == 'I'|| ch == 'O' || ch == 'U' )
        {

        printf("\nThe character %c is a vowel.",ch);

        }
    else if((ch>='a' && ch<='z' )||( ch>='A' && ch<='Z'))
        {

        printf("\nThe character %c is a Consonants.",ch);

        }
    else
        {

        printf("\nThe character %c is a Other.",ch);
    }

     getch();
     return 0;

}
