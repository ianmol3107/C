#include<stdio.h>
main()
{
	FILE *ptr;
	ptr= fopen("Double.txt", "r");
	int num;
	fscanf(ptr, "%d", &num);
	fclose(ptr);
	ptr=fopen("Double.txt", "w");
	fprintf(ptr, "%d", 2*num);
	fclose(ptr);
}
