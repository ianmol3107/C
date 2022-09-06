#include<stdio.h>
main()
{
	FILE *ptr1;
	FILE *ptr2;
	ptr1= fopen("First.txt", "w");
	fprintf(ptr1, "Hello Anmol, this is problem number 3");
	fclose(ptr1);
	ptr1= fopen("First.txt", "r");
	ptr2= fopen("Second.txt", "w");
	char c=fgetc(ptr1);
	while(c!=EOF)
	{
		fputc(c, ptr2);
		fputc(c, ptr2);
		c= fgetc(ptr1);
	}
	fclose(ptr1);
	fclose(ptr2);
	
}
