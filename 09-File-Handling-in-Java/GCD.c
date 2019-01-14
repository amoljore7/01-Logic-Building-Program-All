#include<stdio.h>

int GCD(int No1, int No2)
{
	if(No1 == No2)
	{
		return No1;
	}
	if(No1%No2==0)
	{
		return No2;
	}
	if(No2%No1==0)
	{
		return No1;
	}
	
	if(No1 > No2)
	{
		return (GCD(No1 % No2,No2));
	}
	else
	{
		return (GCD(No1,No2 % No1));		
	}	
}
int main(int argc, char *argv[])
{
	int iNum1 = 0;
	int iNum2 = 0;
	int iRet = 0;
	
	printf("Enter First Number : ");
	scanf("%d",&iNum1);
	
	printf("Enter Second Number : ");
	scanf("%d",&iNum2);
	
	iRet = GCD(iNum1,iNum2);
	printf("GCD is : %d\n",iRet);
	
	return 0;
}
