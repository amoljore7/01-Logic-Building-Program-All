
#include<stdio.h>
typedef unsigned int UINT;
typedef unsigned long int LONG;

UINT OccurrenceOfDigit(LONG iNo,LONG OValue)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	LONG iSum=0;
	LONG iDigit=0;
	LONG iCnt=0;

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
	LONG OValue=0;
	LONG iRet=0;
	printf("\t\tEnter The Number: ");
	scanf("%ld",&iValue);
	printf("\t\tEnter The Occurrence Value: ");
	scanf("%d",&OValue);
	
	iRet=OccurrenceOfDigit(iValue,OValue);
	
	printf("\t\tOccurrence Of Digit is: %ld: ",iRet);
}
