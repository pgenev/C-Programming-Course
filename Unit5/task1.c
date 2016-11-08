#include <stdio.h>


void main(){

	int arrInt[] = {12,13,22,44,55,66};
	int arrLength = sizeof(arrInt)/sizeof(int);
	
	void *vp = NULL;
	char *cp = NULL;
	float *fp = NULL;

	vp = (void *)arrInt;
	cp = (char *)arrInt;
	fp = (float *)arrInt;

	for(int i=0; i < arrLength; i++){
		printf("Element with index %d printed with void *: %d\n",i, *(((int *)vp)+i));
		printf("Element with index %d printed with char *: %d\n",i, *(((int *)cp)+i));
		printf("Element with index %d printed with float *: %d\n",i, *(((int *)fp)+i));
	}


	return;
}