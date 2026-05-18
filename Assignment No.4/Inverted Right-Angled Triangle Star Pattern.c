
#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0;
    int R = 0;

    printf("Enter Rows : ");
    scanf("%d",&R);

    for(i = R; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    getch();
    return 0;
}
