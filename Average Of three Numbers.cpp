#include<stdio.h>
float avg(int x, int y, int z);
main(){
	float a,b,c,d;
	printf("Enter the value of first number: ");
	scanf("%f", &a);
	
	printf("Enter the value of Second number: ");
	scanf("%f", &b);
	
	printf("Enter the value of Third number: ");
	scanf("%f", &c);
	
	d=avg(a,b,c);
	printf("The Total Average is: %f", d);
}

float avg(int x, int y, int z){
	int avg;
	avg= (float)(x+y+z)/3;
	
}
