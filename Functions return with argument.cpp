#include<stdio.h>
int sum(int x, int y);
main()
{
	int a,b,c;
	printf("Enter Any two numbers: ");
	scanf("%d%d", &a,&b);
	c=sum(a,b);
	printf("The Value of two number is: %d", c);
}

int sum(int x, int y)
{
	int z;
	z = x+y;
	return (z);
}
