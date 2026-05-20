#include<stdio.h>
#include<conio.h>

int main(){
    int Day = 0;

    printf("\nEnter a Number(1 to 7):");
    scanf("%d",&Day);

    switch(Day){
        case 1:
            printf("The day of the Week is :Monday");
            break;

        case 2:
            printf("The day of the Week is :Tuesday");
            break;

        case 3:
            printf("The day of the Week is :Wednesday");
            break;

        case 4:
            printf("The day of the Week is :Thursday");
            break;

        case 5:
            printf("The day of the Week is :Friday");
            break;

        case 6:
            printf("The day of the Week is :Saturday");
            break;

        case 7:
            printf("The day of the Week is :Sunday");
            break;


        default:
            printf("Invalid Day");


    }

    getch();
    return 0;


}

