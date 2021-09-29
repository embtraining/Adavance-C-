/*preprocessor directive #if ,#elif,#else,#endif directive*/

#include<stdio.h>
#define NUMBER 10

int main()
{
 #if NUMBER >0
	printf("\n Number is Positive\n");
 #elif NUMBER<0
	printf("\n Number is Negative\n");
 #else
	printf("\n NUmber is Zero\n");
 #endif
}
