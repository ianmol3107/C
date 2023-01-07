#include<stdio.h>
#include<string.h>

typedef struct employee        // When we use typedef then we can use emp instead of {struct empoyee} Iska Sirf Yahi mtlb hai!
{
	int code;
	float salary;
	char name[20];
}emp;

void show(emp e1)
{
	printf("The code of employee is: %d\n", e1.code);
	printf("The salary of employee is: %.2f\n", e1.salary);
	printf("The name of employee is: %s\n", e1.name);
}



main()
{
//	Declaring e1 and ptr
	emp e1;     // like here we can use struct employee e1; and
	emp *ptr;  // here we can use struct employee *ptr; also
//	pointing ptr to e1
	ptr=&e1;
//	value set for e1
	ptr->code=100;
	ptr->salary=108600;
	strcpy(ptr->name, "Anmol");
	show(e1);
}
