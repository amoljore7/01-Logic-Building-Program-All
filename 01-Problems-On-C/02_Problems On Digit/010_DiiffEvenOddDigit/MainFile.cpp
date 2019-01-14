#include<stdio.h>
typedef unsigned int UINT;
typedef unsigned long int LONG;

UINT DiffDigit(LONG iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	LONG iSum=0;
	LONG iEven=0;
	LONG iOdd=0;
	LONG iDigit=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
			if((iDigit%2)==0)
			{
				iEven=iEven+iDigit;
			}
			else
			{
				iOdd=iOdd+iDigit;
			}
		iNo=iNo/10;
	}
	return iSum=iEven-iOdd;
}

int main(int argc,char* argv[])
{
	LONG iValue=0;
	LONG iRet=0;
	printf("\t\tEnter The Number: ");
	scanf("%ld",&iValue);
	
	iRet=DiffDigit(iValue);
	
	printf("\t\tDifference Of Even - Odd Digit %ld: ",iRet);
}
