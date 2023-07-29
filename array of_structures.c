#include<stdio.h>
void main(){
    struct employee{
        char name[30];
        int id;
    };
    struct employee s[2];
    int i;
    printf("Enter employee details one by one: \n");
    for(i=0; i<2; i++){
        printf("Enter %d employee name: ",i+1);
        scanf("%s",&s[i].name);
        printf("Enter %d employee id: ",i+1);
        scanf("%d",&s[i].id);
    }
    for(i=0; i<2; i++){
        printf("Entered %d employee name: %s\n",i+1, s[i].name);
        printf("Entered %d employee id: %d\n",i+1, s[i].id);
    }
}
