#include<stdio.h>

void main(){
    int arr1[2][2];
    int i,j,k;
    int arr2[2][2];
    int mul[2][2];
    printf("Enter your first arrays: ");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){ 
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter your second arrays: ");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    if(arr1[i]==arr2[j]){
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            mul[i][j]=0;
            for(k=0;k<2;k++){
                mul[i][j]+=arr1[i][k]+arr2[k][j];
            }
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            pr("%d", mul[i][j]);
        }
    }
    }




}
