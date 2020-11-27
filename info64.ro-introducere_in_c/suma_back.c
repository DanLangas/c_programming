#include <stdio.h>

void suma(int x, int y, int* suma)
{
	*suma=x + y;
}

int main(){
	int a, b, c;
	printf("Introduceti numarul a: \n");
	scanf("%d", &a);
	printf("Introduceti numarul b: \n");
	scanf("%d", &b);
	suma(a,b,&c);
	printf("Suma numereleor este %d\n", c);
	return 0;
}
