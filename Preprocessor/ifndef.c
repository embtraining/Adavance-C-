/*preprocessor #ifndef directive*/
#include<stdio.h>
#define max 100

int main()
{
  #ifndef PI
	printf("\max is not defined");
  #else
	printf("\max is defined");
  #endif
	return 0;
}


 





