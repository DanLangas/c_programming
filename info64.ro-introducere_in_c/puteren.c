#include <stdio.h>


int main()
{
	int n;
	printf("Introduceti n: \n");
	scanf("%d", &n);
	int p=1;
	printf("2^%d=%d", n, p=(p<<n));
	return 0;
}
