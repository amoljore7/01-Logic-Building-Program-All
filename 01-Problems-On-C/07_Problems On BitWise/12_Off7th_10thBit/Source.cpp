#include<stdio.h>
#define TRUE	1
#define FLASE	0
typedef int	   BOOL;
typedef unsigned int UINT;

const char *cArr[]={"flase","true"};

int OFFBit(UINT uNo)
{
	UINT mask=0XFFFFFDBF;
	UINT iResult=0;
	
	iResult = uNo & mask;
	
	return iResult;	
}

int main(int argc, char *argv[])
{
	UINT uNum=0;
	UINT iRet=0;
	
	printf("\t\tEnter Number:\t");
	scanf("%d",&uNum);
	printf("\n\n");
	printf("\t\tBefore 7th && 10th Bit Mask -> %u\n",uNum);
	iRet=OFFBit(uNum);
	printf("\t\tAfter Bit Mask -> %u",iRet);
	
	
	return 0;
}
