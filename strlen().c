#include<stdio.h>
#include<string.h>
main()
{
	char str[]= "Anmol Diwedi";
//	char *ptr=str;       we can point a string also
	int a= strlen(str);
	printf("The length of string is: %d", a);
}
