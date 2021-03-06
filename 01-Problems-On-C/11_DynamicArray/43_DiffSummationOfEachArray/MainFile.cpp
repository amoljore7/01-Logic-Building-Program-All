#include<stdio.h>
#include<stdlib.h>

int DiffArray(int *iArr1, int iSize1, int *iArr2, int iSize2)
	{
		if( ((iArr1 || iArr2) == NULL) || ((iSize1 || iSize2) < 0) )
			{
				return -1;
			}
			
		int iCnt=0;
		int iSum1=0;
		int iSum2=0;
		int iDiff=0;
	
		for(iCnt=0;iCnt<iSize1;iCnt++)
			{
				iSum1=iSum1+iArr1[iCnt];		
			}
			for(iCnt=0;iCnt<iSize2;iCnt++)
			{
				iSum2=iSum2+iArr2[iCnt];	
			}
		iDiff= iSum1 - iSum2;
		return iDiff;
	}
int main(int argc, char* argv[])
{
	int *iBrr1=NULL;
	int *iBrr2=NULL;
	int iLength1=0;
	int iLength2=0;
	int iRet=0;
	
	int iCnt=0;
	
	printf("\t\tEnter SIZE of First Array: ");
	scanf("%d",&iLength1);
	printf("\t\tEnter SIZE of Second Array: ");
	scanf("%d",&iLength2);
	
	iBrr1=(int*)calloc(iLength1,sizeof(int));
	iBrr2=(int*)calloc(iLength2,sizeof(int));
	
		if((iBrr1 || iBrr2) == NULL)
				{
					return -1;
				}
	printf("\n\n");
	printf("\t\tEnter Element Of First Array:\n");
	for(iCnt=0;iCnt<iLength1;iCnt++)
		{
			printf("\t\tElement No: %d\t",iCnt+1);
			scanf("%d",&iBrr1[iCnt]);
		}
	printf("\n\n");
	printf("\t\tEnter Element Of Second Array:\n");
	for(iCnt=0;iCnt<iLength2;iCnt++)
		{
			printf("\t\tElement No: %d\t",iCnt+1);
			scanf("%d",&iBrr2[iCnt]);
		}
	printf("\n\n");
	iRet=DiffArray(iBrr1,iLength1,iBrr2,iLength2);
	
	printf("\t\tDiff Of Two Array is -> %d",iRet);
	
	free(iBrr1);
	free(iBrr2);
	
return 0;
	
}
