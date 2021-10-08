/*length of string without using library function*/

#include<stdio.h>

int StringLength(char[]);
void main()
{
	char str[30];
	int len;
	printf("Enter string:");
	gets(str);
	  len = StringLength(str);
	  printf("Length : %d\n",len);
}

int StringLength(char x[])
{
	int i=0,count = 0;
	if(x[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}


