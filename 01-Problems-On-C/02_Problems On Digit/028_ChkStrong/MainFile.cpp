#include<stdio.h>
typedef unsigned int UINT;

UINT ChkStrong(UINT iNo)
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
	UINT Temp=0;
	
	printf("\t\tEnter The Number: ");
	scanf("%ld",&iNum);
	
	iRet=ChkStrong(iNum);
	if(iNum==iRet)
	{
		printf("\t\t %d It is Strong Number: ",iRet);
	}
	else
	{
		printf("\t\t %d It is NOT Strong Number: ",iRet);
	}
	
return 0;
}
