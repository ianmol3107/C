#include<stdio.h>
main()
{
	int p;
	printf("Enter Week Number-");
	scanf("%d", &p);
	if(p==1)
	{
		printf("this is SUNDAY of that day");
	}
	else if(p==2)
	{
		printf("this is MONDAY on the day 2");
	}
	else if(p==3)
	{
		printf("this is TUESDAY on the day 3");
	}
	else if(p==4)
	{
		printf("this is WEDNESDAY on the day 4");
	}
	else if(p==5)
    {
    	printf("this is THURSDAY on the day 5");
	}
	else if(p==6)\
	{
		printf("this is FRIDAY on the day 6");
	}
	else if(p==7)
	{
		printf("this is SATURDAY on the day 7");
	}
	else
	{
		printf("A WEEK HAS ONLY 7 DAYS,so please enter 1 to 7");
	}
}
