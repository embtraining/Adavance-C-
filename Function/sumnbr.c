/*Find the sum of two number*/

#include<stdio.h>

int sum(int x,int y);

int main()
{
	int a,b,s;

	printf("Enter the values of a and b:");
	scanf("%d %d",&a,&b);

	s = sum(a,b);

	printf("Sum of %d and %d is %d\n",a,b,s);
}

int sum(int x,int y)
{
	int s;
	s = x+y;
	return s;
}
