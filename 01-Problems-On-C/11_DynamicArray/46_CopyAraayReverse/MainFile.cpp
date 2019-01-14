#include<stdio.h>
#include<stdlib.h>

int *CopyAraayRev(int *iArr1, int iSize1)
	{
		if( (iArr1 == NULL) || (iSize1 < 0) )
			{
				return NULL;
			}
		int iCnt=0;
		int iSize=iSize1 - 1;
		int *AraayRev=NULL;
		
		AraayRev=(int*)malloc(iSize * sizeof(int));
				if((AraayRev == NULL) || (iSize < 0))
				{
					return NULL;
				}	
		for(iCnt=0;iSize>=0;iSize--,iCnt++)
			{
				AraayRev[iCnt] = iArr1[iSize];
			}
		return AraayRev;
	}
	
int main(int argc, char* argv[])
{
	int *iBrr1=NULL;
	int *iPtr=NULL;
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
	iPtr=CopyAraayRev(iBrr1,iLength1);
	
	printf("\t\tArray In Reverse -> ");
		for(iCnt=0;iCnt<iLength1;iCnt++)
			{
				printf("%d ",iPtr[iCnt]);
			}
	
		
	free(iBrr1);
	free(iPtr);
	
return 0;
	
}
