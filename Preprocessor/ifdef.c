/*  Preprocessor #ifdef directive*/

#include<stdio.h>
#define max 100

int main()
{
   #ifdef max
       printf("max=%d\n",max);
   #else
       printf("max is not defined");
   #endif
   return 0;
}   
