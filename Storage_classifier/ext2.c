/*extern storage classifier*/


#include<stdio.h>

extern int a;

void num(void)
{
	int b=10,ans;
	ans=a+b;
	printf("\n Addition : %d\n", ans);
}
