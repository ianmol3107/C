#include<stdio.h>
main()
{
	FILE *ptr;
	char emp1[10], emp2[10];
	int sal1, sal2;
	printf("Enter the employee name: ");
	scanf("%s", &emp1);
	printf("%s salary's: ", emp1);
	scanf("%d", &sal1);
	
	printf("Enter the employee name: ");
	scanf("%s", &emp2);
	printf("%s salary's: ", emp2);
	scanf("%d", &sal2);
	ptr= fopen("Employee_Data.txt", "w");
	fprintf(ptr, "Employee name is %s and Salary(in thousand) is %d\n", emp1, sal1);
	fprintf(ptr, "Employee name is %s and Salary(in thousand) is %d\n", emp2, sal2);
	
	
	
	
	fclose(ptr);
}
