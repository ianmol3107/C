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
	struct employee Anmol= {100, 10323.05, "Anmol"};
	printf("Employee code is: %d\n", Anmol.code);
	printf("Employee Salary is: %.2f\n", Anmol.salary);
	printf("Employee name is: %s\n", Anmol.name);
}
