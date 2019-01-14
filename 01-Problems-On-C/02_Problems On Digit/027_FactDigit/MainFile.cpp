#include<stdio.h>
typedef unsigned int UINT;

UINT FactDigit(UINT iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo==0)
	{
		iNo=1;
	}
	UINT iDigit=0;
	UINT iFact=1;
	UINT Temp=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		while(iDigit!=0)
		{
		iFact=iFact*iDigit;
		iDigit--;	
		}
		Temp=Temp+iFact;
		iFact=1;
		iNo=iNo/10;
	}
	return Temp;
}

int main(int argv,char* argc[])
{
	UINT iNum=0;
	UINT iRet=0;
	
	printf("\t\tEnter The Number: ");
	scanf("%ld",&iNum);
	
	iRet=FactDigit(iNum);
	printf("\t\tAddition of Factorial Digit is %ld ",iRet);
	
return 0;
}
