#include<stdio.h>
main()
{
	int num[5];
	int i;
	int sum=0;
	
	for(i=0; i<5; i++)
	{
		printf("Enter Number: ");
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<5; i++)
	{
		sum += num[i];
	}
	printf("The sum of 5 digit is: %d", sum);
}
