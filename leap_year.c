#include<stdio.h>
void main(){
    int y = 1980;
    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                printf("Leap year");
            }
            else
            printf("Not leap year");
        }
        else{
            printf("Leap year");
        }
    }
    else{
        printf("not a leap year");
    }
}