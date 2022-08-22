#include<stdio.h>
#include<string.h>

struct vector{
	int x;
	int y;
};

main()
{
	struct vector v1,v2;
	v1.x=35;
	v1.y=85;
	printf("X Demension is %d and Y Demension is %d\n", v1.x,v1.y);
	
	v2.x=36;
	v2.y=86;
	printf("X Demension is %d and Y Demension is %d\n", v2.x,v2.y);
}
