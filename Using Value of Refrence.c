#include<stdio.h>
void swap(int *a);
main()
{
int a=50;

printf("The Value of a is= %d\n", a);
printf("The Address of a is= %u\n", &a);
swap(&a);
printf("The Value of a is= %d\n", a);
printf("The Address of a is= %u\n", &a); // both a's ADDRESSES will be same because of we make a changes in VARIABLE VALUE of a not his ADDRESSES!!!
}

void swap(int *a)
{
	int temp;
	temp= *a;
	*a=temp*10;
}
