#include <stdio.h>


void main(){

	for(int number=2; number <= 7; number++){

		switch(number){
			case 2:
				printf("Poor 2\n");
				break;
			case 3:
				printf("Middle 3\n");
				break;
			case 4:
				printf("Good 4\n");
				break;
			case 5:
				printf("Very good 5\n");
				break;
			case 6:
				printf("Excellent 6\n");
				break;
			default:
				printf("Wrong grade!\n");
				break;

		}
	}
	
}