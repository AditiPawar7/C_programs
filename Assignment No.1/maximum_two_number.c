#include<stdio.h>
#include<conio.h>

int main(){

 int num1,num2;

 printf("Enter a two number :");
 scanf("%d %d",&num1,&num2);

 if(num1 > num2 ){
    printf("The greater number is: %d",num1);
 }
 else{
    printf("The greater number is : %d",num2);
 }

 getch();
 return 0;

 }
