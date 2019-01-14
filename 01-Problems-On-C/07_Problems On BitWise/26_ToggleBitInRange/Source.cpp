#include<stdio.h>

#define TRUE	1
#define FALSE	0

typedef int UINT;

UINT ToggleBit(UINT iNo,int iStart,int iEnd)
{
	UINT Mask1 = 0XFFFFFFF;
	UINT Mask2 = 0XFFFFFFF;
	UINT Mask = 0;
	UINT iResult =0;
	
	Mask1 = Mask1 << (iStart-1);
	Mask2 = Mask2 >>(32 - iEnd);
	
	Mask = Mask1 & Mask2;
	iResult = iNo ^ Mask;
	
	return iResult;
}


int main(int argc, char *argv[])
{
	UINT iRet =0;
	UINT No = 0;
	printf("\t\tEnter Any Number : ");
	scanf("%d",&No);
	iRet=ToggleBit(No,10,22);
	printf("%d ",iRet);
	return 0;
}
