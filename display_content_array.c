#include<stdio.h>
void main(){
    int arr[5]= {4,5,16,7,8};
    int *ptr, i;
    ptr = &arr[0];
    for(i=0;i<5;i++){
        printf("%d\n", *(ptr+i));
    }
}