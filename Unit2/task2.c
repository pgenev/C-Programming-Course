#include <stdio.h>

void main(){

	int firstNumber = 24;
	int secondNumber = 6;

	while(secondNumber < firstNumber){
		firstNumber -= secondNumber;
		if(secondNumber == firstNumber){
			printf("Reminder: %d\n", firstNumber-secondNumber);
		} else if (secondNumber > firstNumber)
		{
			printf("Reminder: %d\n", firstNumber);
		}
	}

}