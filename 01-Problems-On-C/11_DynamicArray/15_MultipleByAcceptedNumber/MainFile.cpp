#include<stdio.h>
#include<stdlib.h>

void Display(int *iArr,int iSize,int iNo)
{
	int iCnt=0;
	if((iArr[iCnt]==NULL)||(iSize<0)||(iNo<0))
	{
		return;
	}
	
	printf("\t\tMultiplay Of %d is ->",iNo);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((iArr[iCnt]%iNo)==0)
		{
			printf(" %d ",iArr[iCnt]);
		}
	}
}
int main(int argc,char* argv[])
{
	int iSize=0;
	int iNo=0;
	int iCnt=0;
	int *iBrr=NULL;
	
	printf("\t\tEnter The SIZE of Array: ");
	scanf("%d",&iSize);
	
	printf("\t\tEnter Multiple Number: ");
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

	Display(iBrr,iSize,iNo);
	free(iBrr);
	return 0;
}
