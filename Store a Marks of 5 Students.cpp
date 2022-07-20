#include<stdio.h>

main()
{
int marks[5];
int i;
for(i=0; i<5; i++){
	printf("Enter the value of marks of students %d: ", i+1);
	scanf("%d", &marks[i]);
}

for(i=0; i<5; i++){
	printf("the value of marks of students %d is: %d \n", i+1, marks[i]);

}
}
