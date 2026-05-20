#include<stdio.h>
#include<conio.h>

int main(){
    int i,n,s,e;



    scanf("%d%d",&s,&e);

    for(n=s;n>=e;n--){

    for(i=1;i<=10;i++){
        printf("%d*%d=>%d\n",n,i,n*i);

    }

    printf("\n");


    }



getch();
return 0;
}
