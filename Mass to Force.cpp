#include<stdio.h>
float force(float mass);
main(){

float mass,f;
printf("Enter the Mass Value: ");
scanf("%f", &mass);
//f = force(mass); //jb niche only f se print krwana ho!!!
printf("The Conversion Value of Mass to Force is: %.2f",force(mass));  // .2 use islie hota hai kuki apko point/decimal ke baad kitne digit chahiye!!!

}

float force(float mass){
	float force;
	force = mass * 9.8;
	
	return force;
}
