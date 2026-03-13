#include<stdio.h>
#include<conio.h>

int main(){
    int num;

printf("\nEnter a first number :");
scanf("%d",&num);


if(num > 0){
    printf("\n%d is positive number",num);
}
else if(num < 0){
    printf("\n%d is negative number",num);
}
else{
    printf("\nNumber is zero");

}


getch();
return 0;



}
