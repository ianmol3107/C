#include<stdio.h>
#include<string.h>

struct employee
{
	int code;
	float salary;
	char name[15];
};

int main()
{
	struct employee facebook[100];
	facebook[0].code=100;
	facebook[0].salary=10000;
	strcpy(facebook[0].name, "Anmol");
}
