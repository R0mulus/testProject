/*
*  @author	Jozef Balint
*  @date	19.9.2016
*  @description	
*/


#include <stdio.h>

main(){
	int number;
	
	printf("Enter number:");
	scanf("%d",&number);
	
	if(number > 0){
		printf("Number is positive.");
	}
	else{
		if(number < 0){
			printf("Number is negative.");
		}
		else{
			printf("You have entered 0");
		}
	}
	
	
}
