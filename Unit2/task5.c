#include <stdio.h>

#define POSITIVE 1
#define NEGATIVE -1

void calculatePI(void){

	double numerator = 1;
	double denominator = 3;
	double currentNumber = 1;
	int flag = -1;

	while(currentNumber){
		if(flag == NEGATIVE){
			currentNumber -=  numerator/denominator;
			if(numerator/denominator < 0.000001){
				printf("\nPI: %lf\n\n", currentNumber*4);
				break;
			}
			flag = POSITIVE;
			denominator += 2;
		} else if(flag == POSITIVE){
			currentNumber += numerator/denominator;
			if(numerator/denominator < 0.000001){
				printf("\nPI: %lf\n\n", currentNumber*4);
				break;
			}
			flag = NEGATIVE;
			denominator += 2;
		}
	}
}

void main(){

	calculatePI();
	return;
	
}