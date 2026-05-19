#include<stdio.h>
#include<conio.h>

int main(){

    int arr[7];
    int i;

    for(i=0;i<=7;i++){
        printf("\nEnter a Element :");
        scanf("%d",&arr[i]);
    }

    printf("\nArray Element Are :\n");

    for(i=0;i<=5;i++){
        printf("\n%d\n",arr[i]);
    }


  getch();
  return 0;





}
