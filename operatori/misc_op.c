#include <stdio.h>


int main(){
int a = 4;
short b;
double c;
int* ptr;


	printf("Size of var a = %f\n", sizeof(a));
	printf("Size of var b = %f\n", sizeof(b));
	printf("Size of var c = %f\n", sizeof(c));


ptr = &a;
	printf("Valoarea lui a este %d\n", a);
	printf("*ptr a lui a este %d\n", *ptr);

	a = 10;
	b = ( a== 1) ? 20:30;
	printf("Valoarea lui b este %d\n", b);

	b = ( a == 10) ? 20:30;
	printf("Valoarea lui b este %d\n", b);


}



