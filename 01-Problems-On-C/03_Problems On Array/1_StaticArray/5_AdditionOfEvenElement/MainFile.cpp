#include<stdio.h>

int DisplayEven(int *Arr,int iSize)
{
	int iCnt=0;
	int iSum=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iSum=iSum+Arr[iCnt];
		}
	}
	return iSum;
}
int main(int argc,char* argv[])
{
	int iRet=0;
	int iBrr[10]={0};
	
	int iCnt=0;
	printf("\t\tEnter Number:\n");
	for(iCnt=0;iCnt<10;iCnt++)
		{
			scanf("%d",&iBrr[iCnt]);
		}
	iRet=DisplayEven(iBrr,10);
	printf("\t\tAddtion OF Even Number is: -> %d",iRet);
	return 0;
}
