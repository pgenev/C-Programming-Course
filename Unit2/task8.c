#include <stdio.h>
#include <stdint.h>

void main(){

	uintptr_t number = 249; // 1111 1001(bin)
	uintptr_t secondNumber = 1293; // 0000 0101 0000 1101(bin)
	int count_bit_1 = 0;
	int count_bit_1_second = 0;

	for(int i=0; i < 16; i++){

		if(number & (1<<i)){
			count_bit_1++;
		}
		if(secondNumber & (1<<i)){
			count_bit_1_second++;
		}
	}

	printf("The bit 1 is contained %d times in the number %zu\n", count_bit_1, number);
	printf("The bit 1 is contained %d times in the number %zu\n", count_bit_1_second, secondNumber);

	return;
}