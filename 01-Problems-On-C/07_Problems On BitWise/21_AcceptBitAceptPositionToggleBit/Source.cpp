#include<stdio.h>
#define TRUE	1
#define FALSE	0
typedef int	   BOOL;
typedef unsigned int UINT;


BOOL ToggleBit(UINT No,int iPos)
{
	if((iPos < 1) || (iPos > 32))
		{
			return No;
		}
		
	UINT iResult=0;
	
	UINT mask=0X00000001;
	mask = mask << (iPos-1);
	
	iResult = No ^ mask;
	return iResult ;
			
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
	printf("\t\tModified Bit is -> %d",iRet);
	
	
	return 0;
}
