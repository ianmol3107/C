#include<stdio.h>

void printarray(int arr[], int n);                                     //fucntion prototype/declaration!

main()
{
int arr[]= {1, 2, 5, 4, 6, 7, 8};
printf("OLD ARRAY: \n");

printarray(arr, 7);                                                    // function call!

printf("\nNEW ARRAY: \n\n");

printarray(arr, 7);                // For print a new array~ANMOL
//printf("%d", arr[2]);
}

void printarray(int arr[], int n)                                      // function defination!
{
for(int i=0; i<7; i++)
{
	printf("The value of element %d is: %d\n", i+1, arr[i]);
}
	arr[2]=3;                   // Make a change is index 2 in given array~ ANMOL
}
