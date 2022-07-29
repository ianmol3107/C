#include<stdio.h>
main()
{
	// using ASCII Table (internet) 97-122;
	char Anmol;
	printf("Enter Your character: ");
	scanf("%c", &Anmol);
	if(Anmol<=122 && Anmol>=97)
	{
		printf("It is lowercase");
	}
	else
	{
		printf("It is not lowercase");
	}
}
