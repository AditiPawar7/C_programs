#include<stdio.h>
#include<conio.h>

int main(){

    int arr[8] = {0},min;
    int i;

    for(i=0;i<8;i++){
        printf("\nEnter a Element :");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<8;i++){
        printf("\n%d",arr[i]);
    }

     min = arr[0];
    for(i=0;i<8;i++){
      if(arr[i]<min){
        min = arr[i];
      }
    }
    printf("\nMaximum number of Element =>%d",min);








}




