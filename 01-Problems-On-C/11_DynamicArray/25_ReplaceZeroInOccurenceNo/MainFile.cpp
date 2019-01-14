#include<stdio.h>
#include<stdlib.h>

void Display(int *iArr,int iSize,int iNo)
{
	if((iArr==NULL)||(iSize<0)||(iNo<0))
	{
		return ;
	}
	int iCnt=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
		{
			if(iArr[iCnt]==iNo)
			{
			iArr[iCnt]=0;		
			}	
			printf("\t%d",iArr[iCnt]);
		}
}
int main(int argc, char* argv)
{
	int iLength=0;
	int iCnt=0;
	int iNum=0;
	int *iBrr=NULL;
	
	printf("\t\tEnter No.Of Element: ");
	scanf("%d",&iLength);
	printf("\t\tEnter Occorence Number: ");
	scanf("%d",&iNum);
	
	iBrr=(int*)calloc(iLength,sizeof(int));
		if(iBrr==NULL)
			{
				printf("\t\tUnable To Allocate Memory: ");
				return -1;
				
			}
	printf("\t\tEnter Element: \n");
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&iBrr[iCnt]);
	}
	Display(iBrr,iLength,iNum);
	free(iBrr);
	return 0;
}
