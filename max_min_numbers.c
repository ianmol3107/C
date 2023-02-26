#include<stdio.h>

void max_min(int a[],int n, int *max,int *min){
    int mx,mn,i;
    mx=mn=a[0];
    for(i=1; i<n; i++){
        if(a[i]>mx){
            mx = a[i];
        }
        if(a[i]<mn){
            mn = a[i];
        }
    }
    *max = mx;
    *min = mn;
}
void main(){
    int max,min;
    int arr[4]= {10,20,30,40};
    max_min(arr,4, &max,&min);
    printf("%d%d", max,min);
}
