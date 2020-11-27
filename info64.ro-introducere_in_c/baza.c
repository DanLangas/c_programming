#include <stdio.h>


void main()
{
	unsigned int a, b;
	printf("Dati un numar intreg zecimal: \n");
	scanf("%d", &a);
	printf("Dati un numar intreg hexazecimal: \n");
	scanf("%X", &b);
	printf("\nnr. zecimal:\tBaza 10: %u\tBaza 8:%#o\tbaza 16: %#X", a, a, a);
	printf("\nnr. hexazecimal:\tBaza 10: %u\tBaza 8:%#o\tbaza 16: %#X", b, b, b);
}
