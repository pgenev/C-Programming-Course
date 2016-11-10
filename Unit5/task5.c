#include <stdio.h>

void print(int *array){
	printf("Sizeof array passed as a pointer: %zu bytes\n\n", sizeof(array));
}

void main(){

	int array[6];
	printf("\nSizeof array: %zu bytes\n\n", sizeof(array));
	print(array);
}