#include<stdio.h>
main()
{
	int num[5];
	int i;
	int sum =0;
	
	for(i=0; i<5; i++)
	{
		printf("Enter Numbers: ");
		scanf("%d", &num[i]);	
	}
	
for(i=0; i<5; i++)
{
	if(num[i]%2 == 0)
	{
		sum += num[i];	
	}
//	else
//	{
//		odd_sum = odd_sum+num[i];
//	}
}
printf("Sum is: %d", sum);
}
