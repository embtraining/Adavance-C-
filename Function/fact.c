/*Factorial of a number\n*/

#include<stdio.h>

int factorial(int);

int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num<0)
		printf("no factorial for negative number\n");
	else
		printf("Factorial of %d is %d \n",num,factorial(num));
}


int factorial(int n)
{
	int i,fact=1;
	if(n==0)
		return 1;
	for(i=n;i>1;i--)
		fact=fact*i;
	return fact;
}
