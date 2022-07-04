#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Anmol Please Enter Your First Number: ");
	scanf("%d", &a);
	printf("Anmol Please Enter Your Second Number: ");
	scanf("%d", &b);
	printf("Anmol Please Enter Your Third Number: ");
	scanf("%d", &c);
	printf("Anmol Please Enter Your Fourth Number: ");
	scanf("%d", &d);
	if(a>=b && a>=c && a>=d){
		printf("Anmol (%d) is Greatest", a);
	}
	else if(b>=a && b>=c && b>=d){
		printf("Anmol %d is Greatest", b);
	}
	else if(c>=a && c>=b && c>=d){
		printf("Anmol %d is Greatest", c);
	}
	else{
		printf("Anmol %d is Greatest", d);
	}
}
