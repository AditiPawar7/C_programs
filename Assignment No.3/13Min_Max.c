#include<stdio.h>

int main()
{
    int i,num,Min;
    int max = 0;


    for(i=1;i<=10;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&num);

       if(i==1){
        Min = num;

       }

    if(num<Min){
        Min = num;
    }
    if(num>max){
        max = num;
    }
    }

    printf("Min = %d\n",Min);
    printf("Max = %d",max);
    getch();
    return 0;
}
