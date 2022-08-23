#include<stdio.h>
#include<string.h>

struct vector{
	int x;
	int y;
};

struct vector sumvector(struct vector v1, struct vector v2){
	struct vector result;
	result.x=v1.x+v2.x;
	result.y=v1.y+v2.y;
	return result;
}


main()
{
	struct vector v1,v2,sum;
	v1.x=35;
	v1.y=85;
	
	v2.x=36;
	v2.y=86;
	
	sum=sumvector(v1,v2);
	printf("X Demension is %d and Y Demension is %d\n", sum.x,sum.y);
}
