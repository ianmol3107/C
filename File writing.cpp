#include<stdio.h>
main()
{
	FILE *ptr;
	int num=435;
	ptr= fopen("Anmol.txt", "w");
	fprintf(ptr, "The value of num is %d\n", num);
	fclose(ptr);
}
