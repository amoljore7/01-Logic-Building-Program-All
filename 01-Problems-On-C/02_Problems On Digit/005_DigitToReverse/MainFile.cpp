#include<stdio.h>

typedef unsigned long int LONG;

LONG DigitToReverse(LONG iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	LONG iSum=0;
	LONG iDigit=0;
	LONG iRev=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}

int main(int argc,char* argv[])
{
	LONG iValue=0;
	LONG iRet=0;
	printf("\t\tEnter The Number: ");
	scanf("%ld",&iValue);
	
	iRet=DigitToReverse(iValue);
	printf("\t\tReverse Digit is:%d ",iRet);
	
}
