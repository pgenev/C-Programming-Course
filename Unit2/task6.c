#include <stdio.h>

void bcd(int number){
	int numVal = number;
	int result = 0;
	while(number > 0){
		result <<= 4;
		result |= number % 10;
		number /= 10;	
	}
	printf("\nBCD of %d decimal number: result = 0x%x\n\n",numVal, result);
	printf("\nReal value of number = %d\n\n", numVal);
	printf("\nReal value of result = %d\n\n", result);

}

void main(){

	int number = 123; // 123(decimal)
	//int number2 = 514; // 514 (decimal)
	bcd(123);
	//bcd(514);

}