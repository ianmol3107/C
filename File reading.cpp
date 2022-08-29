#include<stdio.h>
main()
{
	FILE *ptr;
	ptr = fopen("sample3.txt", "r");
	int num;
	fscanf(ptr, "%d", &num);
	printf("The value of num is %d\n", num);
	return 0;
}
