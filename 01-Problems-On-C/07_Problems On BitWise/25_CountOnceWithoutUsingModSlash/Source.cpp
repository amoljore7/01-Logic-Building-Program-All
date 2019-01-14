#include<stdio.h>

typedef int UINT;

int CountBit(UINT iNo)
{
	int i =0;
	int iCnt =0;
	int iResult =0;
	int iMask = 0X1;

	for(i=1;i<=32;i++)
		{
			iResult = iNo & iMask;
			if(iResult == iMask)
				{
					iCnt++;
				}
			iMask = iMask << 1;
			}	
	return iCnt;	
}


int main(int argc, char *argv[])
{
	int iRet =0;
	UINT No = 47;
	iRet=CountBit(No);
	printf("Count Of 1s is : %d ",iRet);
	return 0;
}
