#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define  TRUE 1
#define  FALSE 0

BOOL ArrayCompare(int *iArr,int iSize1, int *iBrr, int iSize2)
{
	int iCnt=0;
	if(iSize1 != iSize2)
		{
			return FALSE;
		}
		for(iCnt=0;iCnt<iSize1;iCnt++)
			{
				if(iArr[iCnt] != iBrr[iCnt])
				{
				break;
				}
			}
		if(iCnt<iSize1)
			{
				return FALSE;
			}
		else
		{
			return TRUE;
		}
}
int main(int argc, char* argv[])
{
	int *iArr=NULL;
	int *iBrr=NULL;
	int iLength1=0;
	int iLength2=0;
	int iCnt=0;
	int iRet=0;
	
	printf("\t\tEnter Size Of First Array: ");
	scanf("%d",&iLength1);
	
	printf("\t\tEnter Size Of Second Array: ");
	scanf("%d",&iLength2);
	
	iArr=(int*)calloc(iLength1,sizeof(int));
		if(iArr==NULL)
		{
			return -1;
		}
	iBrr=(int*)calloc(iLength2,sizeof(int));
		if(iBrr==NULL)
		{
			return -1;
		}
	printf("\t\tEnter Element Of First Array:\n");
	for(iCnt=0;iCnt<iLength1;iCnt++)
		{
			printf("\t\tEmter Element No: %d\t",iCnt+1);
			scanf("%d",&iArr[iCnt]);
		}
		printf("\t\tEnter Element Of Second Array:\n");
	for(iCnt=0;iCnt<iLength2;iCnt++)
		{
			printf("\t\tEmter Element No: %d\t",iCnt+1);
			scanf("%d",&iBrr[iCnt]);
		}
	
		iRet=ArrayCompare(iArr,iLength1,iBrr,iLength2);
		printf("\n\n");
		if(iRet==TRUE)
			{
				printf("\t\tArray Are Equal ");
			}
		else
			{
				printf("\t\t Not Equal");
			}
		
	free(iArr);
	free(iBrr);
	return 0;
}
