#include<stdio.h>
main()
{
	int year;
	printf("Enter Your Year: ");
	scanf("%d", &year);
	if(year%400==0)
	{
		printf("This is a leap year", year);
	}
	else if(year%100==0)
	{
		printf("This is not a leap year", year);
	}
		else if(year%4==0)
	{
		printf("This is a leap year", year);
	}
	else
	{
		printf("This is not a leap year", year);
	}
}
