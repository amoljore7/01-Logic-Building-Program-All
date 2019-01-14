#include<stdio.h>
typedef unsigned int UINT;
typedef unsigned long int LONG;

UINT OddDigitAdd(LONG iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	LONG iSum=0;
	LONG iDigit=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
			if((iDigit%2)==1)
			{
				iSum=iSum+iDigit;
			}
		iNo=iNo/10;
	}
	return iSum;
}

int main(int argc,char* argv[])
{
	LONG iValue=0;
	LONG iRet=0;
	printf("\t\tEnter The Number: ");
	scanf("%ld",&iValue);
	
	iRet=OddDigitAdd(iValue);
	
	printf("\t\tAddition Of Odd Digit %ld: ",iRet);
}
