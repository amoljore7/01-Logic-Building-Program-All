#include<stdio.h>
int GeneRoot(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	int iDigit=0;
	int iTemp=iNo;
	int iSum=0;
	int iTotal=0;
	
	while(iTemp!=0)
	{
		iDigit=iTemp%10;
		iSum=iSum+iDigit;
		iTemp=iTemp/10;
	}
	 iSum;
	while(iSum!=0)
	{
		iDigit=iSum%10;
		iTotal=iTotal+iDigit;
		iSum=iSum/10;
	}
	return iTotal;
}
int main(int argv,char* argc[])
{
	int iNum=0;
	int iRet=0;
	
	printf("\t\tEnter The Number: ");
	scanf("%ld",&iNum);
	
	iRet=GeneRoot(iNum);
	printf("\t\t%d",iRet);
	
return 0;
}
