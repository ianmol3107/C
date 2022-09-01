#include<stdio.h>
main()
{
	FILE *ptr;
	ptr= fopen("demoputc.txt", "w");
	putc('A', ptr);
	putc('N', ptr);
	putc('M', ptr);
	putc('O', ptr);
	putc('L', ptr);
	fclose(ptr);
	
	
}
