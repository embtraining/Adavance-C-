/*To understand the use of return statement*/

#include<stdio.h>

void funct(int,float);

int main()
{
	int age;
	float ht;

	printf("Enter age and height:");
	scanf("%d %f",&age,&ht);

	funct(age,ht);
}

void funct(int age,float ht)
{
	if(age>25)
	{
		printf("Age should be less than 25\n");
		return;
	}

	if(ht<5)
	{
		printf("height should be more than 5\n");
		return ;
	}
	printf("selected\n");
}
