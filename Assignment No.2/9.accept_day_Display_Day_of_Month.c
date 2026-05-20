#include<stdio.h>
#include<conio.h>

int main(){
    int Month = 0;

    printf("\nEnter a Number(1 to 12):");
    scanf("%d",&Month);

    switch(Month){
        case 1:
            printf("The month is :Jan");
            break;

        case 2:
            printf("The month is :Feb");
            break;

        case 3:
            printf("The month is :Mar");
            break;

        case 4:
             printf("The month is :Apr");
            break;

        case 5:
             printf("The month is :May");
            break;

        case 6:
             printf("The month is :June");
            break;

        case 7:
             printf("The month is :July");
            break;

        case 8:
            printf("The month is :Aug");
            break;

        case 9:
             printf("The month is :Sep");
            break;

        case 10:
             printf("The month is :Oct");
            break;

        case 11:
             printf("The month is :Nov");
            break;

        case 12:
             printf("The month is :Dec");
            break;


        default:
            printf("Invalid Month");



    }



    getch();
    return 0;


}

