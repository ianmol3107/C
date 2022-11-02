#include<stdio.h>
main()
{
int a=5;
int *ptr;
ptr= &a;
printf("The Address of a is= %u\n", &a);
printf("The Address of a is= %u\n", ptr);

printf("\n\n");

printf("The value of a is= %d\n", *ptr);
printf("The value of a is= %d\n", a);

}
