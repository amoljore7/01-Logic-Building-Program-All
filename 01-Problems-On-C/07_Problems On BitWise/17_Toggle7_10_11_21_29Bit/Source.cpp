#include<stdio.h>
#define TRUE	1
#define FLASE	0
typedef int	   BOOL;
typedef unsigned int UINT;


int ToggleBit(UINT uNo)
{
	UINT mask=0X10100640;
	UINT iResult=0;
	
	iResult = uNo ^ mask;
	
	return iResult;	
}

int main(int argc, char *argv[])
{
	UINT uNum=0;
	UINT iRet=0;
	
	printf("\t\tEnter Number:\t");
	scanf("%d",&uNum);
	printf("\n\n");
	iRet=ToggleBit(uNum);
	printf("\t\tAfter  Bit Mask -> %u",iRet);
	
	
	return 0;
}
