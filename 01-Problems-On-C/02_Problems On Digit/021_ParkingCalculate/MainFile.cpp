#include<stdio.h>
typedef unsigned int UINT;
UINT ParkingCalculate(UINT iHrs)
{
	if(iHrs<0)
	{
		iHrs=-iHrs;
	}
	UINT hrs=0;
	UINT amt=30;
	UINT temp=0;
		if(iHrs<=3)
		{
			return amt;
		}
		else
		{
			temp=(iHrs-3)*5;
			amt=amt+temp;
		}
	
	return amt;
}

int main(int argv,char* argc[])
{
	UINT iHrs=0;
	UINT iRet=0;
	printf("\t\tEnter No Of hourse: ");
	scanf("%ld",&iHrs);
	iRet=ParkingCalculate(iHrs);
	 printf("\t\t Total Amount is %d ",iRet);
	return 0;
}
