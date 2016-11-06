#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define True 0
#define False 1

int is_prime(int number){
	int divider = 2;
	int maxDivider = (int)sqrt(abs(number));
	if(number == 0 || number == 1){
		return False;
	}

	while(divider <= maxDivider){
		if(number % divider == 0){
			return False;
		}
		divider+=1;
	}
	return True;
}

void check_number(int number){
	int flag = 0;
	for(int firstIterator=2; firstIterator <= number/2; firstIterator++){
		if(is_prime(firstIterator) == True){
			for(int secondIterator=2; secondIterator <= number; secondIterator++){
				if(is_prime(secondIterator) == True){
					if(firstIterator + secondIterator == number){
						printf("%d + %d = %d\n", firstIterator, secondIterator, number);
						flag++;
					}
				}
			}
		}
	}
	if(flag == 0){
		printf("\nThe number %d cannot be expressed as the sum of two prime numbers.\n\n", number);
	}
}


void main(){

	int number = 34;
	int number2 = 35;
	check_number(number);
	check_number(number2);

	return;
}

/*
def is_prime(n):

    divider = 2
    maxDivider = math.sqrt(abs(n))
    if(n == 1):
            return False

    while divider <= maxDivider:

        if(n % divider == 0):
            return False

        divider+=1

    return True
*/