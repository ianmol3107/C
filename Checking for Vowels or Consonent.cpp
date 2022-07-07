#include<stdio.h>
main()
{
	char ch;
	printf("Enter Any Character: ");
	scanf("%c", &ch);
	switch (ch)
	{
		case 'a':
		case 'A':
			printf("This is a Vowels");
			break;
			
		case 'e':
		case 'E':
			printf("This is a Vowels");
			break;
			
		case 'i':
		case 'I':
			printf("This is a Vowels");
			break;
			
		case 'o':
		case 'O':
			printf("This is a Vowels");
			break;
			
		case 'u':
		case 'U':
			printf("This is a Vowels");
			break;
			
		default:
			printf("This is a consonent");		
	}
}
