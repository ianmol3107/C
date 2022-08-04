#include<stdio.h>

int main(void)
{
int i, j;
int n;
printf("Enter last no. for table: ");
scanf("%d", &n);

printf("%4c|","");
for(i=1; i<=n; i++)
printf("%4d", i);

printf("\n");

for(i=1; i<=n; i++){
printf("%4d |", i);
for(j=1; j<=n; j++){
	printf("%4d", i*j);
}
printf("\n");
}
}
