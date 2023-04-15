#include<stdio.h>
void sum(int x, int y);
main()
{
	int a,b;
	printf("Enter Any Two Number: ");
	scanf("%d%d", &a,&b);
	sum(a,b);
}

void sum(int x, int y)
{
	int z;
	z = x+y;
	printf("The Sum of Two Number is: %d", z);
}
