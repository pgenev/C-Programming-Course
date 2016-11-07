#include <stdio.h>
#include <string.h>

#define ENCRYPT 0
#define DECRYPT 1

void encryptDecrypt(char *str, int strLength, int operation){
	char key[] = "encrypt";
	for(int i=0; i < strLength; i++){
		str[i] ^= key[i]; 
	}
	if(operation == ENCRYPT){
		printf("\nEncrypted string: %s\n\n", str);
	} else if(operation == DECRYPT){
		printf("\nDecrypted string: %s\n\n", str);
	}
}


void main(){

	char str[] = "I want to be encrypted!";
	int strLength = strlen(str);

	printf("\nString before encryption: %s\n\n", str);
	encryptDecrypt(str, strLength, ENCRYPT);
	encryptDecrypt(str, strLength, DECRYPT);
	
	return;
}