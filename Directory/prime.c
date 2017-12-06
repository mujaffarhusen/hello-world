#include<stdio.h>
int main()
{
	int num=0,var=2,counter=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(;var<=num;var++){
		if(num%var==0){
			counter++;
		}
	}
	if(counter==1){
		printf("given number is prime\n");
	}
	else{
		printf("given number is not a prime\n");
	}

}
