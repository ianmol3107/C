#include<stdio.h>

void main(){
    int arr1[2][2];
    int arr2[2][2];
    int add[2][2];
    printf("Enter your first arrays: ");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){ 
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter your second arrays: ");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            add[i][j]= arr1[i][j]+arr2[i][j]; // addition
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){ 
            printf("%d  ", add[i][j]);  // Print addition
        }
        printf("\n");
    }

}
