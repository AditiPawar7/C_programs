#include<stdio.h>

int main()
{
    int i,num,Min;



    for(i=1;i<=7;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&num);

       if(i==1){
        Min = num;

       }

    if(num<Min){
        Min = num;
    }
    }

    printf("Min = %d",Min);
    getch();
    return 0;
}
