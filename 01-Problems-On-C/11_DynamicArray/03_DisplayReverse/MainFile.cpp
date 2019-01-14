#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int *Arr,int iSize)
{
	int Cnt=0;
	iSize--;
	printf("\tReverse Number -> ");
	for(iSize;iSize>=0;iSize--)
	{
		printf(" %d",Arr[iSize]);
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
	DisplayReverse(iBrr,iLength);
	
	free(iBrr);
	return 0;
}
