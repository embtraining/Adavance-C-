/*predefined macros in c*/

#include<stdio.h>

int main()
{
	printf("\n File = %s",__FILE__);
	printf("\n Date = %s",__DATE__);
	printf("\n Time = %s",__TIME__);
	printf("\n Line = %d",__LINE__);
	printf("\n ANSI = %d",__STDC__);
	return 0;
}
