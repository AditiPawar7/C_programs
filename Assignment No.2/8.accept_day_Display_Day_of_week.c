#include<stdio.h>
#include<conio.h>

int main(){
    int Day = 0;

    printf("\nEnter a Number(1 to 7):");
    scanf("%d",&Day);

    if (Day == 1)
        {
          printf("The day of the week is :Monday");
        }
    else if(Day == 2)
        {
          printf("The day of the week is :Tuesday");
        }
    else if(Day == 3)
        {
          printf("The day of the week is :Wednesday");
        }
    else if(Day == 4)
        {
          printf("The day of the week is :Thursday");
        }
    else if(Day == 5)
        {
          printf("The day of the week is :Friday");
        }
    else if(Day == 6)
        {
          printf("The day of the week is :Saturday");
        }
    else if(Day == 7)
        {
         printf("The day of the week is :Sunday");
        }
    else
        {
         printf("\nInvalid Day");
        }


    getch();
    return 0;


}

