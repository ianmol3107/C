#include<stdio.h>
main()
{
	int num;
	FILE *ptr;
	printf("Enter the integer you need the table of\n");
	scanf("%d", &num);
	ptr= fopen("Table.txt", "w");
	for(int i=0; i<10; i++)
	{
		fprintf(ptr, "%d X %d = %d\n", num, i+1, num*(i+1));
	}
	fclose(ptr); 
}
