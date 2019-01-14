#include<stdio.h>

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
	
	
	printf("\t\tAccept One Value: ");
	scanf("%d",&iNo);
	
	printf("\t\tEnter the Element of Array:\n");
	int iBrr[10]={0};
	
	for(iCnt=0;iCnt<10;iCnt++)
	{
		scanf("%d",&iBrr[iCnt]);
	}

	iRet=Display(iBrr,10,iNo);
	printf("\t\tLast Occurence Of %d is Index-> %d",iNo,iRet);
	
	return 0;
}
