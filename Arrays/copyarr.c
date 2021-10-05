/*copy array from one array to another array*/
/* reverse array*/


#include<stdio.h>

int main()
{
	int src[10],des[10];


        printf("Enter elements\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&src[i]);
	}


        printf("coping grom src to des array\n");
	for(int i=0;i<10;i++)
	{
//	  des[i]=src[i];
	  des[9-i]=src[i];
	}

	printf("\n Display array of des\n");
	for(int i=0;i<10;i++)
	{
		printf("des[%d]=%d\n",i,des[i]);
	}

}

