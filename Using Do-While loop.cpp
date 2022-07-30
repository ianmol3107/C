#include<stdio.h>
main()
{
	int b=0;
	int a;
	do
	{
		printf("If You Want to Exit Than Press 0\n");
		printf("Enter Any Number for getting Square: ");
		scanf("%d", &a);
		b = a*a;
		printf("Square of Number is: %d\n", b);
	}
	
while (b!=0);	
}
