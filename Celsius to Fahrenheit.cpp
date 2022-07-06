#include<stdio.h>
float Fahrenheit(float celsius);
int main(){
	float c,f;
	printf("Enter Celsius: ");
	scanf("%f", &c);
	f = Fahrenheit(c);
	printf("Celsius to Fehrenhiet is: %f", f);
}

float Fahrenheit(float celsius){
	float Fahrenheit;
	Fahrenheit = (celsius*9/5) + 32;
	return Fahrenheit;
}
