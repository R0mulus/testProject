#include<stdio.h>

main(){

	int num,zvysok;

	printf("Enter number: ");
	printf("Enter length: ");
	scanf("%d",&num);

	do{
		zvysok=num%2;
		printf("%d",zvysok);
		num=(num/2);

	}while(num!=0);




}
