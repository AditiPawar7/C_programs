#include<stdio.h>
#include<conio.h>

int main(){

    int n,i=0;
    long int Fact =1;

    printf("\nEnter a User input :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        Fact = Fact *i;
    }
    printf("Factorial=>%ld",Fact);

printf("\n==================================================********************=============================================");

getch();
return 0;


}


