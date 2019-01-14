#include<stdio.h>
#include<stdlib.h>
#define TRUE	1
#define FALSE	0
typedef int BOOL;

BOOL ChkPallindrome(int *iArr1, int iSize1)
	{
		if( (iArr1 == NULL) || (iSize1 < 0) )
			{
				return -1;
			}
		int iCnt=0;
		int iSize= iSize1 -1;
		
		for(iCnt=0;iCnt<=iSize;iCnt++,iSize--)
			{
				if(iArr1[iCnt] != iArr1[iSize])
					{
						return FALSE;
					}
					
			}
			return TRUE;
		
	}
	
int main(int argc, char* argv[])
{
	int *iBrr1=NULL;
	BOOL  iRet=TRUE;
	int iLength1=0;
	
	int iCnt=0;
	
	printf("\t\tEnter SIZE of First Array: ");
	scanf("%d",&iLength1);
	
	
	iBrr1=(int*)calloc(iLength1,sizeof(int));
	
		if((iBrr1) == NULL)
				{
					return -1;
				}
	printf("\n\n");
	printf("\t\tEnter Element Of Array:\n");
	for(iCnt=0;iCnt<iLength1;iCnt++)
		{
			printf("\t\tElement No: %d\t",iCnt+1);
			scanf("%d",&iBrr1[iCnt]);
		}
	
	printf("\n\n");
	iRet=ChkPallindrome(iBrr1,iLength1);
	if(iRet == TRUE)
		{
			printf("\t\t TRUE\t Array is Pallindrome \n");
		}
	else
		{
			printf("\t\tFALSE\t Array NOT Pallindrome \n");	
		}
	free(iBrr1);
	
return 0;
	
}
