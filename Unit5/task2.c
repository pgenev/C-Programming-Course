#include <stdio.h>

typedef void (*PrintPtr)(int);

void print(int n){
	for(int i=0; i < n; i++){
		printf("Hello World!\n");
	}
}

void main(){

	PrintPtr var;
	var = print;
	var(10);

	return;
}