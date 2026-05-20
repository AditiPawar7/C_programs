#include<stdio.h>
#include<conio.h>

int main(){

    int No1, No2;
    char op;

    printf("\nEnter an Operator (+, -, *, /, %) : ");
    scanf("%c",&op);

    printf("\nEnter First Number : ");
    scanf("%d",&No1);

    printf("\nEnter Second Number : ");
    scanf("%d",&No2);

    switch(op)
    {

        case '+':

            printf("\nResult = %.2f", (float)(No1 + No2));
            break;

        case '-':

            printf("\nResult = %.2f", (float)(No1 - No2));
            break;

        case '*':

            printf("\nResult = %.2f", (float)(No1 * No2));
            break;

        case '/':

            printf("\nResult = %.2f", (float)No1 / No2);
            break;

        case '%':

            printf("\nResult = %d", No1 % No2);
            break;

        default:

            printf("\nInvalid Operator");
    }

    getch();
    return 0;
}
