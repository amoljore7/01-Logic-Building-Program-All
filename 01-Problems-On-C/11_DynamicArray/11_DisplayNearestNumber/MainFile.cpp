#include<stdio.h>
#include<stdlib.h>
void DisplayNearest(int *iArr,int iSize)
{
	int iDiff=0;
	int Near=999990;
	int iCnt=0;
	int iIndex=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iDiff=iArr[iCnt]-90;
		if(iDiff<0)
		{
			iDiff=-iDiff;
		}
		if(iDiff<iArr[iCnt])
		{
			Near=iDiff;
			iIndex=iCnt;
		}
	}
	printf("\t\tNearest Element is: %d",*(iArr+iIndex));
}
int main(int argc,char* argv)
{
	int iCnt=0;
	int iRet=0;
	int iLength=0;
	
	int *iBrr=NULL;
	printf("\t\tEnter No.Of Element: ");
	scanf("%d",&iLength);
	
	iBrr=(int*)calloc(iLength,sizeof(int));
		if(iBrr==NULL)
		{
			printf("\t\tUnable To Allocate Memory");
			return -1;
		}
		printf("\t\tEnter Element: \n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&iBrr[iCnt]);
	}
	DisplayNearest(iBrr,iLength);
	free(iBrr);
	return 0;
}
