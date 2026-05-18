#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Dig = 0,cnt = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;

        if(Dig == 2)
        {
           cnt++;
        }

        Temp = Temp / 10;
    }
    printf("\nOutput :%d",cnt);
    getch();
    return 0;
}
