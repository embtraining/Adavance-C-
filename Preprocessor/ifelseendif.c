/*preprocessor directive if,else,endif*/

#include<stdio.h>
#define age 15

int main()
{
  #if age >= 18
	printf("\n Eligible for vote");
  #else
	printf("\n Not eligible for vote");
  #endif
	return 0;
}

