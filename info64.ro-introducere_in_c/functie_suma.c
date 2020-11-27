#include <stdio.h>


int suma(int a, int b){
	int suma;
	suma = a + b;
	return suma;
}

int main(){
	int a, b, c;
	printf("Introduceti a de la tastatura: \n");
	scanf("%d", &a);
	printf("Introduceti b de la tastatura: \n");
	scanf("%d", &b);
	c = suma(a,b);
	printf("Suma numerelor este: %d\n", c);
	return 0;
}
