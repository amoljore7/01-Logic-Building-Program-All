#include<stdio.h>

int SumSeries(int No)
{
	if(No < 0)	
	{
		No = -No;
	}
	
	int i=0;
	int j =0;
	
	int iSum = 0;
	int s=0;
	
	for(i=1;i<=No;i++)
	{
		iSum+=i*(No-(i-1));
	}
	return iSum;
}
int main(int argc, char *argv[])
{
	int iNum = 0;
	int iRet = 0;
	
	printf("Enter Natural Number : ");
	scanf("%d",&iNum);
	
	iRet = SumSeries(iNum);
	printf("Sum is : %d\n",iRet);
	
	return 0;
}
