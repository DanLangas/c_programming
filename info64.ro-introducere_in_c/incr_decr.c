#include <stdio.h>

int main(){
	int val=1;

	printf("Utilizarea postfix %d\n", val++);
	printf("Valoarea dupa incrementarea postfix %d\n", val);
	

	printf("Utilizarea prefix %d\n", ++val);
	printf("Valoarea dupa incrementarea prefix %d\n", val);

	printf("Utilizarea postfix %d\n", val--);
	printf("Valoarea dupa decrementarea postfix %d\n", val);
	

	printf("Utilizarea prefix %d\n", --val);
	printf("Valoarea dupa decrementarea prefix %d\n", val);
	return 0;
}
