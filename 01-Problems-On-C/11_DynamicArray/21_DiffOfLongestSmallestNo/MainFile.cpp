#include<stdio.h>
#include<stdlib.h>
int DiffLongestSmallest(int *iArr,int iSize)
{
	if((iArr==NULL)||(iSize<0))
	{
		return -1;
	}
	int iCnt=0;
	int iDiff=0;
	int iMax=0;
	int iMin=iArr[iCnt];
	for(iCnt=0;iCnt<iSize;iCnt++)
		{
			
			if(iArr[iCnt] < iMin)
			{
				iMin=iArr[iCnt];
			}
			if(iArr[iCnt] > iMax)
			{
				iMax=iArr[iCnt];
			}
		}
		iDiff=iMax -iMin;
		if(iDiff<0)
		{
			iDiff=-iDiff;
		}
	return iDiff;
}
int main(int argc,char* argv[])
{
	int iRet=0;
	int iCnt=0;
	int iLength=0;
	int *iBrr=NULL;
	
	printf("\t\tEnter the No.Of Element: ");
	scanf("%d",&iLength);

	iBrr=(int*)calloc(iLength,sizeof(int));
		if(iBrr==NULL)
		{
			printf("\t\tUnable to Allocate Memory: ");
			return -1;
		}
		printf("\t\tEnter Element: \n");
	for(iCnt=0;iCnt<iLength;iCnt++)
		{
			scanf("%d",&iBrr[iCnt]);
		}

	iRet=DiffLongestSmallest(iBrr,iLength);
	printf("\t\tDiff. Longest And Smallest Element is -> %d",iRet);
	free(iBrr);
	return 0;
		
	}
