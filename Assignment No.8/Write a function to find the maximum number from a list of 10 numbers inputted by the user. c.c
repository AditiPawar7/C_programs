#include<stdio.h>
#include<conio.h>

int Maximum_num(int arr[]);
int main(){
    int arr[10] = {0};
    int i,max = 0;

    for(i = 0;i<10;i++){
        printf("\nEnter a Number :");
        scanf("\n%d",&arr[i]);
    }

    max = Maximum_num(arr);

    printf("\nDisplay the Maximum Number :%d",max);

}
int Maximum_num(int arr[]){


    int i,max = 0;
    max = arr[0];


     for(i = 0;i<10;i++){
         if(arr[i]>max){
                max = arr[i];

    }

     }
       return max;

}
