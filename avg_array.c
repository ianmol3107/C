#include<stdio.h>
void main(){
    int arr[2]={10,40};
    int i,sum=0,avg;
    // float avg;
    for(i=0;i<2;i++){
        sum += arr[i];
    }
    avg = sum/i;
    printf("%d", avg);
}