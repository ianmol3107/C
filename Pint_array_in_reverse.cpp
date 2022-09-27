#include<stdio.h>
#include<math.h>
int main()
{
	int arr[7];
	printf("Enter elements: ");
	for(int i=0; i<=6; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i=6; i>=0; i--)
	if(i==0)
		printf("%d\n", arr[i]);
	else{
		printf("%d, ", arr[i]);
	}
	return 0;
}
