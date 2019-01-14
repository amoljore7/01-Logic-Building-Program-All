#include<stdio.h>
#include<stdlib.h>
void EvenIncrement(int *iArr,int iSize)
{
	if((iArr==NULL)||(iSize<0))
	{
		return ;
	}
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((iArr[iCnt]%2)==0)
		{
		iArr[iCnt] = iArr[iCnt]+1;		
		}
		printf("\t%d",iArr[iCnt]);		
	}	
}
int main(int argc,char* argv[])
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
	EvenIncrement(iBrr,iLength);
	
	free(iBrr);
	return 0;
}
