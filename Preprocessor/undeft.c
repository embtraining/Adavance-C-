/*#undef directive */

#include<stdio.h>
#define PI 3.142

int main()
{
	printf("\n Value of PI = %.2f",PI);
        #undef PI
	printf("\n Value of PI = %.2f",PI);
	return 0;
}
