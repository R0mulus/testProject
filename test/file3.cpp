/*
 @author Jozef Balint
 @date 22.9.2016
 @description this version prints every three figure number divisible by 19 and not by 7

*/



#include<stdio.h>

main(){
	
	int a,i,pom;
	pom = 0;
	
	for(i=100; i<=999; i++){
		if(i%7!=0 && i%19==0){
			pom++;
			printf("%d\n",i);
			
		}
		}printf("Pocet cisel: %d",pom);
}

