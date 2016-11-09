#include <stdio.h>
#include <stdint.h>

typedef void(*FunctionPointer)(void);

void function1(void){
	printf("%s\n", __FUNCTION__);
}

void function2(void){
	printf("%s\n", __FUNCTION__);
}

void function3(void){
	printf("%s\n", __FUNCTION__);
}

void function4(void){
	printf("%s\n", __FUNCTION__);
}

void function5(void){
	printf("%s\n", __FUNCTION__);
}

void main(){

	void (*funcPtr1)(void);
	void (*funcPtr2)(void);
	void (*funcPtr3)(void);
	void (*funcPtr4)(void);
	void (*funcPtr5)(void);

	funcPtr1 = function1;
	funcPtr2 = function2;
	funcPtr3 = function3;
	funcPtr4 = function4;
	funcPtr5 = function5;
	
	FunctionPointer arr[] = {funcPtr1, funcPtr2, funcPtr3, funcPtr4, funcPtr5, NULL};
	void *arr2[] = {funcPtr1, funcPtr2, funcPtr3, funcPtr4, funcPtr5, NULL};
	
	// First solution
	
	for(int i=0; i < 6 ; i++){
		if( NULL == arr[i]){
			break;
		}
		arr[i]();
		((void(*)(void))arr2[i])();	// second version of calling
	}

	printf("\n");

	// Second solution

	int j = 0;
	while( NULL != arr[j] )
	{
		((void(*)(void))arr[j])();
		j++;		
	}
	
	printf("\n");
	
	// Third solution
	
	FunctionPointer *fptr = arr;

	while( NULL != *fptr )
	{
		(*(fptr))();
		fptr++;	
	}
	return;
}