#include<stdio.h>
#include<conio.h>

int main(){

    char ch ='\0';

    printf("\nEnter a character :");
    scanf("%c",&ch);

    if(ch == 'a'||ch == 'e'|| ch == 'i'|| ch == 'o' || ch == 'u')
        {

        printf("\nThe character %c is a vowel.",ch);

        }
    else
        {

        printf("\nThe character %c is not a vowel.",ch);

        }

     getch();
     return 0;

}
