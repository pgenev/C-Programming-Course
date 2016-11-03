#include <stdio.h>

void main(){

	int number = 16909060; // 0x01020304(hex)
	int convertedNumber = 0;

	convertedNumber |= (number & 0x000000FF) << 24; // The last byte 0x04 is going at first place from right to left
	printf("0x0%x\n", convertedNumber);
	convertedNumber |= (number & 0x0000FF00) << 8; // The third byte 0x03 is going at third place from right to left
	printf("0x0%x\n", convertedNumber);
	convertedNumber |= (number & 0x00FF0000) >> 8; // The second byte 0x02 is going at second place from right to left
	printf("0x0%x\n", convertedNumber);
	convertedNumber |= (number & 0xFF000000) >> 24; // The first byte 0x01 is going at first place from right to left
	printf("Little Endian: 0x0%x\n", number);
	printf("Big Endian: 0x0%x\n", convertedNumber);

}