#include<stdio.h>
#include<stdlib.h>
void PrintPrime(int *iArr,int iSize)
{
	int iCnt=0;
	int j=0;
	int flag=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		flag=1;
		for(j=iArr[iCnt]/2;j>=2;j--)
		{
			if((iArr[iCnt]%j)==0)
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			printf(" %d ",iArr[iCnt]);
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
	PrintPrime(iBrr,iLength);
	
	free(iBrr);
	return 0;
}
