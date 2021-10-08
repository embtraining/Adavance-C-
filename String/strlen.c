/*length of string using strlen and gets*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	unsigned int len;
	printf("Enter a string:");
	gets(str);
	len = strlen(str);
	printf("length of '%s' is : '%d'\n",str,len);
}

/*OUTPUT
 *E nter a string:Embedded training
length of 'Embedded training' is : '17'
*/

