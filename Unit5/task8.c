#include <stdio.h>
#include <string.h>

#define TRUE 0
#define FALSE 1

void main(){

	char sentence[] = "I am a sentence    and I    want to be read   !   ";
	printf("\nFull string: %s\n\n", sentence);
	char *ptr = sentence;
	int add_quote = TRUE;
	
	while('\0' != *ptr){
		if(TRUE == add_quote && ' ' != *ptr){
			printf("'");
			add_quote = FALSE;
		}
		if(' ' == *ptr && ' ' != *(ptr+1)){
			add_quote = TRUE;
			ptr++;
			printf("'");
			printf("\n");
			continue;
		}
		if(' ' == *ptr){
			ptr++;
			continue;
		}
		printf("%c", *(ptr++));
		if('\0' == *ptr){
			printf("'");
			printf("\n");
			break;
		}	
	}

	return;
}