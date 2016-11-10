#include <stdio.h>


void swap(int **a, int **b){
	int *swap = NULL;
	swap = *a;
	*a = *b;
	*b = swap;
}


void main(){

	int number1 = 10;
	int number2 = 20;

	int *ptr1 = &number1;
	int *ptr2 = &number2;


	printf("Value of ptr1 before swap: %d\n", *ptr1);
	printf("Value of ptr1 before swap: %d\n", *ptr2);
	printf("Before swap ptr1 is pointing to address: %p\n", ptr1);
	printf("Address of number1: %p\n", &number1);
	printf("Address of ptr1 before swap: %p\n", &ptr1);
	printf("Before swap ptr2 is pointing to address: %p\n", ptr2);
	printf("Address of number2: %p\n", &number2);
	printf("Address of ptr2 before swap: %p\n", &ptr2);
	swap(&ptr1, &ptr2);
	printf("Value of ptr1 after swap: %d\n", *ptr1);
	printf("Value of ptr2 after swap: %d\n", *ptr2);
	printf("After swap ptr1 is pointing to address: %p\n", ptr1);
	printf("After swap ptr2 is pointing to address: %p\n", ptr2);
	
	return;
}