#include<stdio.h>
main()
{
int a;
int *ptr= &a;
printf("The Value of ptr is %u\n", ptr);
ptr++; 
//ptr = ptr+1;   { We can use any arthmetic like (ptr+1),(ptr+2)(ptr-1),(ptr-2) and (ptr++),(ptr--) also we can use }
//ptr = ptr +2;
//ptr = ptr -2;
printf("The Value of ptr is %u\n", ptr);
}
