#include<stdio.h>
 main()
{
 	float c,f;
	printf("Enter Celsius: ");
	scanf("%f", &c);
	
	f= (c*9/5) + 32;
	   printf("Celsius to Fehrenhiet is: %f\n", f);
	 
	if(c>=33 && c<=37) {
	   printf("Your temp is perfect and normal\n",c);
     
	} else if(c>=38 && c<=39) {
	   printf("Your temp is little high\n",c);
     
	} else if(c>40) {
	   printf("You are in Danger please contect the doctor\n",c);
     
  } else if(c<33) {
    	printf("You're temp is low\n",c);
      
	} else {
	    printf("Stay safe"); 
      
  }
      printf("You are precious for your family");
}
