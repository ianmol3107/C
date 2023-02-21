#include<stdio.h>
void main(){
    int arr1[2]= {10,20};
    int arr2[2] = {40,30};
    int sum[2];
    int i;
    for(i=0;i<2;i++){
        sum[i] = arr1[i]+arr2[i];
    }
    printf("%d\n", sum[0]);
    printf("%d", sum[1]);

}