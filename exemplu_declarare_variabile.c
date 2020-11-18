#include <stdio.h>


// variable declaration:
//

extern int a,b;
extern int c;
extern float f;

int main(){
/* variable definition */
	int a,b;
	int c;
	float f;

	/* actual declaration */

	a = 10;
	b = 20;

	c = a + b;
	printf("Value pf c : %d \n", c);

	f = 70.0/3.0;
	printf("Value pf f : %f \n", f);




return 0;
}
