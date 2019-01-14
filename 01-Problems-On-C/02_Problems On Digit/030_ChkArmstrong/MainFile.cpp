#include<stdio.h>
int ChkArmstrong(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	int iDigit=0;
	int iTemp=iNo;
	int iSum=0;
	
	while(iTemp!=0)
	{
		iDigit=iTemp%10;
		iSum=iSum+iDigit*iDigit*iDigit;
		iTemp=iTemp/10;
	}
	return iSum;
}
int main(int argv,char* argc[])
{
	int iNum=0;
	int iRet=0;
	
	printf("\t\tEnter The Number: ");
	scanf("%ld",&iNum);
	
	iRet=ChkArmstrong(iNum);
	if(iNum==iRet)
	{
		printf("\t\tIt is Armstrong:");
	}
	else
	{
		printf("\t\tIt is NOT Armstrong");
	}
	
return 0;
}
