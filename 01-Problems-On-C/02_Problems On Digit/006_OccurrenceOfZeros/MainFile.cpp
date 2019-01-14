
#include<stdio.h>
typedef unsigned int UINT;
typedef unsigned long int LONG;

UINT OccurrenceOfZeros(LONG iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	UINT OValue=0;
	UINT iDigit=0;
	UINT iCnt=0;

	while(iNo!=0)
	{
			iDigit=iNo%10;
			if(OValue==iDigit)
			{
				iCnt++;
			}	
			iNo=iNo/10;
	}
	return iCnt;
}

int main(int argc,char* argv[])
{
	LONG iValue=0;
	LONG iRet=0;
	
	printf("\t\tEnter The Number: ");
	scanf("%ld",&iValue);

	iRet=OccurrenceOfZeros(iValue);
	
	printf("\t\tOccurrence Of Zeros is: %ld ",iRet);
}
