#include<stdio.h>
main()
{
	char str[]="ANMOL";
	char *ptr=str;
//	ptr=str;
	while(*ptr!='\0')
	{
		printf("Value is: %c and ",*ptr);
		printf("Adress is: %u\n", ptr);
		ptr++;
	}
	
	
}
