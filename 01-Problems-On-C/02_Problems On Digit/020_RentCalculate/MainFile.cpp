#include<stdio.h>
#include<stdio.h>
typedef unsigned int UINT;
UINT RentCalculate(UINT iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	UINT Rent=15;
	UINT temp1=0;
	UINT temp2=0;
	UINT temp3=0;
	UINT amt=0;
	
	if(iNo<=120)
		{
			amt=iNo*Rent;
			return amt;
		}
		else
		{
			temp1=120*Rent;
			temp2=(iNo-120)*10;
			temp3=temp1+temp2;
			return temp3;
		}
		
}

int main(int argv,char* argc[])
{
	UINT iRent=0;
	UINT iRet=0;
	printf("\t\tEnter Total No of Kilometers: ");
	scanf("%ld",&iRent);
	iRet=RentCalculate(iRent);
	 printf("\t\t Total Amount of Rent is %d ",iRet);
	return 0;
}
