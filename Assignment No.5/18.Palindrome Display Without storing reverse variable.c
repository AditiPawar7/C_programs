#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0;
    int Div = 1;
    int First = 0, Last = 0;

    printf("Enter a Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp >= 10)
    {
        Temp = Temp / 10;
        Div = Div * 10;
    }

    Temp = No;

    while(Temp != 0)
    {
        First = Temp / Div;
        Last = Temp % 10;

        if(First != Last)
        {
            printf("The number is not palindrome");
            getch();
            return 0;
        }

        Temp = (Temp % Div) / 10;
        Div = Div / 100;
    }

    printf("The number is palindrome");

    getch();
    return 0;
}
