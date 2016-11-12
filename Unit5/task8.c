#include <stdio.h>
#include <stdlib.h>

#define TRUE 0
#define FALSE 1

void initializeArray(int **arr, int rows, int cols)
{	
	int element = 9;

	for(int i=0; i < rows ; ++i)
	{
    	for(int j=0; j < cols ; ++j)
     	{
        	arr[i][j] = ++element;
     	}
	}
}

void malloc2d(int ***array, int row, int col)
{
	int i = 0;
	int **arr = NULL;
	
	arr = malloc(row * sizeof(int *));

	for(i=0; i < row ; ++i)
	{
		arr[i] = malloc(col * sizeof(int));
	}
	*array = arr;
}

void transponseMatrix(int **arr,int **arr2, int rows, int cols)
{	
	for(int i=0; i < cols ; ++i)
	{
    	for(int j=0; j < rows ; ++j)
     	{
     		arr2[i][j] = arr[j][i];
     	}
	}
}

void printMatrix(int **arr, int transposed, int rows, int cols)
{	
	if(FALSE == transposed)
	{
		printf("\nMatrix before transponse\n\n");
	} else if(TRUE == transposed)
	{
		int tmp = rows;
		rows = cols;
		cols = tmp;
		printf("\nMatrix after transponse\n\n");
	}
	for(int i=0; i < rows ; ++i)
	{
    	for(int j=0; j < cols ; ++j)
     	{
        	printf("%d ", arr[i][j]);
     	}
     	printf("\n");
	}
}

void free2d(int **arr, int rows)
{
	for (int i = 0; i < rows; ++i) 
	{ 
      free((void *)arr[i]);
      arr[i] = NULL;
  	}
  	free((void **)arr);
  	arr = NULL;
}


void main()
{
	int rows = 9;
	int cols = 10;
	int **arrPtr = NULL;
	int **arrTrans = NULL;
	
	malloc2d(&arrPtr, rows, cols);
	initializeArray(arrPtr, rows, cols);
	printMatrix(arrPtr, FALSE, rows, cols);
	 
	malloc2d(&arrTrans, cols, rows);
	transponseMatrix(arrPtr, arrTrans, rows, cols);
	printMatrix(arrTrans, TRUE, rows, cols);

	free2d(arrPtr, rows);
	free2d(arrTrans, cols);

	return;
}