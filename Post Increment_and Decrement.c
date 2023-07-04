#include<stdio.h>
main()
{
	int a=2,b;
	int c=3,d;
	b = a++; // For Post Increment; phle a ki value b me transfer hogi! uske baad a bdhega +1 se!
	d = c--; // For Post Decrement; phle c ki value tranfer hogi d mein! uske baad c kam hoga -1 se!
	printf("%d \t %d\n", b,a);
	printf("%d \t %d", d,c);
}
