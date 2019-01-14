#include<stdio.h>
typedef unsigned int UINT;
typedef long int LONG;

UINT DigitDiff(LONG iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int iDigit=0;
	int max=0;
	int min=9;
	int iDiff=0;
	int Temp=iNo;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iNo=iNo/10;
		if(iDigit==0)
			continue;
		if(iDigit<min)
		{
			min=iDigit;
		}
		if(iDigit>max)
		{
			max=iDigit;
		}
		
	}	
	iDiff=max-min;
	return iDiff;
}
int main(int argv,char* argc[])
{
	UINT iNum=0;
	UINT iRet=0;
	
	printf("\t\tEnter The Number: ");
	scanf("%ld",&iNum);
	
	iRet=DigitDiff(iNum);
	printf("\t\tDigit  Diff is %ld",iRet);
	
return 0;
}
