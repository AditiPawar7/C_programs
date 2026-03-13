#include<stdio.h>
#include<conio.h>

int main(){

 int num1,num2 ,num3;

 printf("Enter a three number :");
 scanf("%d %d %d",&num1,&num2,&num3);

 if(num1 > num2 && num1 > num3 ){
    printf("The greater number is: %d",num1);
 }
 else if(num2 > num1 && num2 > num3){
    printf("The greater number is : %d",num2);
 }
 else{
    printf("The greater number is : %d",num3);
 }

 getch();
 return 0;

 }
