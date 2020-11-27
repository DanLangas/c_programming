#include <stdio.h>

int main(){
	double balance[5] = {100, 2, 3.4, 17,50};
	double *p;
	int i;

	p = balance;

	printf("Array values using pointer\n");
	for (i = 0; i< 5; i++)
	{
		printf("*(p+%d) : %f\n", i, *(p+i));
	}

	printf("Array values using balance as address: \n");
	for (i=0;i<5;i++)
	{
		printf("*(balance + %d) : %f\n", i, *(balance +i));
	}
	return 0;
}

