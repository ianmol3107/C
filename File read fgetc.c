#include<stdio.h>
main()
{
	FILE *ptr;
	ptr= fopen("demotext.txt", "r");
	char c;
	c= fgetc(ptr);
	while (c!=EOF)
	{
		printf("%c", c);
		c=fgetc(ptr);
	}	
}
