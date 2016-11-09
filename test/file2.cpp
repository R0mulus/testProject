#include<stdio.h>

main(){
	
	int a;
	
	printf("Enter number: ");
	scanf("%d",&a);
	
	
	if(a%2==0 && a%3>0){
		printf("Cislo je delitelne 2");
	}else if(a%3==0 && a%2>0){
		printf("Cislo je delitelne 3");
	}else if(a%2==0 && a%3==0){
		printf("Cislo je delitelne aj dvojkou aj trojkou");
	}
	else printf("Cislo nie je delitelne 2 ani 3.");

}
