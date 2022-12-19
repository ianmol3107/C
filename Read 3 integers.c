#include<stdio.h>
main()
{
	int a,b,c;
	FILE *ptr;
//	ptr= fopen("ques1.txt", "w");
	ptr= fopen("ques1.txt", "r");
	fscanf(ptr, "%d%d%d", &a,&b,&c);
	printf("The value of a,b and c is %d %d and %d\n", a,b,c);
}
