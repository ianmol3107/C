#include<stdio.h>
void deletion(int a[], int size, int pos);
void main(){
    int position;
    int arr[5]={10,20,25,16,34};
    printf("Which position you want to delete: ");
    scanf("%d", &position);
    deletion(arr,5,position);
}

void deletion(int a[], int size, int pos){
    int i;
    for(i=pos-1; i<=size-1; i++){
        a[i]=a[i+1];
    }
    size--;
    for(i=0;i<size;i++){
    printf("%d", a[i]);
    }
}