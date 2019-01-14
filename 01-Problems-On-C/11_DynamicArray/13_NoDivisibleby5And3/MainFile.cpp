#include<stdio.h>
#include<stdlib.h>
void Display(int *iArr,int iSize)
{
	int iCnt=0;
	if((iArr[iCnt]==NULL)||(iSize<0))
	{
		return;
	}
	
	printf("\t\tDivisible Number is ->");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(((iArr[iCnt]%5)==0)&&((iArr[iCnt]%3)==0))
		{
			printf(" %d ",iArr[iCnt]);
		}
	}
}
int main(int argc,char* argv[])
{
	int iSize=0;
	int *iBrr=NULL;
	int iNo=0;
	int iCnt=0;
	printf("\t\tEnter The SIZE of Array: ");
	scanf("%d",&iSize);
	printf("\t\tEnter the Element of Array:\n");
		iBrr=(int*)calloc(iSize,sizeof(int));
		if(iBrr==NULL)
		{
			printf("\t\tUnable To Allocate Memory");
			return -1;
		}
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&iBrr[iCnt]);
	}
	Display(iBrr,iSize);
	free(iBrr);
	return 0;
}
