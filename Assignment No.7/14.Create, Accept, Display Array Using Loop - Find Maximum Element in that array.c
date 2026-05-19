#include<stdio.h>
#include<conio.h>

int main(){

    int arr[8] = {0},cnt = 0,max = 0;
    int i;

    for(i=0;i<8;i++){
        printf("\nEnter a Element :");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<8;i++){
        printf("\n%d",arr[i]);
    }


    for(i=0;i<8;i++){
      if(arr[i]>max){
        max = arr[i];
      }
    }
    printf("\nMaximum number of Element =>%d",max);








}



