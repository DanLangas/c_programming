#include <stdio.h>

int a = 21;
int c;

int main()
{
	c= a;
	printf("valoare lui c este %d\n", c);

	c+= a;
	printf("valoare lui c  pentru += este %d\n", c);
	c-= a;
	printf("valoare lui c  pentru -= este %d\n", c);
	c*= a;
	printf("valoare lui c  pentru *= este %d\n", c);
	c/= a;
	printf("valoare lui c  pentru /= este %d\n", c);
	c=200;
	c%= a;
	printf("valoare lui c  pentru %= este %d\n", c);
	c<<= 2;
	printf("valoare lui c  pentru <<= este %d\n", c);
	c>>= 2;
	printf("valoare lui c  pentru >>= este %d\n", c);
	c^= a;
	printf("valoare lui c  pentru ^= este %d\n", c);
	c |= a;
	printf("valoare lui c  pentru |= este %d\n", c);
	c%= a;
	printf("valoare lui c  pentru %= este %d\n", c);
	c&= a;
	printf("valoare lui c  pentru &= este %d\n", c);
}
