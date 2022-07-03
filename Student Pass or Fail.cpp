#include<stdio.h>
int main()
{
	float physics,maths,chemistry; // Using float bcz get exact percentage, but we can use Int also => Self 
	float total;
	printf("Enter Your Physics Marks: ");
	scanf("%f", &physics);
	printf("Enter Your maths Marks: ");
	scanf("%f", &maths);
	printf("Enter Your chemistry Marks: ");
	scanf("%f", &chemistry);
	total = (physics+maths+chemistry)/3;
if((total<40) || physics<33 || maths<33 || chemistry<33)
{
		printf("Your total percentage is %f,\n and you are fail", total);
}
else
	{
		printf("Your total percentage is %f,\n and you are pass", total);
	}
	
return 0;
	
}
