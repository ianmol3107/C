#include<stdio.h>
int fib(int n);//                            Declearation of function
main(){
int i,n;
printf("Enter Number: ");
scanf("%d", &n);
for(i=0; i<=n; i++)
printf("Series is: %d\t", fib(i));//          Function calling
}

int fib(int n)//                              Defination of function
{
if(n==0){
	return 0;}
if(n==1){
	return 1;}
else{
	return fib(n-1)+fib(n-2);}


}
