#include<stdio.h>
int Maximum(int *iArr,int iSize)
{
	int iCnt=0;
	int iMax=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(iArr[iCnt]>iMax)
		{
			iMax=iArr[iCnt];
		}
	}
	return iMax;
}
int main(int argc,char* argv[])
{
	int iRet=0;
	int i=0;
	
	printf("\t\tEnter Element:\n");
	int iBrr[10]={0};
	for(i=0;i<10;i++)
	{
		scanf("%d",&iBrr[i]);
	}
	iRet=Maximum(iBrr,10);
	printf("\t\tLargest Number is: %d",iRet);
	
	return 0;
}
