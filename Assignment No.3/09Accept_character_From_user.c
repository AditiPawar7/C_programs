#include<stdio.h>
#include<conio.h>

int main(){

     int i;
     char ch='\0';

    printf("\nEnter a Input :");
    scanf(" %c",&ch);

    if(ch>='A' && ch<='Z'){
        for(i=ch;i<='Z';i++){
            printf("%c ",i);
        }
      }
    else if(ch>='a' && ch<='z'){
        for(i=ch;i<='z';i++){
            printf("%c ",i);
         }
       }
    else{
        printf("\nInvalid ..");
       }
getch();
return 0;


}

