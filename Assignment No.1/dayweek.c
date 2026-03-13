#include<stdio.h>
#include<conio.h>

int main(){

int Day;

printf("Enter  a number :");
scanf("%d",&Day);

if(Day == 1){
   printf("The day of the week is :monday");
}
else if (Day == 2){
   printf("The day of the week is :tuesday");
}
else if (Day == 3){
   printf("The day of the week is :wednesday");
}
else if (Day == 4){
   printf("The day of the week is :Thursday");
}
else if (Day == 5){
   printf("The day of the week is :Friday");
}
else if (Day == 6){
   printf("The day of the week is :Saturday");
}
else if (Day == 7){
   printf("The day of the week is :Sunday");
}
else{
    printf("Invalid number");
}

getch();
return 0;




}
