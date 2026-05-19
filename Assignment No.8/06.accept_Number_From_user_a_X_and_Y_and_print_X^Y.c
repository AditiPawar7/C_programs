#include<stdio.h>
#include<conio.h>


int power(int base, int exp){

    int i, result = 1;

    for(i = 1; i <= exp; i++){
        result = result * base;
    }

    return result;
}

int main(){

    int base, exp, ans;

    printf("Enter base : ");
    scanf("%d", &base);

    printf("Enter exponent : ");
    scanf("%d", &exp);

    ans = power(base, exp);

    printf("\nResult = %d", ans);

    getch();
    return 0;
}
