#include<stdio.h>
#define TRUE	1
#define FLASE	0
typedef int	   BOOL;
typedef unsigned int UINT;


int ToggleBit(UINT uNo,int iPos)
{
	UINT iResult=0;
	
	UINT mask=0X1;
	mask = mask <<(iPos-1);
	
	
	iResult = uNo ^ mask;
	
	return iResult;	
}

int main(int argc, char *argv[])
{
	UINT uNum=0;
	UINT iRet=0;
	int iPos=0;
	
	printf("\t\tEnter Number:\t");
	scanf("%d",&uNum);
	printf("\t\tEnter Position:\t");
	scanf("%d",&iPos);
	printf("\n\n");
	iRet=ToggleBit(uNum,iPos);
	printf("\t\tAfter  Bit Toggle -> %u",iRet);
	
	
	return 0;
}
