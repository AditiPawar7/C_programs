#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, n;

    printf("Enter size : ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == 1 || i == n || i + j == n + 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
