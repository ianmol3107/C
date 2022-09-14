#include<stdio.h>
void num(int);
void main()
{
	int x;
	printf("enter the value:-");
	scanf("%d",&x);
	num(x);
	
}
void num(int x)
{
	if(x%2==0)
	printf("NUMBER IS EVEN");
	else
	printf("NUMBER IS ODD");
}
