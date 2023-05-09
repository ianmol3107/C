#include<stdio.h>
void main(){
    struct student{
        int roll;
        char name[30];
        int mark[3];
    };
    struct student s1[5];
    printf("Enter details: ");
    for(int i=0; i<5;i++){
        scanf("%d%s", &s1[i].roll,&s1[i].name);
        for(int j=0; j<3; j++){
            scanf("%d", &s1[i].mark[j]);
        }
    }
    for(int i=0; i<5;i++){
        int avg,sum=0;
        for(int j=0; j<3; j++){
            sum += s1[i].mark[j];
        }
        avg = sum/3;
        if(avg>80){
            printf("%s", s1[i].name);
        }
    }
}