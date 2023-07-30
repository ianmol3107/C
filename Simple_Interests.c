#include<stdio.h>
main()
{
	float p,r,t,si;
	printf("Enter the Principle Amount: ");
	scanf("%f", &p);
	printf("Enter the Rate of interest: ");
	scanf("%f", &r);
	printf("Enter Time period: ");
	scanf("%f", &t);
	si= (p*r*t)/100;
	printf("Simple Interest is: %f", si);
	
}
