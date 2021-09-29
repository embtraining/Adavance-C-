/*defined preprocessor directive*/

#include<stdio.h>

int main()
{
  #if !defined max
      #define max 100
       printf("\n value of max= %d",max);
  #endif
  return 0;
}

