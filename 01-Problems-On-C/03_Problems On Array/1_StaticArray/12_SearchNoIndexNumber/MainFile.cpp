#include<stdio.h>

int Search(int *iArr,int iSize,int iNo)
	{
		int iCnt=0;
		if((iArr==NULL)||(iSize<0))
		{
			return -1;
		}
		for(iCnt=0;iCnt<iSize;iCnt++)
		{
			if(iArr[iCnt]==iNo)
			{
				break;
			}
		}
		if(iCnt==iSize)
		{
			return -1;
		}
		else
		{
			return iCnt;
		}
	}	
int main(int argc, char* argv[])
{
	int iSize=0;
	int iRet=0;
	int iNo=0;
	int iCnt=0;

	printf("\t\tEnter the Element of Array:\n");
	int iBrr[10]={0};
	for(iCnt=0;iCnt<10;iCnt++)
	{
		scanf("%d",&iBrr[iCnt]);
	}
	printf("\t\tEnter The Number To chk Index No: ");
	scanf("%d",&iNo);
	iRet=Search(iBrr,iSize,iNo);
	
	if(iRet==-1)
	{
		printf("\t\tThere is No Such Number ");
	}
	else
	{
		printf("\t\tNumber Occureded is Index: %d ",iRet);
	}
	
	return 0;
}


