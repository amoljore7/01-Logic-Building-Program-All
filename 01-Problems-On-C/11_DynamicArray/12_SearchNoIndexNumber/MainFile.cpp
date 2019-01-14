#include<stdio.h>
#include<stdlib.h>
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
	int *iBrr=NULL;
	int iLength=0;
	int iRet=0;
	int iNo=0;
	int iCnt=0;
	printf("\t\tEnter The SIZE of Array: ");
	scanf("%d",&iLength);
	printf("\t\tEnter the Element of Array:\n");
		
	iBrr=(int*)calloc(iLength,sizeof(int));
		if(iBrr==NULL)
		{
			printf("\t\tUnable To Allocate Memory");
			return -1;
		}
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&iBrr[iCnt]);
	}
	printf("\t\tEnter The Number To chk Index No: ");
	scanf("%d",&iNo);
	iRet=Search(iBrr,iLength,iNo);
	
	if(iRet==-1)
	{
		printf("\t\tThere is No Such Number \n");
	}
	else
	{
		printf("\t\tNumber Occureded is Index: %d \n",iRet);
	}
	free(iBrr);
	return 0;
}


