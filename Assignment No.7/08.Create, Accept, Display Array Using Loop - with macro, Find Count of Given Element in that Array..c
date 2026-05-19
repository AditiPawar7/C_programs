#include<stdio.h>
#include<conio.h>
#define size 5

int main(){
    int arr[size] ={},count=0,Search=0;
    int i;

    printf("\nEnter a %d Number :",size);
    for(i=0;i<=size;i++){
      scanf("%d",&arr[i]);

    }

    for(i=0;i<arr[size];i++){
        printf("\n%d",arr[i]);
    }

    printf("\nEnter a Search Element :");
    scanf("%d",&Search);

    for(i=0;i<size;i++){

        if(arr[i]==Search){
            count++;
        }
    }

    printf("\nCount of %d  is :%d",Search,count;



   getch();
   return 0;









}
