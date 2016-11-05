#include <stdio.h>
#include <string.h>

char * reverseString(char *str){
	int strLength = strlen(str);
	char strDublicate[strLength];
	strcpy(strDublicate, str);
	int iterator1 = 0;
	for(int i=strLength-1; i >= 0; i--)
	{
		str[iterator1] = strDublicate[i];
		iterator1++;
	}
	return str;
}

void main(){

	char text[] = "IwantToBeinverteD!";
	printf("\nOriginal string: %s\n", text);	
	reverseString(text);
	printf("Reversed string: %s\n\n", text);
	return;
}