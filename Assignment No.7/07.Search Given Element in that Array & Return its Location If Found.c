
#include<stdio.h>

int main(){

    int arr[5], i, Search, Found = -1;


    printf("Enter 5 Elements : \n");

    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }


    printf("\nArray Elements Are : \n");

    for(i = 0; i < 5; i++){
        printf("%d\n", arr[i]);
    }


    printf("\nEnter Element To Search : ");
    scanf("%d", &Search);


    for(i = 0; i < 5; i++){

        if(arr[i] == Search){
            Found = i+1;
            break;
        }
    }

    // Result
    if(Found != -1){
        printf("\nElement Found At Location : %d", Found);
    }
    else{
        printf("\nElement Not Found");
    }

    return 0;
}
