/*AFunction that returning only one value*/

#include<stdio.h>

int main()
{
	int k=func();
	printf("k=%d\n",k);
}

int func()
{
	int x=3,y=4;
	return x,y;
}
