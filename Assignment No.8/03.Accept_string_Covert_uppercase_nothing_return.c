#include<stdio.h>
#include<string.h>

void uppercase(char []);

int main(){
    char str[20];

    printf("\nEnter a String :");
    scanf("%s",str);

    uppercase(str);

}

void uppercase(char name []){

   strupr(name);

    printf("\nUppercase String = %s", name);



}
