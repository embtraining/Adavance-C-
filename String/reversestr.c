/*Reverse a string*/

#include<stdio.h>
#include<string.h>

int main()
{
	int i=0,j,temp;
        char x[20];
	printf("Enter a string:");
	gets(x);
	j=strlen(x);

	while(i<j)
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
		i++;
		j--;
	}

	printf("%s\n",x);
}

