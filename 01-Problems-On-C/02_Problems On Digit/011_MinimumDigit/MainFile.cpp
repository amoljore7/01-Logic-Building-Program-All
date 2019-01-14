#include<stdio.h>

typedef unsigned int UINT;
typedef long int LONG;

UINT MinDigit(LONG iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	LONG iDigit=0;
	LONG iMin=iNo;
	
	while(iNo!=0)
		{
			iDigit=iNo%10;
				if(iMin>iDigit)
				{
					iMin=iDigit;
				}
				if(iMin==0)
				{
					break;
				}
			iNo=iNo/10;
		}
		return iMin;
}
int main(int argv, char* argc[])
{
	LONG iNum=0;
	LONG iRet=0;
	printf("\t\tEnter Any Number: ");
	scanf("%ld",&iNum);
	
	iRet=MinDigit(iNum);
	printf("\t\t MinDigit is %d",iRet);
	
	return 0;
}
