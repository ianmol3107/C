#include<stdio.h>
main()
{
int arr[10];
int *ptr= &arr[0];
ptr= ptr+2; // Try to increase ptr to 2! for check a arr[2] is equal to ptr+2 or not?
// if(ptr+2==&arr[2]) !! We can also use these condition in camparison of if(ptr==&arr[2])    !!!
if(ptr==&arr[2])
{
printf("These point to the same location in memory\n");
}
else
{
printf("These don't point to the same location in memory\n");
}

}
