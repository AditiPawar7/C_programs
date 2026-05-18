#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Dig = 0;
    int flag = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;

        if(Dig == 2)
        {
            flag = 1;
        }

        Temp = Temp / 10;
    }

    if(flag == 1)
    {
        printf("\nIt Contains Two");
    }
    else
    {
        printf("\nThere is No Two");
    }

    getch();
    return 0;
}
