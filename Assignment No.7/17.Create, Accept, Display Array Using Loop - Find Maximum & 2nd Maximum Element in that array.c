#include<stdio.h>
#include<conio.h>

int main(){

    int arr[8];
    int i, max, secMax;

    // Input
    for(i = 0; i < 8; i++){
        printf("\nEnter Element : ");
        scanf("%d",&arr[i]);
    }

    // Initialize
    max = arr[0];
    secMax = arr[0];

    // Find max
    for(i = 0; i < 8; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    // Find second max
    for(i = 0; i < 8; i++){

        if(arr[i] != max && arr[i] > secMax){
            secMax = arr[i];
        }
    }

    printf("\nMaximum Element => %d", max);
    printf("\nSecond Maximum Element => %d", secMax);

    getch();
    return 0;
}
