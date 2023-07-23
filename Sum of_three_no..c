#include<stdio.h>
int sum(int a, int b, int c)
{
	int sum=0;
	sum=a+b+c;
	printf("\nsum=%d\n",sum);
}
int main()
{
	sum(2,6,8);
	sum(6,6,5);
	sum(5,6,9);
}
