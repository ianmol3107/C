#include<stdio.h>
int square();
main()
{
	int c;
	c = square();
	printf("%d", c);
}

int square()
{
	int a,b;
	printf("Enter Any Number: ");
	scanf("%d", &a);
	b = a*a;
}
