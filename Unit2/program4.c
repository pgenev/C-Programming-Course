#include <stdio.h>

int main(){

	int number1 = 78;
	int number1_value = number1;
	int number2 = 12;
	int number2_value = number2;
	int gcd;

	while(number2 != 0){
		gcd = number2;
		number2 = number1 % number2;
		number1 = gcd;
	}

	printf("The GCD of %d and %d is %d.\n", number1_value, number2_value, gcd);
	
}