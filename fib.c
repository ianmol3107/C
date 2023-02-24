#include<stdio.h>
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}

void main(){
    int num=10, i=0, c;
    for(c=1; c<=num;c++){
        printf("%d\n", fib(i));
        i++;
    }
}