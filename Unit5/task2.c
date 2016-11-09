#include <stdio.h>

typedef void (*printPtr)(int);

void print(int n){
	for(int i=0; i < n; i++){
		printf("Hello World!\n");
	}
}

void main(){

	printPtr var;
	//printPtr *ptr1;
	//void (*printPtr)(int);
	var = print;
	var(2);

	return;
}