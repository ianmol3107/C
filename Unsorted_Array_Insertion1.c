#include<stdio.h>
void insertion(int a[], int n, int num, int position);
void main(){
    int arr[5]={3,4,5,8,9};
    int n,pos;
    printf("Enter your number you want to insert: ");
    scanf("%d", &n);
    printf("Enter which position you want to insert: " );
    scanf("%d", &pos);
    insertion(arr,5,n,pos);
}
void insertion(int a[], int n, int num, int position){
    int i;
    if(position<0||position>n+1){
        printf("Overflow of size");
    }
    else{
    for(i=n-1; i>=position-1; i--){
        a[i+1]=a[i];
        
    }
        a[position-1]=num;
        n++;
    for(i=0; i<n;i++){
        printf("%d", a[i]);
    }
    }
}