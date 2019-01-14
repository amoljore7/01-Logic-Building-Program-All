#include<stdio.h>
int SumRange(int *iArr,int iSize,int iStart,int iEnd)
{
	int iCnt=0;
	int iSum=0;
	if((iArr==NULL)||(iSize<0)||(iStart>iEnd))
	{
		return 0;
	}
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((iArr[iCnt]>=iStart)&&(iArr[iCnt]<=iEnd))
		{
		iSum=iSum+iArr[iCnt];
		}
	}
	return iSum;
}

int main(int argc,char* argv[])
{
	int iBrr[10]={0};
	int iCnt=0;
	int iStart=0;
	int iEnd=0;
	int iRet=0;
	printf("\t\tEnter Start Element: ");
	scanf("%d",&iStart);
	printf("\t\tEnter End Element: ");
	scanf("%d",&iEnd);
	printf("\t\tEnter 10 Element: ");
	for(iCnt=0;iCnt<10;iCnt++)
	{
		scanf("%d",&iBrr[iCnt]);
	}
	iRet=SumRange(iBrr,10,iStart,iEnd);
	printf("\t\tAddition is %d->",iRet);
	return 0;
}