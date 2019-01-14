 #include<stdio.h>
#include<stdlib.h>
void PrintDigCount(int *iArr,int iSize)
{
	int iCnt=0;
	int iTemp=0;

	printf("\t\t Printed Digit Count is -> ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		int iCount=0;
		iTemp=iArr[iCnt];
		while(iTemp!=0)
		{
			iTemp=iTemp/10;
			iCount++;
		}
		printf(" %d ",iCount);
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
	PrintDigCount(iBrr,iLength);
	
	free(iBrr);
	return 0;
}
