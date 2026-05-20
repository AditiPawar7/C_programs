#include<stdio.h>

int main()
{
    int i=0,num,sum=0;

    while(1)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&num);

        if(num==0 || num<0){
            break;
        }


        sum = sum + num;
        i++;
    }

    printf("Sum = %d",sum);
    getch();
    return 0;
}
