#include<stdio.h>
typedef unsigned int UINT;
typedef unsigned long int LONG;

UINT MultDigit(LONG iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	LONG iSum=1;
	LONG iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
			if(iDigit==0)
			{
			iDigit=1;
			}
		iSum=iSum*iDigit;
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
	
	iRet=MultDigit(iValue);
	
	printf("\t\tMultiplicaton Of Digit %ld: ",iRet);
}
