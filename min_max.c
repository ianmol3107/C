#include<stdio.h>
int max_min(int a[], int n, int *p1, int *p2){
    int mx,mn,i;
    mx = mn = a[0];
    for(i=0; i<n; i++){
        if(a[i]>mn){
            mn = a[i];
        }
        if(a[i]<mx){
            mx = a[i];
        }
    }
    *p1 = mn;
    *p2 = mx;
}

void main(){
    int max,min;
    int arr[5]={4,6,9,8,7};
    max_min(arr,5,&max, &min);
    printf("max = %d\n", max);
    printf("min = %d\n", min);
}