#include <stdio.h>

unsigned int a = 60; /* 60 = 0011 1100 */
unsigned int b = 13; /* 13 = 0000 1101 */
int c = 0;

int main()
{
	c = a & b; /* 12 = 0000 1100 */
	printf("valoare lui c  pentru & este %d\n", c);

	c = a | b; /* 61 = 0011 1101 */
	printf("Valoarea lui c pentru | este %d\n", c);

	c = a ^ b; /* 49 = 0011 0001 */
	printf("Valoarea lui c pentru ^ este %d\n", c);

	c = ~a; /* -61 = 1100 0011 */
	printf("Valoarea lui c pentru complement este %d\n", c);

	c = a << 2; /* 240 = 1111 0000 */
	printf("Valoarea shiftata la stanga cu 2 a lui a este %d\n", c);

	c = a >> 2;  

	printf("Valoarea shiftata la dreapta cu 2 a lui a este %d\n", c);
}
