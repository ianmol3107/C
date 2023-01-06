#include<stdio.h>
main()
{
int i=5;
int *j;
j=&i;
printf("The value of i is: %d\n", i);
printf("The value of i is: %d\n", *j);
printf("The value of i is: %u\n", *(&i));

printf("\n\n\n");


printf("The Address of i is: %u\n", &i);
printf("The Address of i is: %u\n", j);

printf("\n\n\n");

printf("The Address of j is: %u\n", &j);
printf("The Value of j is: %u\n", *(&j));

}
