#include<stdio.h>

int main()
{
    int i,num,max=0;

    for(i=1;i<=7;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&num);


    if(num>max){
        max = num;
    }
    }

    printf("Sum = %d",max);
    getch();
    return 0;
}
