
#include<stdio.h>
#define merge(a,b) b##a

int main()
{
	printf("%d\n",merge(12,36));
	return 0;
}
