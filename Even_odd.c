#include<stdio.h>
#include<conio.h>

int main(){

 int num = 0;

 printf("Enter a number :");
 scanf("%d",&num);

 if(num % 2 == 0){

    printf("\n%d is even number",num);

  }else{
    printf("\n%d is odd number",num);
  }

  getch();
  return 0;
 }









