#include<stdio.h>
int fact(int a);
void main(){
    int num=5, result;
    result = fact(num);
    printf("%d", result);
}
int fact(int a){
    if(a==0)
        return 1;
    else
        return a*fact(a-1);
}
