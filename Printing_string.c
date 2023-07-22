#include<stdio.h>
main()
{
//	char str[]= {'A', 'N', 'M', 'O', 'L', '\0'};
	char str[]= "ANMOL";                         // we can use both {'A', 'N', 'M', 'O', 'L', '\0'} or "ANMOL"  !!!
	char *ptr= str;
	while(*ptr!='\0')
	{
		printf("%c", *ptr);                     // if we use only ptr then it shows a address only...!!!
		ptr++;
	}
}
