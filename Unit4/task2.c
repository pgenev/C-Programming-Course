#include <stdio.h>
#include <string.h>

#define Unsorted 0
#define Sorted 1


void bubbleSort(int *arr, int arrLength){
	for(int i=0; i < arrLength -1; i++){
		for(int j=0; j < arrLength -1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void printArray(int *arr, int arrLength, int arrStatus){
	if(arrStatus == Unsorted){
		printf("\nUnsorted array: ");
	} else if(arrStatus == Sorted){
		printf("\nSorted array: ");
	}
	for(int i=0; i < arrLength-1; i++){
		printf("%d ", *arr++);
	}
	printf("\n\n");
}

void main(){

	int array[] = {6, 9, 4, 3, 5, 1, 42, -2, 13, 17, 15};
	int arrLength = sizeof(array)/sizeof(int);
	printArray(array, arrLength, Unsorted);
	bubbleSort(array, arrLength);
	printArray(array, arrLength, Sorted);
	return;
}



