#include<stdio.h>
main()
{
	int a,b,c,ch;
	printf("Press 1 for Addition\n");
	printf("Press 2 for Substraction\n");
	printf("Press 3 for Multiply\n");
	printf("Press 4 for Division\n");
	printf("Select Any Number: ");
	scanf("%d", &ch);
	printf("Enter Any Two Numbers: ");
	scanf("%d%d", &a, &b);
	switch (ch)
	{
		case 1:
			c = a+b;
			printf("Ans is= %d", c);
			break;
			
		case 2:
			c = a-b;
			printf("Ans is= %d", c);
			break;
		
		case 3:
			c = a*b;
			printf("Ans is= %d", c);
			break;
		
		case 4:
			c = a/b;
			printf("Ans is= %d", c);
			break;
			
		default:
			printf("Wrong Choice");
			break;	
			
	}
}

