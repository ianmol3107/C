#include<stdio.h>
main()
{
int marks[4];
int *ptr;
ptr= marks;
for(int i=0; i<4; i++){
    printf("Enter the students marks: %d\n", i+1);
    scanf("%d", ptr);
    ptr++;
}

for(int i=0; i<4; i++){
    printf("The Marks of %d students is: %d\n",i+1, marks[i]);
}
}
