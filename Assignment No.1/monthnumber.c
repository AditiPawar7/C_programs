#include<stdio.h>
#include<conio.h>

int main(){

int Month;

printf("Month number :");
scanf("%d",&Month);

if(Month == 1){
   printf("The month is :Jan");
}
else if (Month == 2){
   printf("The month is : :Feb");
}
else if (Month == 3){
   printf("The month is : :March");
}
else if (Month == 4){
   printf("The month is : :April");
}
else if (Month == 5){
   printf("The month is : :May");
}
else if (Month == 6){
   printf("The month is : :June");
}
else if (Month == 7){
   printf("The month is : :July");
}
else if (Month == 8){
   printf("The month is : :Aug");
}
else if (Month == 9){
   printf("The month is : :Sep");
}
else if (Month == 10){
   printf("The month is : :Oct");
}
else if (Month == 11){
   printf("The month is : :Nov");
}
else if (Month == 12){
   printf("The month is : :Dec");
}
else{
    printf("Invalid Month");
}

getch();
return 0;




}
