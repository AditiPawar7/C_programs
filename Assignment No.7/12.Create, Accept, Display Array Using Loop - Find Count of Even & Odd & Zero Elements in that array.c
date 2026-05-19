#include<stdio.h>
#include<conio.h>

int main(){

    int arr[8] = {0};
    int i,Ecnt = 0,Ocnt = 0,Zcnt = 0;

    for(i=0;i<8;i++){
        printf("\nEnter a Element :");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<8;i++){
        printf("\n%d",arr[i]);
    }


    for(i=0;i<8;i++){
        if(arr[i]  == 0){
            Zcnt++;

    }else if(arr[i] % 2 == 0){
           Ecnt++;

    }else{
           Ocnt++;
    }


    }
    printf("\nCount of Even Element =>%d",Ecnt);

    printf("\nCount of Even Element =>%d",Ocnt);

    printf("\nCount of Zero Element =>%d",Zcnt);


   getch();
   return 0;
}

