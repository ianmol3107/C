#include<stdio.h>
int main()
{
    int a[3][2]={8,1,2,3,4,5};

    printf("%d\n", a[0][0]); // print VALUE

    printf("%d\n", a[0]); // print Address
    printf("%d\n", a);  // print Address


    return 0;
}