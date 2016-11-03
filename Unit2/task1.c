#include <stdio.h>

void main(){

	for(int number=0; number <= 30; number++){
		if(number % 3 != 0 && number % 5 != 0){
			printf("Number which can not be divided by 3 and 5: %d\n", number);
		}
	}
	return;
}