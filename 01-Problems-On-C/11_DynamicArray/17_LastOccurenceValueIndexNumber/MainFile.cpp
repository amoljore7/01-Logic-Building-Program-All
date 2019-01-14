#include<stdio.h>
#include<stdlib.h>

int Display(int *iArr,int iSize,int iNo)
{
	int iCnt=0;
	int iTemp=0;
	if((iArr[iCnt]==NULL)||(iSize<0)||(iNo<0))
	{
		return -1;
	}

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(iArr[iCnt]==iNo)
		{
			iTemp=iCnt;
		}
	}
	return iTemp;
}
int main(int argc,char* argv[])
{
	int iRet=0;
	int iSize=0;
	int iNo=0;
	int iCnt=0;
	int *iBrr=NULL;
	
	printf("\t\tEnter The SIZE of Array: ");
	scanf("%d",&iSize);
	
	printf("\t\tAccept One Value: ");
	scanf("%d",&iNo);
	iBrr=(int*)calloc(iSize,sizeof(int));
		if(iBrr==NULL)
		{
			printf("\t\tUnable To Allocate Memory");
			return -1;
		}
	printf("\t\tEnter the Element of Array:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&iBrr[iCnt]);
	}

	iRet=Display(iBrr,iSize,iNo);
	printf("\t\tLast Occurence Of %d is Index-> %d",iNo,iRet);
	free(iBrr);
	return 0;
}
