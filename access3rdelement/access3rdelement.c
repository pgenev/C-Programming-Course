#include <stdio.h>

void main(){    

	int arrayInt[8] = {0x04050607, 11, 12, 13, 14, 15, 16, 17}; // Декларираме масив с 8 елемента от тип int. Първият елемент е в hex формат.

   	printf("Value of the first element %d\n", *arrayInt); // Принтираме първия елемент на масива в decimal формат
   	
   	char *charPtr = NULL; // Декларираме указателя от тип char
  
   	printf("Address of charPtr before: %p\n", charPtr); // Това е адресът на мястото в паметта, където charPtr сочи
   	printf("Address of &charPtr before: %p\n", &charPtr); // Това е адресът на charPtr

   	charPtr = (char *)arrayInt; // arrayInt е указател към първия елемент на масива. По този начин charPtr има същия смисъл

   	printf("Address of arrayInt: %p\n", arrayInt); // Адресът в паметта на първия елемент от масива

   	printf("Address of charPtr after: %p\n", charPtr); // charPtr сочи към адреса на първия елемент на масива 


   	printf("The first byte of the first element of the array: %d\n", *(charPtr));

   	/*Тук charPtr сочи към първия елемент на масива и е 1 байт. Със * взимаме първия байт на първия елемент на масива, а именно 07(hex)==7(decimal)
   	Под Linux имаме Little Endian, т.е. 0x04050607 се чете от дясно на ляво. 
   	04(hex)=4(decimal) - трети байт
   	05(hex)=4(decimal) - втори байт
   	06(hex)=4(decimal) - първи байт
   	07(hex)=4(decimal) - нулев байт*/
  	
  	printf("The third element of arrayInt is: %d\n", *((int *)charPtr+2));

  	/* charPtr е 1 байт, докато arrayPtr е 4 байта. Първо трябва да прирамним двата типа с (int *), след което събираме charPtr с 2 (8 байта фактически). Това се 
  	явява адресът на третия елемент на масива. Със * взимаме стойността на този елемент, а именно 12.*/

}