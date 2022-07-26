#include<stdio.h>
main()
{
	int a=2,b;
	int c=3,d;
	b = ++a; // For Pre Increment; phle a ki value +1 se bdh jyegi! uske baad b me transfer hogi!
	d = --c; // For Pre Decrement; phle c ki value -1 se kam ho jyegi! uske baad d me transfer hogi!
	printf("%d \t %d\n", b,a);
	printf("%d \t %d", d,c);
}
