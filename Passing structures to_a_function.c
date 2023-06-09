#include<stdio.h>
#include<string.h>

struct employee
{
	int code;
	float salary;
	char name[20];
};

void show(struct employee e)
{
printf("The code of employee is: %d\n",e.code);
printf("The salary of employee is: %f\n",e.salary);
printf("The name of employee is: %s\n",e.name);
}


main()
{
	struct employee e1;
	struct employee *ptr;
	ptr=&e1;
	ptr->code=100;
	ptr->salary=100000;
	strcpy(ptr->name, "Anmol");
	show(e1);
}
