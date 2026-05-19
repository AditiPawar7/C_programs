#include<stdio.h>

float PI();

int main(){

    float value;

    value = PI();

    printf("\nPI value id :%.2f",value);

    return 0;

}
float PI(){
    float Pi_Value;

    printf("\nEnter a value of PI :");
    scanf("%f",&Pi_Value);

    return Pi_Value;


}
