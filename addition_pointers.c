#include<stdio.h>
void main(){
    int a=5, b=2, sum;
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    sum = *p1+*p2;
    printf("Sum of number is: %d", sum);
}
