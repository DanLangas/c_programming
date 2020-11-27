#include <stdio.h>

void media(int x, int y, int* media)
{
	*media=(x + y)/2;
}

int main(){
	int a, b, c;
	printf("Introduceti numarul a: \n");
	scanf("%d", &a);
	printf("Introduceti numarul b: \n");
	scanf("%d", &b);
	media(a,b,&c);
	printf("Media numereleor este %d\n", c);
	return 0;
}
