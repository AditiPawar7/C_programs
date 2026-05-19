#include<stdio.h>

int main(){

    int arr[5], i, Search, Found = -1;

    // Accept Array Elements
    printf("Enter 5 Elements : \n");

    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    // Display Array
    printf("\nArray Elements Are : \n");

    for(i = 0; i < 5; i++){
        printf("%d\n", arr[i]);
    }

    // Search Element
    printf("\nEnter Element To Search : ");
    scanf("%d", &Search);

    // Searching
    for(i = 0; i < 5; i++){

        if(arr[i] == Search){
            Found = i;
            break;
        }
    }

    // Result
    if(Found != -1){
        printf("\nElement Found At Index : %d", Found);
    }
    else{
        printf("\nElement Not Found");
    }

    return 0;
}
