#include<stdio.h>

main()
{
int i=999;
int *ptr;
int **ptr_to_ptr;

ptr= &i;
ptr_to_ptr= &ptr;


printf("The Value of i is %d", **ptr_to_ptr);

}
