#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0;
    int R = 0, C = 0;
    char ch;

    printf("\nEnter Rows : ");
    scanf("%d",&R);

    printf("\nEnter Columns : ");
    scanf("%d",&C);

    for(i = 0; i < R; i++)
    {
        ch = 'a' + i;

        for(j = 0; j < C; j++)
        {
            if(j % 2 == 0)
            {
                printf("%c ", ch);
            }
            else
            {
                printf("%c ", ch - 32);
            }
        }

        printf("\n");
    }

    getch();
    return 0;
}
