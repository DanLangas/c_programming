#include <stdio.h>

/* assume A is 1 and B is 1 */

int main(){
	int a = 1 ;
	int b = 1 ;
	int c;

	if (a && b)
	{
		printf("Line 1 - Condition is true\n");
	}
	if (a || b)
	{
		printf("Line 2 = Condition is true\n");
	}

	/* lets change the values of a and b */
	a = 0;
	b = 1;

	if (a && b)
	{
		printf("Line 3 - Condition is true\n");
	}
	else
	{
		printf("Line 3- Condition is npt true\n");
	}
	if(!(a && b))
	{
		printf("Line 4 - Condition is true\n");
	}
}


