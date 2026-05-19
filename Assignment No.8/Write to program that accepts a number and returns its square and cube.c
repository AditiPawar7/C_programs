#include<stdio.h>
#include<conio.h>

int Square(int);
int Cube(int);
int main(){
    int no = 0;

    printf("\nEnter a value  :");
    scanf("%d",&no);

     int square = Square(no);

     int cube = Cube(no);

     printf("\ncalculate Sqaure is : %d",square);

     printf("\ncalculate Cube is : %d",cube);



}
int Square(int n){

    int Ans;
    return n * n;

}

int Cube(int n ){

    int Ans;
    return n * n * n;



}
