#include<stdio.h>
main()
{
	FILE *ptr;
	ptr= fopen("demogetc.txt", "r");
	
	printf("The value of my character is %c\n", fgetc(ptr));
	printf("The value of my character is %c\n", fgetc(ptr));
	printf("The value of my character is %c\n", fgetc(ptr));
}
