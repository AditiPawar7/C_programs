#include<stdio.h>
#include<conio.h>

int main(){

    int arr[8] = {0},cnt = 0,sum = 0;
    int i;

    for(i=0;i<8;i++){
        printf("\nEnter a Element :");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<8;i++){
        printf("\n%d",arr[i]);
    }


    for(i=0;i<8;i++){
       sum = sum +arr[i];
    }
    printf("\nSummation of Element =>%d",sum);








}


