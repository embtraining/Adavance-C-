/*stdlib atexit test program*/

#include<stdio.h>
#include<stdlib.h>


void showMsg()
{
	printf("Thanks for using this program\n");
}

int main()
{
	int status;

	status = atexit(showMsg);

	if(status ==0)
	{
		printf("showMsg() will get executed at programs exit\n");
	}
	else
	{
		printf("showMsg() is not get registered at programs exit\n");
	}


	printf("Start of main()\n");
	exit(0);
	printf("Hello programmers\n");
	printf("End of main program\n");
}
