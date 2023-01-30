#include<stdio.h>

typedef struct complex
{
	int real;
	int complex;
} comp;

void display(comp c)
{
	printf("The value of real part is %d\n", c.real);
	printf("The value of complex part is %d\n", c.complex);
}
main()
{
	comp c_num[5];
	for(int i=0; i<5; i++)
	{
		printf("Enter the real value for %d number\n", i+1);
		scanf("%d", &c_num[i].real);
		
		printf("Enter the complex value for %d number\n", i+1);
		scanf("%d", &c_num[i].complex);
	}
	
	for(int i=0; i<5; i++)
	{
		display(c_num[i]);
	}
}
