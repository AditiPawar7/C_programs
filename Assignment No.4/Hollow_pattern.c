#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j,R,C= 0;

    printf("Enter  Row size : ");
    scanf("%d",&R);


    printf("Enter  coloumn size : ");
    scanf("%d",&C);

    for(i = 1; i <= R; i++)
    {
        for(j = 1; j <= C; j++)
        {
            if(i == R || i == 1 || j== C || i==R || j==1)
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
