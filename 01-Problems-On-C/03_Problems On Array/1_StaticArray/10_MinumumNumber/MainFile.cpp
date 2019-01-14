#include<stdio.h>
int Minimum(int *iArr,int iSize)
{
	int iCnt=0;
	int iMin=100000;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(iArr[iCnt]<iMin)
		{
			iMin=iArr[iCnt];
		}
	}
	return iMin;
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
	iRet=Minimum(iBrr,10);
	printf("\t\tSmallest Number is: %d",iRet);
	
	return 0;
}
