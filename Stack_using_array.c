#include <stdio.h>
// #include<stdlib>;
// #define max 100;
void push(int arr[], int *top, int item){
    (*top)++;
    arr[*top]= item;
}
int pop(int arr[], int *top){
    int item;
    item = arr[*top];
    (*top)--;
    return item;
}
void main(){
    int arr[3],max,top=-1,ch,n=3;
    while(1){
        int ch,item;
        printf("Enter character: ");
        scanf("%d\n", &ch);
        switch(ch){
            case 1:
            if(top==n-1)
            printf("Overflow");
            else{
                printf("Enter item: ");
                scanf("%d\n", &item);
                push(arr,&top,item);
            }
            break;
            case 2:
            if(top==-1)
            printf("Underflow");
            else{
                item = pop(arr,&top);
                printf("%d\n",item);
            }
            break;
            default: exit (0);
        }
        
    }
}
