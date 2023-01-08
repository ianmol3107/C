#include<stdio.h>
main()
{
	char str[50];     // str[50] means in this string we can store 100 character!!!
	printf("Enter your first name: ");
	scanf("%s", str);            // scanf only use for first word!! for whole line we use gets() and puts()!!!
	printf("Your name is %s", str);
}
