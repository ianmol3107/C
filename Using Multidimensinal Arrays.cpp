#include<stdio.h>

main()
{
int students=3;
int subjects=5;

int marks[3][5];
for(int i=0; i<students; i++){
	for(int j=0; j<subjects; j++){
		printf("Enter the %d student marks in subject %d is: \n", i+1, j+1);
		scanf("%d", &marks[i][j]);
	}
}

for(int i=0; i<students; i++){
	for(int j=0; j<subjects; j++){
		printf("The %d student marks in subject %d is: %d\n", i+1, j+1, marks[i][j]);

}
}
}

