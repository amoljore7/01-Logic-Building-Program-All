#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int *Arr,int iSize)
{
	int iCnt=0;
	printf("\tEven Number -> ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			printf(" %d ",Arr[iCnt]);
		}
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
	DisplayEven(iBrr,iLength);
	free(iBrr);
	return 0;
}
