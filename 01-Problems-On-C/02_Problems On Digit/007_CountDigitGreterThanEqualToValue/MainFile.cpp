#include<stdio.h>
typedef unsigned int UINT;
typedef unsigned long int LONG;

UINT DigitCountX(LONG iNo,LONG iValue)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	LONG iCnt=0;
	LONG iDigit=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
			if(iDigit>=iValue)
			{
				iCnt++;
			}
		iNo=iNo/10;
	}
	return iCnt;
}

int main(int argc,char* argv[])
{
	LONG iNum=0;
	LONG iValue=0;
	LONG iRet=0;
	
	printf("\t\tEnter The Number: ");
	scanf("%ld",&iNum);
	
	printf("\t\tEnter The Value: ");
	scanf("%ld",&iValue);
	
	iRet=DigitCountX(iNum,iValue);
	
	printf("\t\tCount Digit Greter Than is  %ld: ",iRet);
}
