#include<stdio.h>
#include<stdlib.h>
int DiffEvenOddAdd(int *iArr,int iSize)
{
	if((iArr==NULL)||(iSize<0))
	{
		return -1;
	}
	int iEven=0;
	int iOdd=0;
	int iDiff=0;
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
		{
			if((iArr[iCnt]%2)==0)
				{
					iEven=iEven+iArr[iCnt];	
				}
			else
				{
					iOdd=iOdd+iArr[iCnt];
				}
		}
		iDiff=iEven-iOdd;
		if(iDiff<0)
		{
			iDiff=-iDiff;
		}
		return iDiff;
}
int main(int argc,char *argv[])
{
	int iRet=0;
	int iCnt=0;
	int iLength=0;
	int *iBrr=NULL;
	
	printf("\t\tEnter No.Of Element: ");
	scanf("%d",&iLength);
	
	iBrr=(int*)calloc(iLength,sizeof(int));
	if(iBrr==NULL)
		{
			printf("\t\tUnable to Allocate Memory: ");
			return -1;
		}
	printf("\t\tEnter Element: \n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&iBrr[iCnt]);
	}
	iRet=DiffEvenOddAdd(iBrr,iLength);
	printf("\t\tDifference is -> %d",iRet);
	
	return 0;
}
