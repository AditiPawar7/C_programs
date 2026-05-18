#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0;
    int Digit = 0;

    printf("Enter a Number : ");
    scanf("%d",&No);

    Temp = No;

    printf("Digits in Reverse Order : ");

    while(Temp != 0)
    {
        Digit = Temp % 10;

        printf("%d ", Digit);

        Temp = Temp / 10;
    }

    getch();
    return 0;
}
