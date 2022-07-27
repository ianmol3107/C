#include<stdio.h>

main()

{
int consumer=4;
char purchase=3;

int consumption[4][3];
for(int i=0; i<consumer; i++){
	for(int j=0; j<purchase; j++){
		{
			printf("Enter a %d customer purchase a %d product qty(in tons) is: ", i+1,j+1);
			scanf("%d", &consumption[i][j]);
		}
	}
}

for(int i=0; i<consumer; i++){
	for(int j=0; j<purchase; j++){
			printf("A %d customer purchase a qty(in tons) of product is: %d\n", i+1,consumption[i][j]);


}}
}

