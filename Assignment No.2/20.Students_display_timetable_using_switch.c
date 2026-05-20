#include<stdio.h>
#include<conio.h>

int main(){
    char Div = 0;

    printf("\nEnter School Division(A,B,C,D):");
    scanf("%c",&Div);

    switch(Div){
        case 'A':
        case 'a':
            printf("Your exam is 10 AM. ");
            break;

        case 'B':
        case 'b':
            printf("Your exam is 10.30 AM. ");
            break;

        case 'C':
        case 'c':
            printf("Your exam is 1 PM. ");
            break;

        case 'D':
        case 'd':
            printf("Your exam is 1.30 PM. ");
            break;


        default:
            printf("Invalid Division");


    }

    getch();
    return 0;


}

