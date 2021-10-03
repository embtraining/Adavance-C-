/* Static global  storage class*/

#include<stdio.h>

static int a = 10;

void num(void);

int main()
{
	num();
	num();
	num();

	printf("%d\n",a);
}

void num(void)
{
	static int a = 1;
	printf("%d\n", a);
	a++;
}


/*OUTPUT
 * 1
   2
   3
   10
*/

