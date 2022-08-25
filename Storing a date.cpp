#include<stdio.h>
typedef struct date
{
	int date;
	int month;
	int year;
}dates;

void display(dates d)
{
	printf("The date is: %d/%d/%d\n", d.date,d.month,d.year);
}

int datecmp(dates d1, dates d2)
{
	if (d1.year>d2.year)
	{
		return 1;
	}
	if (d1.year<d2.year)
	{
		return -1;
	}
	
	if (d1.month>d2.month)
	{
		return 1;
	}
	if (d1.month<d2.month)
	{
		return -1;
	}
	
	if (d1.date>d2.date)
	{
		return 1;
	}
	if (d1.date<d2.date)
	{
		return -1;
	}
	
	return 0;
}



int main()
{
	dates d1={25,06,1997};
	dates d2={31,07,2000};
	
	display(d1);
	display(d2);
	
	int a= datecmp(d1,d2);
	printf("Date comparison function returns: %d", a);
}
