/*preprocessor #error directive*/

#include<stdio.h>
#define max 100

int main()
{
  #ifdef max
	printf("\n max =%d",max);
  #else
      #error value of max is not defined
  #endif
  return 0;
}




