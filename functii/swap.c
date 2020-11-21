#include <stdio.h>

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

	return;
}


int main(){
	int a = 120;
	int b = 250;

	printf("before swap, value of a : %d\n", a);
	printf("before swap, value of b : %d\n", b);
	swap(&a,&b);
	printf("after swap, value of a : %d\n", a);
	printf("after swap, value of b : %d\n", b);
return 0;
}
