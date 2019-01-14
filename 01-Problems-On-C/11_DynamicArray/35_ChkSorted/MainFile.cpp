#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSorted(int *iArr,int iSize)
{
	if((iArr==NULL) || (iSize<0))
		{
			return -1;
		}
	int iCnt=0;
	int iSort=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
		{
			if(iArr[iCnt] >= iSort)
				{
					iSort=iArr[iCnt];	
				}
			else
				break;
		}
		
	if(iCnt<iSize)
			{
				return FALSE;
			}
		else
		{
			return TRUE;
		}
}
int main(int argc, char* argv)
	{
		int *iBrr=NULL;
		int iLength=0;
		int iCnt=0;
		int iRet=0;
		
		printf("\t\tEnter Size of Array: ");
		scanf("%d",&iLength);
		
		iBrr=(int*)calloc(iLength,sizeof(int));
			if(iBrr==NULL)
				{
					return -1;
				}
		printf("\t\tEnter Element:\n");
		for(iCnt=0;iCnt<iLength;iCnt++)
			{
				printf("\t\tEnter Element No. %d\t",iCnt+1);
				scanf("%d",&iBrr[iCnt]);
			}
		iRet=ChkSorted(iBrr,iLength);
		printf("\n\n");
		if(iRet==TRUE)
			{
				printf("\t\tTRUE\n");
			}
		else
			{
				printf("\t\tFALSE\n");
			}
		free(iBrr);
		return 0;
	}
