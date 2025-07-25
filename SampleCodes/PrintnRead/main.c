#include <stdio.h>

int main(){
	int age;
	printf("Enter your age, mate! \n");
	printf("_");
	
	scanf("%d",&age); // saying that we cannot input a random number like 12.5 or 3.2 but a decimal
	printf("Oh so you're %d years old!\n", age);
	
	return 0;

}