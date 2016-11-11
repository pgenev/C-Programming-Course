#include <stdio.h>
#include <stdlib.h>

#define TRUE 0
#define FALSE 1

void initializeArray(int **arr, int rows, int cols)
{	
	int element = 0;

	for(int i=0; i <= rows-1 ; ++i)
	{
    	for(int j=0; j <= cols-1 ; ++j)
     	{
        	arr[i][j] = ++element;
     	}
	}
}

int **malloc2d(int row, int col)
{
	int i=0;
	int **arr = NULL;

	arr = malloc(row * sizeof(int *));
	
	if(NULL == arr)
	{
		return NULL;
	}

	for(i=0; i < row ; ++i)
	{
		arr[i] = malloc(col * sizeof(int));
		if(NULL == arr[i])
		{
			return NULL;
		}
	}
	
	return arr;
}

int **transponseMatrix(int **arr,int **arr2, int rows, int cols)
{	
	for(int i=0; i <= cols-1; ++i)
	{
    	for(int j=0; j <= rows-1; ++j)
     	{
     		arr2[i][j] = arr[j][i];
     	}
	}

	return arr2;
}

void printMatrix(int **arr, int transposed, int rows, int cols)
{	
	if(FALSE == transposed)
	{
		printf("\nMatrix before transponse\n\n");
	} else if(TRUE == transposed)
	{
		printf("\nMatrix after transponse\n\n");
	}
	for(int i=0; i <= rows-1; ++i)
	{
    	for(int j=0; j <= cols-1; ++j)
     	{
        	printf("%d ", arr[i][j]);
     	}
     	printf("\n");
	}
}


void main()
{
	int rows = 3;
	int cols = 3;

	int **arrPtr = malloc2d(rows, cols);
	int **arrPtr2 = malloc2d(cols, rows);

	initializeArray(arrPtr, rows, cols);

	printMatrix(arrPtr, FALSE, rows, cols);
	int **transPtr = transponseMatrix(arrPtr, arrPtr2, rows, cols);
	
	printMatrix(transPtr, TRUE, rows, cols);

	
	
	

	return;
}