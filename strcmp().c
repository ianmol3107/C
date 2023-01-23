#include<stdio.h>
#include<string.h>
main()
{
	char str1[]= "Hel ";
	char str2[]="Helo";            
	int value= strcmp(str1, str2);     // This means str1-str2 from taking ascii values!!! 
	printf("%d", value);
}
