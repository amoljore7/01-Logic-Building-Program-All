#include<stdio.h>

#define TRUE	1
#define FALSE	0

typedef int UINT;

int ChkEven(UINT iNo)
{
	if((iNo & 1)==1)
		{
			return FALSE;
			
		}
		else
		{
		
			return TRUE;
		}
}


int main(int argc, char *argv[])
{
	int iRet =0;
	int No = 0;
	printf("\t\tEnter Any Number : ");
	scanf("%d",&No);
	iRet=ChkEven(No);
	if(iRet == TRUE)
		{
			printf("\n\t\tNo Is Even\n");
		}
	else
		{
			printf("\n\t\tNo Is Odd\n");
		}
	return 0;
}
