#include<stdio.h>
main()
{
	int num,c,i;
	printf("Enter Any Number for Table: ");
	scanf("%d", &num);
	for(i=1; i<=10; i++)
	{
		c = num*i;
		printf("%d * %d= %d\n", num,i,c);
		
	}
	
}
