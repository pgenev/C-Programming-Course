#include <stdio.h>

int factorial(int number){
	while(number >= 1){
		return number*factorial(number-1);
	}
	if(number == 0){
		return number+1;
	}
}

void printFactorial(int number, int factorial){
	printf("\nThe factorial of %d is: %d\n\n", number, factorial);
}

void main(){

	int number = 5;
	int fact = factorial(number);
	printFactorial(number, fact);

	int number2 = 0;
	int fact2 = factorial(number2);
	printFactorial(number2, fact2);

	int number3 = 11;
	int fact3 = factorial(number3);
	printFactorial(number3, fact3);	


	return;
}