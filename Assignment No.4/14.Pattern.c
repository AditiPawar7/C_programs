#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0;
    int num = 5;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("%d ", num);
            num = num + 5;
        }

        printf("  ");
        printf(" \n");

    }

    getch();
    return 0;
}
