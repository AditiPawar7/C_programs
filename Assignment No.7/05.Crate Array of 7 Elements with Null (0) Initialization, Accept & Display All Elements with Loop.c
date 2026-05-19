#include<stdio.h>
#include<conio.h>

int main(){

    int arr[7] = {0};
    int i;

    for(i=0;i<7;i++){
       printf("\nAccept %d input =>",arr[7]);
       scanf("\n%d",&arr[i]);
    }

    for(i=0;i<7;i++){
        printf("\nDisplay Accepted Array =>");
        printf("%d",arr[i]);
    }

   getch();
   return 0;

}
