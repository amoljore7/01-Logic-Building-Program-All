#include<stdio.h>
#include<stdlib.h>
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
	iRet=Maximum(iBrr,iLength);
	printf("\t\tMaximum No is->%d",iRet);
	
	free(iBrr);
	return 0;
}
