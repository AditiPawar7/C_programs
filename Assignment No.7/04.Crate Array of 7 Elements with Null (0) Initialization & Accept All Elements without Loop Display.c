#include<stdio.h>
#include<conio.h>

int main(){

    int arr[7] = {0};
    int i;

    printf("\nAccept Display Element :");

    scanf("%d",&arr[0]);
    scanf("%d",&arr[2]);
    scanf("%d",&arr[3]);
    scanf("%d",&arr[4]);
    scanf("%d",&arr[5]);
    scanf("%d",&arr[6]);

  printf("\nDisplay Element :");

    for(i=0;i<7;i++){
        printf("\n%d",arr[i]);
    }


   getch();
   return 0;





}
