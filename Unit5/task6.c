#include <stdio.h>


void swap(int *a, int *b){
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;	
}


void main(){

	int number1 = 10;
	int number2 = 20;
	printf("Value of number1 before swap: %d\n", number1);
	printf("Value of number2 before swap: %d\n", number2);
	swap(&number1, &number2);
	printf("Value of number1 after swap: %d\n", number1);
	printf("Value of number2 after swap: %d\n", number2);

	return;
}