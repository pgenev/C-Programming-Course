#include <stdio.h>
#include <string.h>

char * invertString(char *str){
	int strLen = strlen(str);
	char invertedStr[strLen];
	strcpy(invertedStr, str);
	int i2 = 0;
	for(int i=strLen-1; i >= 0; i--)
	{
		//printf("%c\n", str[i]);
		str[i2] = invertedStr[i];
		i2++;
		//invertedStr[i] = str[i];
	}
	return str;

	//while(strLen != -1){
	//	printf("%c\n", str[strLen]);
	//	strLen--;
	
	//}
}

void main(){

	char text[] = "Text";
	char text2[] = "IwantToBeinverteD!";
	char *str2 = invertString(text);
	
	for(int i=0; i <= strlen(text)-1; i++){
		printf("%c\n", *str2++);
	}

	return;
}